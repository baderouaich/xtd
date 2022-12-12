/// @file
/// @brief Contains xtd::as method.
#pragma once
#include <any>
#include <memory>
#include "convert.h"
#include "convert_pointer.h"
#include "convert_string.h"
#include "invalid_cast_exception.h"
#include "types.h"
#define __XTD_CORE_INTERNAL__
#include "internal/__as_enum.h"
#undef __XTD_CORE_INTERNAL__

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  // ___________________________________________________________________________________________
  //                                                                                     generic
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = 42;
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(std::any value) {
    try {
      return any_cast<new_type_t>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(bool value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(xtd::byte value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char8_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u'a';
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char16_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = U'a';
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char32_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = L'a';
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(wchar_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.0l;
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(decimal_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.0;
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(double value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.0f;
  /// int result = as<int>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(float value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(int16 value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(int32 value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(int64 value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(llong_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(sbyte value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(uint16_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(uint32 value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(uint64 value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(ullong_t value) {
    return static_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// object result = as<object>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const xtd::ustring& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// object result = as<object>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(xtd::ustring& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @cond
  template<typename new_type_t>
  new_type_t as(const xtd::ustring& value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(xtd::byte value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(int16 value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(int32 value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(int64 value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(llong_t value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(sbyte value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(uint16_t value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(uint32 value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(uint64 value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  template<typename new_type_t>
  new_type_t as(ullong_t value, xtd::byte from_base) {
    throw invalid_cast_exception(csf_);
  }
  /// @endcond
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(const std::string& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(std::string& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(const std::u8string& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(std::u8string& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(const std::u16string& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(std::u16string& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(const std::u32string& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(std::u32string& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(const std::wstring& value) {
    try {
      return dynamic_cast<const new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @exception xtd::invalid_cast_exception value bad type
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  template<typename new_type_t>
  new_type_t as(std::wstring& value) {
    try {
      return dynamic_cast<new_type_t&>(value);
    } catch (const std::exception& e) {
      throw invalid_cast_exception(e.what(), csf_);
    }
    throw std::bad_cast();
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const char* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const char8_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char8_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const char16_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char16_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const char32_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(char32_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(const wchar_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new new_type_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// intptr result = as<intptr>(value);
  /// @endcode
  template<typename new_type_t>
  new_type_t as(wchar_t* value) {
    return reinterpret_cast<new_type_t>(value);
  }
  
  // ___________________________________________________________________________________________
  //                                                                 xtd::convert specialization
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(std::any value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(bool value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(xtd::byte value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char8_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char16_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char32_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(wchar_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(decimal_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(double value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(float value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(int16 value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(int32 value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(int64 value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(llong_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(sbyte value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(uint16_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(uint32 value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(uint64 value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(ullong_t value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const xtd::ustring& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const std::string& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const std::u8string& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const std::u16string& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const std::u32string& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const std::wstring& value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const char* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const char8_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char8_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const char16_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char16_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const char32_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(char32_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(const wchar_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new bool object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// bool result = as<bool>(value);
  /// @endcode
  template<>
  inline bool as<bool>(wchar_t* value) {
    return xtd::convert::to_boolean(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(std::any value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(bool value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(xtd::byte value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char8_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char16_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char32_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(wchar_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(decimal_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(double value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(float value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(int16 value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(int32 value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(int64 value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(llong_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(sbyte value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(uint16_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(uint32 value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(uint64 value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(ullong_t value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a byte.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const xtd::ustring& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a byte.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// xtd::byte result = as<xtd::byte>(value, 16);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_byte(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const std::string& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const std::u8string& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const std::u16string& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const std::u32string& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const std::wstring& value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const char* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const char8_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char8_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const char16_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char16_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const char32_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(char32_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(const wchar_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new xtd::byte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// xtd::byte result = as<xtd::byte>(value);
  /// @endcode
  template<>
  inline xtd::byte as<xtd::byte>(wchar_t* value) {
    return xtd::convert::to_byte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(std::any value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(bool value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(xtd::byte value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char8_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char16_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char32_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(wchar_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(decimal_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(double value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(float value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(int16 value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(int32 value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(int64 value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(llong_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(sbyte value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(uint16_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(uint32 value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(uint64 value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(ullong_t value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const xtd::ustring& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const std::string& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const std::u8string& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const std::u16string& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const std::u32string& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const std::wstring& value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const char* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const char8_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char8_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const char16_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char16_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const char32_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(char32_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(const wchar_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// char result = as<char>(value);
  /// @endcode
  template<>
  inline char as<char>(wchar_t* value) {
    return xtd::convert::to_char(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(std::any value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(bool value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(xtd::byte value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char8_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char16_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char32_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(wchar_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(decimal_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(double value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(float value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(int16 value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(int32 value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(int64 value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(llong_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(sbyte value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(uint16_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(uint32 value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(uint64 value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(ullong_t value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const xtd::ustring& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const std::string& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const std::u8string& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const std::u16string& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const std::u32string& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const std::wstring& value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const char* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const char8_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char8_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const char16_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char16_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const char32_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(char32_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(const wchar_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char8_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// char8_t result = as<char8_t>(value);
  /// @endcode
  template<>
  inline char8_t as<char8_t>(wchar_t* value) {
    return xtd::convert::to_char8(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(std::any value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(bool value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(xtd::byte value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char8_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char16_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char32_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(wchar_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(decimal_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(double value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(float value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(int16 value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(int32 value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(int64 value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(llong_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(sbyte value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(uint16_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(uint32 value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(uint64 value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(ullong_t value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const xtd::ustring& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const std::string& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const std::u8string& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const std::u16string& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const std::u32string& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const std::wstring& value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const char* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const char8_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char8_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const char16_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char16_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const char32_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(char32_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(const wchar_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// char16_t result = as<char16_t>(value);
  /// @endcode
  template<>
  inline char16_t as<char16_t>(wchar_t* value) {
    return xtd::convert::to_char16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(std::any value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(bool value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(xtd::byte value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char8_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char16_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char32_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(wchar_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(decimal_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(double value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(float value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(int16 value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(int32 value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(int64 value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(llong_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(sbyte value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(uint16_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(uint32 value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(uint64 value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(ullong_t value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const xtd::ustring& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const std::string& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const std::u8string& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const std::u16string& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const std::u32string& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const std::wstring& value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const char* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const char8_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char8_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const char16_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char16_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const char32_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(char32_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(const wchar_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new char32_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// char32_t result = as<char32_t>(value);
  /// @endcode
  template<>
  inline char32_t as<char32_t>(wchar_t* value) {
    return xtd::convert::to_char32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(std::any value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(bool value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(xtd::byte value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char8_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char16_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char32_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(wchar_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(decimal_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(double value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(float value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(int16 value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(int32 value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(int64 value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(llong_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(sbyte value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(uint16_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(uint32 value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(uint64 value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(ullong_t value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const xtd::ustring& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const std::string& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const std::u8string& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const std::u16string& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const std::u32string& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const std::wstring& value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const char* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const char8_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char8_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const char16_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char16_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const char32_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(char32_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(const wchar_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new wchar_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// wchar_t result = as<wchar_t>(value);
  /// @endcode
  template<>
  inline wchar_t as<wchar_t>(wchar_t* value) {
    return xtd::convert::to_wchar(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(std::any value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(bool value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(xtd::byte value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char8_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char16_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char32_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(wchar_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(decimal_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(double value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(float value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(int16 value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(int32 value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(int64 value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(llong_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(sbyte value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(uint16_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(uint32 value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(uint64 value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(ullong_t value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const xtd::ustring& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const std::string& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const std::u8string& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const std::u16string& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const std::u32string& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const std::wstring& value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const char* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const char8_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char8_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const char16_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char16_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const char32_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(char32_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(const wchar_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new decimal_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// decimal_t result = as<decimal_t>(value);
  /// @endcode
  template<>
  inline decimal_t as<decimal_t>(wchar_t* value) {
    return xtd::convert::to_decimal(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(std::any value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(bool value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(xtd::byte value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char8_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char16_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char32_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(wchar_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(decimal_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(double value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(float value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(int16 value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(int32 value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(int64 value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(llong_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(sbyte value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(uint16_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(uint32 value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(uint64 value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(ullong_t value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const xtd::ustring& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const std::string& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const std::u8string& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const std::u16string& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const std::u32string& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const std::wstring& value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const char* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const char8_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char8_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const char16_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char16_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const char32_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(char32_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(const wchar_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new double object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// double result = as<double>(value);
  /// @endcode
  template<>
  inline double as<double>(wchar_t* value) {
    return xtd::convert::to_double(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(std::any value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(bool value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(xtd::byte value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char8_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char16_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char32_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(wchar_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(decimal_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(double value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(float value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(int16 value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(int32 value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(int64 value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(llong_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(sbyte value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(uint16_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(uint32 value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(uint64 value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(ullong_t value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const xtd::ustring& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const std::string& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const std::u8string& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const std::u16string& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const std::u32string& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const std::wstring& value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const char* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const char8_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char8_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const char16_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char16_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const char32_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(char32_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(const wchar_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new float object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// float result = as<float>(value);
  /// @endcode
  template<>
  inline float as<float>(wchar_t* value) {
    return xtd::convert::to_single(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(std::any value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(bool value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(xtd::byte value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char8_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char16_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char32_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(wchar_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(decimal_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(double value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(float value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(int16 value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(int32 value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(int64 value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(llong_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(sbyte value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(uint16_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(uint32 value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(uint64 value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(ullong_t value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const xtd::ustring& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a int16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// int16 result = as<int16>(value, 16);
  /// @endcode
  template<>
  inline int16 as<int16>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_int16(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const std::string& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const std::u8string& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const std::u16string& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const std::u32string& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const std::wstring& value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const char* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const char8_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char8_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const char16_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char16_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const char32_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(char32_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(const wchar_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int16 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// int16 result = as<int16>(value);
  /// @endcode
  template<>
  inline int16 as<int16>(wchar_t* value) {
    return xtd::convert::to_int16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(std::any value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(bool value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(xtd::byte value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char8_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char16_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char32_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(wchar_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(decimal_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(double value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(float value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(int16 value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(int32 value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(int64 value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(llong_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(sbyte value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(uint16_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(uint32 value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(uint64 value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(ullong_t value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const xtd::ustring& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a int32.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// int32 result = as<int32>(value, 16);
  /// @endcode
  template<>
  inline int32 as<int32>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_int32(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const std::string& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const std::u8string& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const std::u16string& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const std::u32string& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const std::wstring& value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const char* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const char8_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char8_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const char16_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char16_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const char32_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(char32_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(const wchar_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// int32 result = as<int32>(value);
  /// @endcode
  template<>
  inline int32 as<int32>(wchar_t* value) {
    return xtd::convert::to_int32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(std::any value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(bool value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(xtd::byte value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char8_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char16_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char32_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(wchar_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(decimal_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(double value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(float value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(int16 value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(int32 value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(int64 value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(llong_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(sbyte value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(uint16_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(uint32 value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(uint64 value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(ullong_t value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const xtd::ustring& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a int64.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// int64 result = as<int64>(value, 16);
  /// @endcode
  template<>
  inline int64 as<int64>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_int64(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const std::string& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const std::u8string& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const std::u16string& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const std::u32string& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const std::wstring& value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const char* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const char8_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char8_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const char16_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char16_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const char32_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(char32_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(const wchar_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new int64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// int64 result = as<int64>(value);
  /// @endcode
  template<>
  inline int64 as<int64>(wchar_t* value) {
    return xtd::convert::to_int64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(std::any value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(bool value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(xtd::byte value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char8_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char16_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char32_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(wchar_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(decimal_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(double value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(float value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(int16 value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(int32 value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(int64 value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(llong_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(sbyte value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(uint16_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(uint32 value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(uint64 value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(ullong_t value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const xtd::ustring& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a llong.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// llong_t result = as<llong_t>(value, 16);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_llong(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const std::string& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const std::u8string& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const std::u16string& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const std::u32string& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const std::wstring& value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const char* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const char8_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char8_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const char16_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char16_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const char32_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(char32_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(const wchar_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new llong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// llong_t result = as<llong_t>(value);
  /// @endcode
  template<>
  inline llong_t as<llong_t>(wchar_t* value) {
    return xtd::convert::to_llong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(std::any value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(bool value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(xtd::byte value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char8_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char16_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char32_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(wchar_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(decimal_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(double value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(float value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(int16 value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(int32 value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(int64 value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(llong_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(sbyte value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(uint16_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(uint32 value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(uint64 value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(ullong_t value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const xtd::ustring& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a sbyte.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// sbyte result = as<sbyte>(value, 16);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_sbyte(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const std::string& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const std::u8string& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const std::u16string& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const std::u32string& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const std::wstring& value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const char* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const char8_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char8_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const char16_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char16_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const char32_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(char32_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(const wchar_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new sbyte object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// sbyte result = as<sbyte>(value);
  /// @endcode
  template<>
  inline sbyte as<sbyte>(wchar_t* value) {
    return xtd::convert::to_sbyte(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(std::any value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(bool value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(xtd::byte value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char8_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char16_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char32_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(wchar_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(decimal_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(double value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(float value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(int16 value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(int32 value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(int64 value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(llong_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(sbyte value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(uint16_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(uint32 value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(uint64 value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(ullong_t value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const xtd::ustring& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a uint16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// uint16_t result = as<uint16_t>(value, 16);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_uint16(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const std::string& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const std::u8string& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const std::u16string& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const std::u32string& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const std::wstring& value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const char* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const char8_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char8_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const char16_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char16_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const char32_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(char32_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(const wchar_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint16_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// uint16_t result = as<uint16_t>(value);
  /// @endcode
  template<>
  inline uint16_t as<uint16_t>(wchar_t* value) {
    return xtd::convert::to_uint16(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(std::any value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(bool value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(xtd::byte value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char8_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char16_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char32_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(wchar_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(decimal_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(double value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(float value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(int16 value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(int32 value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(int64 value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(llong_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(sbyte value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(uint16_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(uint32 value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(uint64 value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(ullong_t value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const xtd::ustring& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a uint32.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// uint32 result = as<uint32>(value, 16);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_uint32(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const std::string& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const std::u8string& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const std::u16string& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const std::u32string& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const std::wstring& value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const char* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const char8_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char8_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const char16_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char16_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const char32_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(char32_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(const wchar_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint32 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// uint32 result = as<uint32>(value);
  /// @endcode
  template<>
  inline uint32 as<uint32>(wchar_t* value) {
    return xtd::convert::to_uint32(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(std::any value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(bool value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(xtd::byte value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char8_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char16_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char32_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(wchar_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(decimal_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(double value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(float value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(int16 value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(int32 value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(int64 value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(llong_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(sbyte value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(uint16_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(uint32 value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(uint64 value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(ullong_t value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const xtd::ustring& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a uint64.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// uint64 result = as<uint64>(value, 16);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_uint64(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const std::string& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const std::u8string& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const std::u16string& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const std::u32string& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const std::wstring& value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const char* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const char8_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char8_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const char16_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char16_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const char32_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(char32_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(const wchar_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new uint64 object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// uint64 result = as<uint64>(value);
  /// @endcode
  template<>
  inline uint64 as<uint64>(wchar_t* value) {
    return xtd::convert::to_uint64(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(std::any value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(bool value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(xtd::byte value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char8_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char16_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char32_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(wchar_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(decimal_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(double value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(float value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(int16 value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(int32 value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(int64 value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(llong_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(sbyte value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(uint16_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(uint32 value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(uint64 value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(ullong_t value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const xtd::ustring& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a ullong.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "0x2A";
  /// ullong_t result = as<ullong_t>(value, 16);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const xtd::ustring& value, xtd::byte from_base) {
    return xtd::convert::to_ullong(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const std::string& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const std::u8string& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const std::u16string& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const std::u32string& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const std::wstring& value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const char* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const char8_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char8_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const char16_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char16_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const char32_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(char32_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(const wchar_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::argument_exception value does not represent a bool.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"42";
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ullong_t as<ullong_t>(wchar_t* value) {
    return xtd::convert::to_ullong(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::any value = true;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(std::any value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// bool value = true;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(bool value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(xtd::byte value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// xtd::byte value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(xtd::byte value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char value = 'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(char value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t value = u8'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(char8_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(char16_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(char32_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @exception xtd::invalid_cast_exception throws always exception.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t value = u'a';
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(wchar_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// decimal_t value = 42.50l;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(decimal_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// double value = 42.50;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(double value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// float value = 42.50f;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(float value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(int16 value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int16 value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(int16 value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(int32 value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int32 value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(int32 value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42l;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(int64 value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// int64 value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(int64 value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42ll;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(llong_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// llong_t value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(llong_t value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42ll;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(sbyte value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// sbyte value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(sbyte value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42u;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint16_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint16_t value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint16_t value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42u;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint32 value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint32 value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint32 value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42ul;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint64 value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// uint64 value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(uint64 value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @return A new ullong_t object converted from value.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42ull;
  /// ullong_t result = as<ullong_t>(value);
  /// @endcode
  template<>
  inline ustring as<ustring>(ullong_t value) {
    return xtd::convert::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @param value object to convert.
  /// @param from_base The base of the number in value, which must be 2, 8, 10, or 16.
  /// @return A new ustring object converted from value.
  /// @exception xtd::argument_exception vfrom_base is not 2, 8, 10, or 16.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ullong_t value = 42;
  /// ustring result = as<ustring>(value, 16);
  /// @endcode
  template<>
  inline ustring as<ustring>(ullong_t value, xtd::byte from_base) {
    return xtd::convert::to_string(value, from_base);
  }
  
  // ___________________________________________________________________________________________
  //                                                         xtd::convert_pointer specialization

  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const button* value = new xtd::forms::button();
  /// const control& result = as<xtd::forms::control>(*value);
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  const new_type_t& as(const current_type_t& value) {
    //return xtd::convert_pointer::to_ref<new_type_t>(value);
    return __as_enum__<new_type_t, current_type_t, typename std::conditional<std::is_enum<current_type_t>::value, std::true_type, std::false_type>::type>().convert(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// button* value = new xtd::forms::button();
  /// control& result = as<xtd::forms::control>(*value);
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  new_type_t& as(current_type_t& value) {
    //return xtd::convert_pointer::to_ref<new_type_t>(value);
    return __as_enum__<new_type_t, current_type_t, typename std::conditional<std::is_enum<current_type_t>::value, std::true_type, std::false_type>::type>().convert(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const button* value = new xtd::forms::button();
  /// const control* result = as<xtd::forms::control>(value);
  /// @endcode
  template<typename new_type_t, typename current_type_t>
  const new_type_t* as(const current_type_t* value) {
    return xtd::convert_pointer::to_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// button* value = new xtd::forms::button();
  /// control* result = as<xtd::forms::control>(value);
  /// @endcode
  template<typename new_type_t, typename current_type_t>
  new_type_t* as(current_type_t* value) {
    return xtd::convert_pointer::to_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::unique_ptr<button> value = std::make_unique<xtd::forms::button>();
  /// std::unique_ptr<control> result = as<xtd::forms::control>(value);
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  std::unique_ptr<new_type_t> as(std::unique_ptr<current_type_t>& value) {
    return xtd::convert_pointer::to_unique_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::unique_ptr<control> result = as<xtd::forms::control>(std::make_unique<xtd::forms::button>());
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  std::unique_ptr<new_type_t> as(std::unique_ptr<current_type_t>&& value) {
    return xtd::convert_pointer::to_unique_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const std::shared_ptr<button> value = std::make_shared<xtd::forms::button>();
  /// const std::shared_ptr<control> result = as<xtd::forms::control>(value);
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  std::shared_ptr<new_type_t> as(const std::shared_ptr<current_type_t>& value) {
    return xtd::convert_pointer::to_shared_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// std::shared_ptr<control> result = as<xtd::forms::control>(std::make_shared<xtd::forms::button>());
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  std::shared_ptr<new_type_t> as(std::shared_ptr<current_type_t>& value) {
    return xtd::convert_pointer::to_shared_ptr<new_type_t>(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const std::shared_ptr<button> value = std::make_shared<xtd::forms::button>();
  /// const std::shared_ptr<control> result = as<xtd::forms::control>(value);
  /// @endcode
  /// @exception xtd::invalid_cast_exception the parameters is bad cast.
  template<typename new_type_t, typename current_type_t>
  std::shared_ptr<new_type_t> as(std::shared_ptr<current_type_t>&& value) {
    return xtd::convert_pointer::to_shared_ptr<new_type_t>(value);
  }
  
  // ___________________________________________________________________________________________
  //                                                          xtd::convert_string specialization
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const std::string& value) {
    return xtd::convert_string::to_string(value);
  }
  /// @code
  /// string value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(std::string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const std::string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(std::string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const std::string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(std::string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const std::string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(std::string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const std::string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(std::string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const std::string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// string value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(std::string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const char* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const char* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* cvalue1 = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const char* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const char* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const char* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char* value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const char* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(char* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(char* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(char* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(char* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(char* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char* value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(char* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const xtd::ustring& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(xtd::ustring& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const xtd::ustring& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(xtd::ustring& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const xtd::ustring& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(xtd::ustring& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const xtd::ustring& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(xtd::ustring& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const xtd::ustring& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(xtd::ustring& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const xtd::ustring& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// ustring value = "Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(xtd::ustring& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const std::u8string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(std::u8string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const std::u8string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(std::u8string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const std::u8string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(std::u8string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const std::u8string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(std::u8string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const std::u8string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(std::u8string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const std::u8string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u8string value = u8"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(std::u8string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const char8_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const char8_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const char8_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const char8_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const char8_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char8_t* value = u8"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const char8_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(char8_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(char8_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(char8_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(char8_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(char8_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char8_t* value = u8"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(char8_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const std::u16string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(std::u16string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const std::u16string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(std::u16string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const std::u16string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = "Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(std::u16string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const std::u16string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(std::u16string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const std::u16string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(std::u16string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const std::u16string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u16string value = u"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(std::u16string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const char16_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const char16_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const char16_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const char16_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const char16_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char16_t* value = u"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const char16_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(char16_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(char16_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(char16_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(char16_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(char16_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char16_t* value = u"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(char16_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const std::u32string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(std::u32string& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const std::u32string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(std::u32string& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const std::u32string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(std::u32string& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const std::u32string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(std::u32string& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const std::u32string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(std::u32string& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const std::u32string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// u32string value = U"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(std::u32string& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const char32_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const char32_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const char32_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const char32_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const char32_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const char32_t* value = U"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const char32_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(char32_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(char32_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(char32_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(char32_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(char32_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// char32_t* value = U"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(char32_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const std::wstring& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(std::wstring& value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const std::wstring& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(std::wstring& value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const std::wstring& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(std::wstring& value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const std::wstring& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(std::wstring& value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const std::wstring& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(std::wstring& value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const std::wstring& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wstring value = L"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(std::wstring& value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(const wchar_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(const wchar_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(const wchar_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(const wchar_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(const wchar_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// const wchar_t* value = L"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(const wchar_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// string result = as<string>(value);
  /// @endcode
  template<>
  inline std::string as<std::string>(wchar_t* value) {
    return xtd::convert_string::to_string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// ustring result = as<ustring>(value);
  /// @endcode
  template<>
  inline xtd::ustring as<xtd::ustring>(wchar_t* value) {
    return xtd::convert_string::to_ustring(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// u8string result = as<u8string>(value);
  /// @endcode
  template<>
  inline std::u8string as<std::u8string>(wchar_t* value) {
    return xtd::convert_string::to_u8string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// u16string result = as<u16string>(value);
  /// @endcode
  template<>
  inline std::u16string as<std::u16string>(wchar_t* value) {
    return xtd::convert_string::to_u16string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// u32string result = as<u32string>(value);
  /// @endcode
  template<>
  inline std::u32string as<std::u32string>(wchar_t* value) {
    return xtd::convert_string::to_u32string(value);
  }
  
  /// @brief Casts a type into another type.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core
  /// @par Examples
  /// @code
  /// wchar_t* value = L"Gammasoft";
  /// wstring result = as<wstring>(value);
  /// @endcode
  template<>
  inline std::wstring as<std::wstring>(wchar_t* value) {
    return xtd::convert_string::to_wstring(value);
  }
}
