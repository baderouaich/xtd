#pragma once
/// @cond
#ifndef __XTD_FORMS_NATIVE_LIBRARY__
#error "Do not include this file: Internal use only"
#endif
/// @endcond

#include <xtd/argument_exception.h>
#include <xtd/convert_string.h>
#include <xtd/drawing/system_colors.h>
#include <xtd/forms/native/create_params.h>
#include <xtd/forms/native/button_styles.h>
#include <wx/platform.h>
#include <wx/panel.h>
#include <wx/statbox.h>
#include "control_handler.h"

namespace xtd {
  namespace forms {
    namespace native {
      class control;
      template<typename control_t>
      class control_wrapper;
      class group_box;
      class wx_group_box;
      
      class wxInnerGroupBoxPanel : public wxPanel {
      public:
        wxInnerGroupBoxPanel(wxWindow *parent, wxWindowID winid = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL | wxNO_BORDER, const wxString& name = wxASCII_STR(wxPanelNameStr)) : wxPanel(parent, winid, pos, size, style, name) {}
        
        bool ProcessEvent(wxEvent& event) override {
          bool result = wxPanel::ProcessEvent(event);
          if (!GetParent()->IsShown() || !wx_evt_) return result;
          // key events
          else if (event.GetEventType() == wxEVT_KEY_DOWN) wx_evt_->wx_evt_key_down(event);
          else if (event.GetEventType() == wxEVT_CHAR) wx_evt_->wx_evt_char(event);
          else if (event.GetEventType() == wxEVT_KEY_UP)  wx_evt_->wx_evt_key_up(event);
          // mouse events
          else if (event.GetEventType() == wxEVT_AUX1_DCLICK) wx_evt_->wx_evt_aux1_dbclick(event);
          else if (event.GetEventType() == wxEVT_AUX1_DOWN) wx_evt_->wx_evt_aux1_down(event);
          else if (event.GetEventType() == wxEVT_AUX1_UP) wx_evt_->wx_evt_aux1_up(event);
          else if (event.GetEventType() == wxEVT_AUX2_DCLICK) wx_evt_->wx_evt_aux2_dbclick(event);
          else if (event.GetEventType() == wxEVT_AUX2_DOWN) wx_evt_->wx_evt_aux2_down(event);
          else if (event.GetEventType() == wxEVT_AUX2_UP) wx_evt_->wx_evt_aux2_up(event);
          else if (event.GetEventType() == wxEVT_LEFT_DCLICK) wx_evt_->wx_evt_left_dbclick(event);
          else if (event.GetEventType() == wxEVT_LEFT_DOWN) wx_evt_->wx_evt_left_down(event);
          else if (event.GetEventType() == wxEVT_LEFT_UP) wx_evt_->wx_evt_left_up(event);
          else if (event.GetEventType() == wxEVT_MIDDLE_DCLICK) wx_evt_->wx_evt_middle_dbclick(event);
          else if (event.GetEventType() == wxEVT_MIDDLE_DOWN) wx_evt_->wx_evt_middle_down(event);
          else if (event.GetEventType() == wxEVT_MIDDLE_UP) wx_evt_->wx_evt_middle_up(event);
          else if (event.GetEventType() == wxEVT_RIGHT_DCLICK) wx_evt_->wx_evt_right_dbclick(event);
          else if (event.GetEventType() == wxEVT_RIGHT_DOWN) wx_evt_->wx_evt_right_down(event);
          else if (event.GetEventType() == wxEVT_RIGHT_UP) wx_evt_->wx_evt_right_up(event);
          else if (event.GetEventType() == wxEVT_ENTER_WINDOW) wx_evt_->wx_evt_enter_window(event);
          else if (event.GetEventType() == wxEVT_LEAVE_WINDOW) wx_evt_->wx_evt_leave_window(event);
          else if (event.GetEventType() == wxEVT_MOTION) wx_evt_->wx_evt_motion(event);
          else if (event.GetEventType() == wxEVT_MOUSEWHEEL) wx_evt_->wx_evt_mousewheel(event);
          // system events
          else if (event.GetEventType() == wxEVT_SET_FOCUS) wx_evt_->wx_evt_set_focus(event);
          else if (event.GetEventType() == wxEVT_KILL_FOCUS) wx_evt_->wx_evt_kill_focus(event);
          else if (event.GetEventType() == wxEVT_CHILD_FOCUS) wx_evt_->wx_evt_child_focus(event);
#if !defined __UNIX__
          else if (event.GetEventType() == wxEVT_PAINT) wx_evt_->wx_evt_paint(event);
#endif
          return result;
        }

