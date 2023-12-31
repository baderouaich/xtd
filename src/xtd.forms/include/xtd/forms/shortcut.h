/// @file
/// @brief Contains xtd::forms::shortcut enum class.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "keys.h"
#include <xtd/enum>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Specifies shortcut keys that can be used by menu items.
    /// @par Header
    /// @code #include <xtd/forms/shortcut> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms
    /// @remarks Use the members of this enumeration to set the value of the xtd::forms::menu_item::shortcut property of the xtd::forms::menu_item class.
    enum class shortcut {
      /// @brief The shortcut keys ALT+0.
      alt_0 = 0x00040030,
      /// @brief The shortcut keys ALT+1.
      alt_1,
      /// @brief The shortcut keys ALT+2.
      alt_2,
      /// @brief The shortcut keys ALT+3.
      alt_3,
      /// @brief The shortcut keys ALT+4.
      alt_4,
      /// @brief The shortcut keys ALT+5.
      alt_5,
      /// @brief The shortcut keys ALT+6.
      alt_6,
      /// @brief The shortcut keys ALT+7.
      alt_7,
      /// @brief The shortcut keys ALT+8.
      alt_8,
      /// @brief The shortcut keys ALT+9.
      alt_9,
      /// @brief The shortcut keys ALT+BACKSPACE.
      alt_bksp = 0x00040008,
      /// @brief The shortcut keys ALT+DOWNARROW.
      alt_down_arrow = 0x00040028,
      /// @brief The shortcut keys ALT+F1.
      alt_f1 = 0x00040070,
      /// @brief The shortcut keys ALT+F10.
      alt_f10 = 0x00040079,
      /// @brief The shortcut keys ALT+F11.
      alt_f11,
      /// @brief The shortcut keys ALT+F12.
      alt_f12,
      /// @brief The shortcut keys ALT+F2.
      alt_f2 = 0x00040071,
      /// @brief The shortcut keys ALT+F3.
      alt_f3,
      /// @brief The shortcut keys ALT+F4.
      alt_f4,
      /// @brief The shortcut keys ALT+F5.
      alt_f5,
      /// @brief The shortcut keys ALT+F6.
      alt_f6,
      /// @brief The shortcut keys ALT+F7.
      alt_f7,
      /// @brief The shortcut keys ALT+F8.
      alt_f8,
      /// @brief The shortcut keys ALT+F9.
      alt_f9,
      /// @brief The shortcut keys ALT+LEFTARROW.
      alt_left_arrow = 0x00040025,
      /// @brief The shortcut keys ALT+RIGHTARROW.
      alt_right_arrow = 0x00040027,
      /// @brief The shortcut keys ALT+UPARROW.
      alt_up_arrow = 0x00040026,
      /// @brief The shortcut keys CMD+0.
      cmd_0 = 0x00080030,
      /// @brief The shortcut keys CMD+1.
      cmd_1,
      /// @brief The shortcut keys CMD+2.
      cmd_2,
      /// @brief The shortcut keys CMD+3.
      cmd_3,
      /// @brief The shortcut keys CMD+4.
      cmd_4,
      /// @brief The shortcut keys CMD+5.
      cmd_5,
      /// @brief The shortcut keys CMD+6.
      cmd_6,
      /// @brief The shortcut keys CMD+7.
      cmd_7,
      /// @brief The shortcut keys CMD+8.
      cmd_8,
      /// @brief The shortcut keys CMD+9.
      cmd_9,
      /// @brief The shortcut keys CMD+A.
      cmd_a = 0x00080041,
      /// @brief The shortcut keys CMD+B.
      cmd_b,
      /// @brief The shortcut keys CMD+C.
      cmd_c,
      /// @brief The shortcut keys CMD+D.
      cmd_d,
      /// @brief The shortcut keys CMD+DELETE.
      cmd_del = 0x0008002E,
      /// @brief The shortcut keys CMD+E.
      cmd_e = 0x00080045,
      /// @brief The shortcut keys CMD+F.
      cmd_f,
      /// @brief The shortcut keys CMD+F1.
      cmd_f1 = 0x00080070,
      /// @brief The shortcut keys CMD+F10.
      cmd_f10 = 0x00080079,
      /// @brief The shortcut keys CMD+F11.
      cmd_f11,
      /// @brief The shortcut keys CMD+F12.
      cmd_f12,
      /// @brief The shortcut keys CMD+F2.
      cmd_f2 = 0x00080071,
      /// @brief The shortcut keys CMD+F3.
      cmd_f3,
      /// @brief The shortcut keys CMD+F4.
      cmd_f4,
      /// @brief The shortcut keys CMD+F5.
      cmd_f5,
      /// @brief The shortcut keys CMD+F6.
      cmd_f6,
      /// @brief The shortcut keys CMD+F7.
      cmd_f7,
      /// @brief The shortcut keys CMD+F8.
      cmd_f8,
      /// @brief The shortcut keys CMD+F9.
      cmd_f9,
      /// @brief The shortcut keys CMD+G.
      cmd_g = 0x00080047,
      /// @brief The shortcut keys CMD+H.
      cmd_h,
      /// @brief The shortcut keys CMD+I.
      cmd_i,
      /// @brief The shortcut keys CMD+INSERT.
      cmd_ins = 0x0008002D,
      /// @brief The shortcut keys CMD+J.
      cmd_j = 0x0008004A,
      /// @brief The shortcut keys CMD+K.
      cmd_k,
      /// @brief The shortcut keys CMD+L.
      cmd_l,
      /// @brief The shortcut keys CMD+M.
      cmd_m,
      /// @brief The shortcut keys CMD+N.
      cmd_n,
      /// @brief The shortcut keys CMD+O.
      cmd_o,
      /// @brief The shortcut keys CMD+P.
      cmd_p,
      /// @brief The shortcut keys CMD+Q.
      cmd_q,
      /// @brief The shortcut keys CMD+R.
      cmd_r,
      /// @brief The shortcut keys CMD+S.
      cmd_s,
      /// @brief The shortcut keys CMD+SHIFT+0.
      cmd_shift_0 = 0x00090030,
      /// @brief The shortcut keys CMD+SHIFT+1.
      cmd_shift_1,
      /// @brief The shortcut keys CMD+SHIFT+2.
      cmd_shift_2,
      /// @brief The shortcut keys CMD+SHIFT+3.
      cmd_shift_3,
      /// @brief The shortcut keys CMD+SHIFT+4.
      cmd_shift_4,
      /// @brief The shortcut keys CMD+SHIFT+5.
      cmd_shift_5,
      /// @brief The shortcut keys CMD+SHIFT+6.
      cmd_shift_6,
      /// @brief The shortcut keys CMD+SHIFT+7.
      cmd_shift_7,
      /// @brief The shortcut keys CMD+SHIFT+8.
      cmd_shift_8,
      /// @brief The shortcut keys CMD+SHIFT+9.
      cmd_shift_9,
      /// @brief The shortcut keys CMD+SHIFT+A.
      cmd_shift_a = 0x00090041,
      /// @brief The shortcut keys CMD+SHIFT+B.
      cmd_shift_b,
      /// @brief The shortcut keys CMD+SHIFT+C.
      cmd_shift_c,
      /// @brief The shortcut keys CMD+SHIFT+D.
      cmd_shift_d,
      /// @brief The shortcut keys CMD+SHIFT+E.
      cmd_shift_e,
      /// @brief The shortcut keys CMD+SHIFT+F.
      cmd_shift_f,
      /// @brief The shortcut keys CMD+SHIFT+F1.
      cmd_shift_f1 = 0x00090070,
      /// @brief The shortcut keys CMD+SHIFT+F10.
      cmd_shift_f10 = 0x00090079,
      /// @brief The shortcut keys CMD+SHIFT+F11.
      cmd_shift_f11,
      /// @brief The shortcut keys CMD+SHIFT+F12.
      cmd_shift_f12,
      /// @brief The shortcut keys CMD+SHIFT+F2.
      cmd_shift_f2 = 0x00090071,
      /// @brief The shortcut keys CMD+SHIFT+F3.
      cmd_shift_f3,
      /// @brief The shortcut keys CMD+SHIFT+F4.
      cmd_shift_f4,
      /// @brief The shortcut keys CMD+SHIFT+F5.
      cmd_shift_f5,
      /// @brief The shortcut keys CMD+SHIFT+F6.
      cmd_shift_f6,
      /// @brief The shortcut keys CMD+SHIFT+F7.
      cmd_shift_f7,
      /// @brief The shortcut keys CMD+SHIFT+F8.
      cmd_shift_f8,
      /// @brief The shortcut keys CMD+SHIFT+F9.
      cmd_shift_f9,
      /// @brief The shortcut keys CMD+SHIFT+G.
      cmd_shift_g = 0x00090047,
      /// @brief The shortcut keys CMD+SHIFT+H.
      cmd_shift_h,
      /// @brief The shortcut keys CMD+SHIFT+I.
      cmd_shift_i,
      /// @brief The shortcut keys CMD+SHIFT+J.
      cmd_shift_j,
      /// @brief The shortcut keys CMD+SHIFT+K.
      cmd_shift_k,
      /// @brief The shortcut keys CMD+SHIFT+L.
      cmd_shift_l,
      /// @brief The shortcut keys CMD+SHIFT+M.
      cmd_shift_m,
      /// @brief The shortcut keys CMD+SHIFT+N.
      cmd_shift_n,
      /// @brief The shortcut keys CMD+SHIFT+O.
      cmd_shift_o,
      /// @brief The shortcut keys CMD+SHIFT+P.
      cmd_shift_p,
      /// @brief The shortcut keys CMD+SHIFT+Q.
      cmd_shift_q,
      /// @brief The shortcut keys CMD+SHIFT+R.
      cmd_shift_r,
      /// @brief The shortcut keys CMD+SHIFT+S.
      cmd_shift_s,
      /// @brief The shortcut keys CMD+SHIFT+T.
      cmd_shift_t,
      /// @brief The shortcut keys CMD+SHIFT+U.
      cmd_shift_u,
      /// @brief The shortcut keys CMD+SHIFT+V.
      cmd_shift_v,
      /// @brief The shortcut keys CMD+SHIFT+W.
      cmd_shift_w,
      /// @brief The shortcut keys CMD+SHIFT+X.
      cmd_shift_x,
      /// @brief The shortcut keys CMD+SHIFT+Y.
      cmd_shift_y,
      /// @brief The shortcut keys CMD+SHIFT+Z.
      cmd_shift_z,
      /// @brief The shortcut keys CMD+T.
      cmd_t = 0x00080054,
      /// @brief The shortcut keys CMD+U.
      cmd_u,
      /// @brief The shortcut keys CMD+V.
      cmd_v,
      /// @brief The shortcut keys CMD+W.
      cmd_w,
      /// @brief The shortcut keys CMD+X.
      cmd_x,
      /// @brief The shortcut keys CMD+Y.
      cmd_y,
      /// @brief The shortcut keys CMD+Z.
      cmd_z,
      /// @brief The shortcut keys DELETE.
      del = 0x0000002E,
      /// @brief The shortcut keys F1.
      f1 = 0x00000070,
      /// @brief The shortcut keys F10.
      f10 = 0x00000079,
      /// @brief The shortcut keys F11.
      f11,
      /// @brief The shortcut keys F12.
      f12,
      /// @brief The shortcut keys F2.
      f2 = 0x00000071,
      /// @brief The shortcut keys F3.
      f3,
      /// @brief The shortcut keys F4.
      f4,
      /// @brief The shortcut keys F5.
      f5,
      /// @brief The shortcut keys F6.
      f6,
      /// @brief The shortcut keys F7.
      f7,
      /// @brief The shortcut keys F8.
      f8,
      /// @brief The shortcut keys F9.
      f9,
      /// @brief The shortcut keys INSERT.
      ins = 0x0000002D,
      /// @brief No shortcut key is associated with the menu item.
      none = 0,
      /// @brief The shortcut keys SHIFT+DELETE.
      shift_del = 0x0001002E,
      /// @brief The shortcut keys SHIFT+F1.
      shift_f1 = 0x00010070,
      /// @brief The shortcut keys SHIFT+F10.
      shift_f10 = 0x00010079,
      /// @brief The shortcut keys SHIFT+11.
      shift_f11,
      /// @brief The shortcut keys SHIFT+F12.
      shift_f12,
      /// @brief The shortcut keys SHIFT+F2.
      shift_f2 = 0x00010071,
      /// @brief The shortcut keys SHIFT+F3.
      shift_f3,
      /// @brief The shortcut keys SHIFT+F4.
      shift_f4,
      /// @brief The shortcut keys SHIFT+F5.
      shift_f5,
      /// @brief The shortcut keys SHIFT+F6.
      shift_f6,
      /// @brief The shortcut keys SHIFT+F7.
      shift_f7,
      /// @brief The shortcut keys SHIFT+F8.
      shift_f8,
      /// @brief The shortcut keys SHIFT+F9.
      shift_f9,
      /// @brief The shortcut keys SHIFT+INSERT.
      shift_ins = 0x0001002D
    };
  }
}

