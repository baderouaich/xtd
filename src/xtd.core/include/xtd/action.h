/// @file
/// @brief Contains xtd::action delegate.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "delegate.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief Represents a xtd::delegate that has variable parameters and does not return a value.
  /// @par Header
  /// @code
  /// #include <xtd/action>
  /// @endcode
    /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename... arguments_t>
  using action = delegate <void(arguments_t...)>;
}