        wxWindow* GetMainWindowOfCompositeControl() override {return GetParent();}
        
        void set_wx_evt(iwx_evt* wx_evt) {
          wx_evt_ = wx_evt;
        }
        
        iwx_evt* wx_evt_ = nullptr;
      };
      
      class wxGroupBox : public wxStaticBox {
        template<typename control_t>
        friend class control_wrapper;
        friend xtd::forms::native::group_box;
        friend xtd::forms::native::wx_group_box;
      private:
        wxGroupBox(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = wxASCII_STR(wxStaticBoxNameStr)) : wxStaticBox(parent, id, label, pos, size, style, name) {
          //SetBackgroundColour({255, 0, 0});
          //inner_panel->SetBackgroundColour({0, 255, 0});
          Bind(wxEVT_SIZE, [&](wxSizeEvent & event) {
            inner_panel->SetPosition(get_inner_box_position());
            inner_panel->SetSize(get_inner_box_size());
          });
        }
        
        wxPoint GetClientAreaOrigin() const override {return {inner_margin, inner_margin + extra_inner_margin_up};}
        
        void DoGetClientSize(int32_t* width, int32_t* height) const override {
          wxStaticBox::DoGetSize(width, height);
          *width = *width - GetClientAreaOrigin().x - inner_margin;
          *height = *height - GetClientAreaOrigin().y - inner_margin;
        }
        
        wxPoint get_inner_box_position() const {
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Windows") return {0, inner_margin + extra_inner_margin_up};
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh") return {inner_margin, inner_margin + extra_inner_margin_up};
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Unix") return {inner_margin, 0};
          return {0, 0};
        }
        
        wxSize get_inner_box_size() const {
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Windows") return {GetClientSize().GetWidth(), GetClientSize().GetHeight() - GetClientAreaOrigin().y};
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh") return {GetClientSize().GetWidth() - GetClientAreaOrigin().x - inner_margin, GetClientSize().GetHeight() - GetClientAreaOrigin().y - inner_margin};
          if (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Unix") return {GetClientSize().GetWidth() - inner_margin, GetClientSize().GetHeight() - GetClientAreaOrigin().y - inner_margin};
          return GetClientSize();
        }
        
        
        void set_wx_evt(iwx_evt* wx_evt) {
          inner_panel->set_wx_evt(wx_evt);
        }
       static constexpr int32_t inner_margin = 3;
        static constexpr int32_t extra_inner_margin_up = 5;
        wxInnerGroupBoxPanel* inner_panel = new wxInnerGroupBoxPanel(this, wxID_ANY, get_inner_box_position(), get_inner_box_size());
      };

      class wxGroupBoxOwnerDraw : public wxPanel {
        template<typename control_t>
        friend class control_wrapper;
        friend xtd::forms::native::group_box;
        friend xtd::forms::native::wx_group_box;
      private:
        wxGroupBoxOwnerDraw(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = wxASCII_STR(wxStaticBoxNameStr)) : wxPanel(parent, id, pos, size, style, name) {
          Bind(wxEVT_SIZE, [&](wxSizeEvent&) {
          });
        }
        
        //bool AcceptsFocus() const override {return false;}
        