/// @cond
template<> struct xtd::enum_register<xtd::forms::shortcut> {
  explicit operator auto() const noexcept {return xtd::enum_collection<xtd::forms::shortcut> {{xtd::forms::shortcut::alt_0, "alt_0"}, {xtd::forms::shortcut::none, "alt_1"}, {xtd::forms::shortcut::alt_2, "alt_2"}, {xtd::forms::shortcut::alt_3, "alt_3"}, {xtd::forms::shortcut::alt_4, "alt_4"}, {xtd::forms::shortcut::alt_5, "alt_5"}, {xtd::forms::shortcut::alt_6, "alt_6"}, {xtd::forms::shortcut::alt_7, "alt_7"}, {xtd::forms::shortcut::alt_8, "alt_8"}, {xtd::forms::shortcut::alt_9, "alt_9"}, {xtd::forms::shortcut::alt_bksp, "alt_bksp"}, {xtd::forms::shortcut::alt_down_arrow, "alt_down_arrow"}, {xtd::forms::shortcut::alt_f1, "alt_f1"}, {xtd::forms::shortcut::alt_f2, "alt_f2"}, {xtd::forms::shortcut::alt_f3, "alt_f3"}, {xtd::forms::shortcut::alt_f4, "alt_f4"}, {xtd::forms::shortcut::alt_f5, "alt_f5"}, {xtd::forms::shortcut::alt_f6, "alt_f6"}, {xtd::forms::shortcut::alt_f7, "alt_f7"}, {xtd::forms::shortcut::alt_f8, "alt_f8"}, {xtd::forms::shortcut::alt_f9, "alt_f9"}, {xtd::forms::shortcut::alt_left_arrow, "alt_left_arrow"}, {xtd::forms::shortcut::alt_right_arrow, "alt_right_arrow"}, {xtd::forms::shortcut::alt_up_arrow, "alt_up_arrow"}, {xtd::forms::shortcut::cmd_0, "cmd_0"}, {xtd::forms::shortcut::cmd_1, "cmd_1"}, {xtd::forms::shortcut::cmd_2, "cmd_2"}, {xtd::forms::shortcut::cmd_3, "cmd_3"}, {xtd::forms::shortcut::cmd_4, "cmd_4"}, {xtd::forms::shortcut::cmd_5, "cmd_5"}, {xtd::forms::shortcut::cmd_6, "cmd_6"}, {xtd::forms::shortcut::cmd_7, "cmd_7"}, {xtd::forms::shortcut::cmd_8, "cmd_8"}, {xtd::forms::shortcut::cmd_9, "cmd_9"}, {xtd::forms::shortcut::cmd_a, "cmd_a"}, {xtd::forms::shortcut::cmd_b, "cmd_b"}, {xtd::forms::shortcut::cmd_c, "cmd_c"}, {xtd::forms::shortcut::cmd_d, "cmd_d"}, {xtd::forms::shortcut::cmd_del, "cmd_del"}, {xtd::forms::shortcut::cmd_e, "cmd_e"}, {xtd::forms::shortcut::cmd_f, "cmd_f"}, {xtd::forms::shortcut::cmd_f1, "cmd_f1"}, {xtd::forms::shortcut::cmd_f10, "cmd_f10"}, {xtd::forms::shortcut::cmd_f11, "cmd_f11"}, {xtd::forms::shortcut::cmd_f12, "cmd_f12"}, {xtd::forms::shortcut::cmd_f2, "cmd_f2"}, {xtd::forms::shortcut::cmd_f3, "cmd_f3"}, {xtd::forms::shortcut::cmd_f4, "cmd_f4"}, {xtd::forms::shortcut::cmd_f5, "cmd_f5"}, {xtd::forms::shortcut::cmd_f6, "cmd_f6"}, {xtd::forms::shortcut::cmd_f7, "cmd_f7"}, {xtd::forms::shortcut::cmd_f8, "cmd_f8"}, {xtd::forms::shortcut::cmd_f9, "cmd_f9"}, {xtd::forms::shortcut::cmd_g, "cmd_g"}, {xtd::forms::shortcut::cmd_h, "cmd_h"}, {xtd::forms::shortcut::cmd_i, "cmd_i"}, {xtd::forms::shortcut::cmd_ins, "cmd_ins"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}, {xtd::forms::shortcut::none, "none"}};}
};
/// @endcond
