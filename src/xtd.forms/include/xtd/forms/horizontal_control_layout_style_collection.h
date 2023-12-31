/// @file
/// @brief Contains xtd::forms::horizontal_control_layout_style_collection typedef.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "const_control_ref.h"
#include "control_ref.h"
#include "horizontal_control_layout_style.h"
#include <utility>
#include <vector>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief A collection that stores horizontal_control_layout_style objects.
    /// @par Header
    /// @code #include <xtd/forms/horizontal_control_layout_style_collection> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms
    using horizontal_control_layout_style_collection = std::vector<std::pair<control_ref, horizontal_control_layout_style>>;
  }
}
