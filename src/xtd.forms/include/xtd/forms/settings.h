/// @file
/// @brief Contains xtd::forms::settings component.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "../forms_export.h"
#include <xtd/object>
#include <xtd/ustring>
#include <memory>

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Represent settings associate to the application
    /// @par Header
    /// @code #include <xtd/forms/settings> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms components
    /// @remarks On Windows settings are stored in registry with "HKEY_CURRENT_USER\Software\company_name\product_name" key or if no Company name "\HKEY_CURRENT_USER\Software\Product Name\Product Name" key.
    /// @remarks On macos settings are stored in "~/Library/Preferences/product_name Preferences" file.
    /// @remarks On linux settings are stored in "~/.product_name" file.
    /// @par Examples
    /// The following code example demonstrates the use of settings class.
    /// @include settings_example.cpp
    class forms_export_ settings : public object {
      struct data;
      
    public:
      /// @name Public Constructors
      
      /// @{
      /// @brief Initializes a new instance of settings class.
      settings();
      /// @}
      
      /// @cond
      ~settings();
      /// @endcond
      
      /// @name Public Methods
      
      /// @{
      /// @brief Reads a value for specified key. If not found default value is used.
      /// @param key The key used to read a value.
      /// @param default_value A string used if value not found.
      /// @return A string that represent the value associate to the key.
      xtd::ustring read(const xtd::ustring& key, const xtd::ustring& default_value) {return read_string(key, default_value);}
      /// @brief Reads a value for specified key. If not found default value is used.
      /// @tparam type_t The type of value to read.
      /// @param key The key used to read a value.
      /// @param default_value A string used if value not found.
      /// @return A type_t that represent the value associate to the key.
      template<typename type_t>
      type_t read(const xtd::ustring& key, const type_t& default_value) {
        return xtd::parse<type_t>(read_string(key, xtd::ustring::format("{}", default_value)));
      }
      
      /// @brief Reset application settings.
      void reset();
      
      /// @brief Save application settings.
      void save();
      
      /// @brief Writes a specified value for specified key.
      /// @param key The key used to write a value.
      /// @param value A string to write.
      void write(const xtd::ustring& key, const xtd::ustring& value) {write_string(key, value);}
      
      /// @brief Writes a specified value for specified key.
      /// @tparam type_t The type of value to write.
      /// @param key The key used to write a value.
      /// @param value A type_t to write.
      template<typename type_t>
      void write(const xtd::ustring& key, type_t&& value) {
        write_string(key, xtd::ustring::format("{}", value));
      }
      /// @}
      
    private:
      xtd::ustring read_string(const xtd::ustring& key, const xtd::ustring& default_value);
      void write_string(const xtd::ustring& key, const xtd::ustring& value);
      
      std::shared_ptr<data> data_;
    };
  }
}
