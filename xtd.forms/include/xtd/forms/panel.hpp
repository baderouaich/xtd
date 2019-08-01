#pragma once
#include "control.hpp"
#include "border_style.hpp"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    class panel : public control {
    public:
      panel() = default;

      forms::border_style border_style() const {return this->border_style_;}
      void border_style(forms::border_style border_style);

      drawing::size default_size() const override {return{200, 100};}
      
      void create_handle() override;
      
    private:
      forms::border_style border_style_ = forms::border_style::none;
    };
  }
}
