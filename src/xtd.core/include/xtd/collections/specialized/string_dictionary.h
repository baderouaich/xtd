/// @file
/// @brief Contains xtd::collections::specialized::string_dictionary typedef.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "../../ustring.h"
#include <map>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::collections namespace contains interfaces and classes that define various collections of objects, such as lists, queues, bit arrays, hash tables and dictionaries.
  namespace collections {
    /// @brief The xtd::collections::specialized namespace contains specialized and strongly-typed collections; for example, a linked list dictionary, a bit vector, and collections that contain only strings.
    namespace specialized {
      /// @brief Represents a std::map with the key and the value strongly typed to be strings.
      /// ```cpp
      /// using string_dictionary = std::map<xtd::ustring, xtd::ustring>
      /// ```
      /// @par Header
      /// ```cpp
    /// #include <xtd/collections/specialized/string_dictionary> ```
      /// @par Namespace
      /// xtd::collections
      /// @par Library
      /// xtd.core
      /// @ingroup xtd_core specialized_collections
      using string_dictionary = std::map<xtd::ustring, xtd::ustring>;
    }
  }
}

