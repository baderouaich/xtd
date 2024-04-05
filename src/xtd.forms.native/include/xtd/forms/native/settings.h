/// @file
/// @brief Contains xtd::forms::native::settings API.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
/// @cond
#if !defined(__XTD_FORMS_NATIVE_LIBRARY__)
#error "Do not include this file: Internal use only"
#endif
/// @endcond

#include <cstdint>
#include <xtd/static.h>
#include <xtd/ustring.h>
#include <xtd/forms_native_export.h>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @cond
    class settings;
    /// @endcond
    
    /// @brief The xtd::forms::native namespace contains internal native API definitions to access underlying toolkits used by xtd.forms library.
    /// @warning Internal use only
    namespace native {
      /// @brief Contains settings native API.
      /// @par Namespace
      /// xtd::forms::native
      /// @par Library
      /// xtd.forms.native
      /// @ingroup xtd_forms_native native
      /// @remarks On Windows settings are stored in registry with "HKEY_CURRENT_USER\Software\company_name\product_name" key.
      /// @remarks On macos settings are stored in "~/Library/Preferences/product_name Preferences" file.
      /// @remarks On linux settings are stored in "~/.product_name" file.
      /// @warning Internal use only
      class forms_native_export_ settings final static_ {
        friend xtd::forms::settings;
      protected:
        /// @name Protected Static Methods
        
        /// @{
        /// @brief Create settings.
        /// @return The settings handle created.
        /// @warning Internal use only
        static intptr create(const xtd::ustring& product_name, const xtd::ustring& company_name);
        /// @brief Destroys settings.
        /// @param settings Settings handle.
        /// @warning Internal use only
        static void destroy(intptr settings);
        /// @brief Reset settings.
        /// @param settings Settings handle.
        /// @warning Internal use only
        static void reset(intptr settings);
        /// @brief Reads about settings handle a value for specified key. If not found default value is used.
        /// @param settings Settings handle.
        /// @param key The key used to read a value.
        /// @param default_value A string used if value not found.
        /// @return A string that represent the value associate to the key.
        /// @warning Internal use only
        static xtd::ustring read(intptr settings, const xtd::ustring& key, const xtd::ustring& default_value);
        /// @brief Save settings.
        /// @param settings Settings handle.
        /// @warning Internal use only
        static void save(intptr settings);
        /// @brief Writes in settings handle a specified value for specified key.
        /// @param settings Settings handle.
        /// @param key The key used to write a value.
        /// @param value A string to write.
        /// @warning Internal use only
        static void write(intptr settings, const xtd::ustring& key, const xtd::ustring& value);
        /// @}
      };
    }
  }
}
