/// @file
/// @brief Contains xtd::collections::specialized::string_pair typedef.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include <utility>
#include "../../ustring.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::collections namespace contains interfaces and classes that define various collections of objects, such as lists, queues, bit arrays, hash tables and dictionaries.
  namespace collections {
    /// @brief The xtd::collections::specialized namespace contains specialized and strongly-typed collections; for example, a linked list dictionary, a bit vector, and collections that contain only strings.
    namespace specialized {
      /// @brief Implements a std::pair with the key and the value strongly typed to be strings.
      /// @code
      /// using string_pair = std::pair<xtd::ustring, xtd::ustring>
      /// @endcode
      /// @par Header
      /// @code #include <xtd/collections/specialized/string_pair> @endcode
      /// @par Namespace
      /// xtd::collections
      /// @par Library
      /// xtd.core
      /// @ingroup xtd_core collections
      using string_pair = std::pair<xtd::ustring, xtd::ustring>;
    }
  }
}