        //bool AcceptsFocusFromKeyboard() const override {return false;}
        
        wxPoint GetClientAreaOrigin() const override {
          return {inner_margin + (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 2 : 0), inner_margin + (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 13 : 5)};
        }
        
        void DoSetSize(int32_t x, int32_t y, int32_t width, int32_t height, int32_t sizeFlags = wxSIZE_AUTO) override {
          wxPanel::DoSetSize(x, y, width, height, sizeFlags);
        }
        
        void DoGetClientSize(int32_t* width, int32_t* height) const override {
          wxPanel::DoGetSize(width, height);
          *width = *width - GetClientAreaOrigin().x - inner_margin - (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 2 : 0);
          *height = *height - GetClientAreaOrigin().y - inner_margin - (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 2 : 0);
        }
        
        void DoSetClientSize(int32_t width, int32_t height) override {
          DoSetSize(GetPosition().x, GetPosition().y, width + GetClientAreaOrigin().x + inner_margin + (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 2 : 0), height + GetClientAreaOrigin().y + inner_margin + (wxPlatformInfo::Get().GetOperatingSystemFamilyName() == "Macintosh" ? 2 : 0));
        }
        
      private:
        static constexpr int32_t inner_margin = 3;
      };
      
      class wx_group_box : public control_handler {
        friend xtd::forms::native::control;
        friend xtd::forms::native::group_box;
      private:
        explicit wx_group_box(const xtd::forms::native::create_params& create_params) {
          if (!create_params.parent) throw xtd::argument_exception("control must have a parent"_t, current_stack_frame_);
          owner_draw_ = (create_params.style & BS_OWNERDRAW) == BS_OWNERDRAW;
          if (owner_draw_)
            control_handler::create<wxGroupBoxOwnerDraw>(reinterpret_cast<control_handler*>(create_params.parent)->main_control(), wxID_ANY, wxString(xtd::convert_string::to_wstring(create_params.caption)), wxPoint(create_params.location.x(), create_params.location.y()), wxSize(create_params.size.width(), create_params.size.height()), style_to_wx_style(create_params.style, create_params.ex_style));
          else {
            auto caption = create_params.caption;
            #if defined(__APPLE__)
            if (ustring::is_empty(caption)) caption = " ";
            #endif
            control_handler::create<wxGroupBox>(reinterpret_cast<control_handler*>(create_params.parent)->main_control(), wxID_ANY, wxString(xtd::convert_string::to_wstring(caption)), wxPoint(create_params.location.x(), create_params.location.y()), wxSize(create_params.size.width(), create_params.size.height()), style_to_wx_style(create_params.style, create_params.ex_style));
            dynamic_cast<wxGroupBox*>(control())->set_wx_evt(dynamic_cast<iwx_evt*>(control()));
            #if defined(__WIN32__)
            if (xtd::drawing::system_colors::window().get_lightness() < 0.5) {
              control()->SetBackgroundColour(wxColour(xtd::drawing::system_colors::control().r(), xtd::drawing::system_colors::control().g(), xtd::drawing::system_colors::control().b(), xtd::drawing::system_colors::control().a()));
              control()->SetForegroundColour(wxColour(xtd::drawing::system_colors::control_text().r(), xtd::drawing::system_colors::control_text().g(), xtd::drawing::system_colors::control_text().b(), xtd::drawing::system_colors::control_text().a()));
            }
            #endif
          }
        }
        
        static long style_to_wx_style(size_t style, size_t ex_style) {
          long wx_style = 0;
          return wx_style;
        }

        wxWindow* main_control() const override { return control()->GetChildren()[0]; }

        void SetLabel(const wxString& label) override {
          auto caption = label;
          #if defined(__APPLE__)
          if (caption.IsEmpty()) caption = " ";
          #endif
          control_handler::SetLabel(caption);
        }
        
        bool owner_draw_ = false;
      };
    }
  }
}

