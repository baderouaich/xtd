#include <xtd/convert_string.h>
#include <xtd/forms/browser_info_flags.h>
#define __XTD_FORMS_NATIVE_LIBRARY__
#include <xtd/forms/native/folder_browser_dialog.h>
#include "../../../../../include/xtd/forms/native/wxwidgets/control_handler.h"
#include "../../../../../include/xtd/forms/native/wxwidgets/dark_mode.h"
#undef __XTD_FORMS_NATIVE_LIBRARY__

#include <wx/filefn.h>
#include <wx/dirdlg.h>
#include <wx/windowptr.h>

using namespace xtd;
using namespace xtd::forms::native;

#if defined(__WXMSW__)
#include <ShlObj.h>
using namespace std;
namespace {
  HHOOK handle_hook;
  LRESULT CALLBACK callbackProc(INT ncode, WPARAM wparam, LPARAM lparam) {
    if (ncode == HCBT_ACTIVATE) {
      allow_dark_mode_for_window(static_cast<intptr>(wparam));
      refresh_title_bar_theme_color(static_cast<intptr>(wparam));
      UnhookWindowsHookEx(handle_hook);
    } else
      CallNextHookEx(handle_hook, ncode, wparam, lparam);
    return 0;
  }
  
  INT CALLBACK OnBrowserCalllback(HWND hwnd, UINT message, LPARAM lParam, LPARAM data) {
    if (message == BFFM_INITIALIZED && !wstring(reinterpret_cast<wchar*>(data)).empty())
      SendMessage(hwnd, BFFM_SETSELECTION, 1, data);
    return 0;
  }
}

bool folder_browser_dialog::run_dialog(intptr hwnd, const ustring& description, environment::special_folder root_folder, ustring& selected_path, size_t options) {
  BROWSEINFO browserInfo = { 0 };
  browserInfo.hwndOwner = hwnd == 0 ? nullptr : reinterpret_cast<control_handler*>(hwnd)->control()->GetHandle();
  PIDLIST_ABSOLUTE pidlRoot;
  SHGetSpecialFolderLocation(reinterpret_cast<HWND>(hwnd), static_cast<int32>(root_folder), &pidlRoot);
  browserInfo.lpfn = OnBrowserCalllback;
  wstring wselected_path = xtd::convert_string::to_wstring(selected_path);
  browserInfo.lParam = reinterpret_cast<LPARAM>(wselected_path.c_str());
  wstring wdescription = xtd::convert_string::to_wstring(description);
  browserInfo.lpszTitle = wdescription.c_str();
  
  browserInfo.ulFlags = options;
  
  handle_hook = SetWindowsHookExW(WH_CBT, &callbackProc, 0, GetCurrentThreadId());
  
  PCIDLIST_ABSOLUTE result = SHBrowseForFolder(&browserInfo);
  if (result) {
    wchar path[MAX_PATH];
    SHGetPathFromIDList(result, path);
    selected_path = wxString(path).ToUTF8().data();
    return true;
  }
  return false;
}

void folder_browser_dialog::run_sheet(xtd::delegate<void(bool)> on_dialog_closed, intptr hwnd, const ustring& description, environment::special_folder root_folder, ustring& selected_path, size_t options) {
  on_dialog_closed(run_dialog(hwnd, description, root_folder, selected_path, options));
}

#else
namespace {
  // Workaround : with wxWidgets version <= 3.1.4 wxDirDialog ShowWindowModal method doesn't exists on other platform that macOS
  #if defined(__APPLE__)
  using DirDialog = wxDirDialog;
  #else
  class DirDialog : public wxDirDialog {
  public:
    explicit DirDialog(wxWindow* parent, const wxString& message = wxDirSelectorPromptStr, const wxString& defaultPath = "", long style = wxDD_DEFAULT_STYLE, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, const wxString& name = wxDirDialogNameStr) : wxDirDialog(parent, message, defaultPath, style, pos, size, name) {}
    void ShowWindowModal() {
      SetReturnCode(ShowModal());
      wxWindowModalDialogEvent event(wxEVT_WINDOW_MODAL_DIALOG_CLOSED, GetId());
      event.SetEventObject(this);
      wxPostEvent(this, event);
    }
  };
  #endif
}

bool folder_browser_dialog::run_dialog(intptr hwnd, const ustring& description, environment::special_folder root_folder, ustring& selected_path, size_t options) {
  wxWindowPtr<DirDialog> dialog(new DirDialog(hwnd == 0 ? nullptr : reinterpret_cast<control_handler*>(hwnd)->control(), xtd::convert_string::to_wstring(description), convert_string::to_wstring((!selected_path.empty() && wxDirExists(wxString(convert_string::to_wstring(selected_path))) ? selected_path : environment::get_folder_path(root_folder))), wxDD_DEFAULT_STYLE));
  if (dialog->ShowModal() != wxID_OK) return false;
  selected_path = dialog->GetPath().c_str().AsWChar();
  return true;
}

void folder_browser_dialog::run_sheet(xtd::delegate<void(bool)> on_dialog_closed, intptr hwnd, const ustring& description, environment::special_folder root_folder, ustring& selected_path, size_t options) {
  wxWindowPtr<DirDialog> dialog(new DirDialog(hwnd == 0 ? nullptr : reinterpret_cast<control_handler*>(hwnd)->control(), xtd::convert_string::to_wstring(description), xtd::convert_string::to_wstring((!selected_path.empty() && wxDirExists(wxString(convert_string::to_wstring(selected_path))) ? selected_path : environment::get_folder_path(root_folder))), wxDD_DEFAULT_STYLE));
  dialog->Bind(wxEVT_WINDOW_MODAL_DIALOG_CLOSED, [dialog, on_dialog_closed, &selected_path](wxWindowModalDialogEvent & event) {
    auto result = event.GetReturnCode() == wxID_OK;
    selected_path = dialog->GetPath().c_str().AsWChar();
    on_dialog_closed(result);
  });
  dialog->ShowWindowModal();
}
#endif
