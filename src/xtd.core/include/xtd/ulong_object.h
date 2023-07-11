/// @file
/// @brief Contains xtd::ulong_object alias.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "box_integer.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief Represent a boxed ulong.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core system
  /// @par Examples
  /// The following example shows how to create and use xtd::ulong_object.
  /// @code
  /// auto stringer = [](const object& value) {return value.to_string();};
  /// ulong unboxed_object = 42;
  /// ulong_object boxed_object = unboxed_object;
  /// auto result = stringer(boxed_object);
  /// console::write_line("result = {}", result); // Display: result = 42;
  /// @endcode
  using ulong_object = box_integer<ulong>;
}
