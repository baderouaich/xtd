/// @file
/// @brief Contains xtd::forms::table_layout_panel container.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "panel.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Used to group collections of fixed aligned controls.
    /// @par Header
    /// @code #include <xtd/forms/table_layout_panel> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms containers
    /// @remarks Exactly the same as xtd::forms::panel container.
    /// @par Examples
    /// The following code example demonstrates the use of table_layout_panel container.
    /// @include table_layout_panel.cpp
    class table_layout_panel : public panel {
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Initialises a new instance of fixed layout panel class.
      table_layout_panel() = default;
      /// @}
      
    protected:
      /// @name Protected methods
      
      /// @{
      void on_layout(const xtd::event_args& e) override;
      /// @}
    };
  }
}
