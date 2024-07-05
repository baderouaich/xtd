/// @file
/// @brief Contains xtd::icomparable interface.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "interface.h"
#include "types.h"
#define __XTD_STD_INTERNAL__
#include "internal/__xtd_std_version.h"
#undef __XTD_STD_INTERNAL__

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief Defines a generalized comparison method that a value type or class implements to create a type-specific comparison method.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core interfaces
  /// @par Examples
  /// The following example shows how to use xtd::icomparable interface.
  /// @include icomparable.cpp
  template <typename type_t>
  class icomparable interface_ {
  public:
    /// @name Public Methods
    
    /// @{
    /// @brief Compares the current instance with another object of the same type.
    /// @param obj An object to compare with this instance.
    /// @return A 32-bit signed integer that indicates the relative order of the objects being compared.
    /// The return value has these meanings:
    /// | Value             | Condition                          |
    /// | ----------------- | ---------------------------------- |
    /// | Less than zero    | This instance is less than obj.    |
    /// | Zero              | This instance is equal to obj.     |
    /// | Greater than zero | This instance is greater than obj. |
    virtual int32 compare_to(const type_t& obj) const noexcept = 0;
    /// @}
    
    /// @cond
    friend bool operator <(const type_t& a, const type_t& b) noexcept {return a.compare_to(b) < 0;}
    friend bool operator <=(const type_t& a, const type_t& b) noexcept {return a.compare_to(b) <= 0;}
    friend bool operator >(const type_t& a, const type_t& b) noexcept {return a.compare_to(b) > 0;}
    friend bool operator >=(const type_t& a, const type_t& b) noexcept {return a.compare_to(b) >= 0;}
#if defined(__xtd__cpp_lib_three_way_comparison)
    friend std::strong_ordering operator <=>(const type_t& a, const type_t& b) noexcept {
      if (a.compare_to(b) < 0) return std::strong_ordering::less;
      if (a.compare_to(b) > 0) return std::strong_ordering::greater;
      return std::strong_ordering::equivalent;
    }
#endif
    template<typename object_t>
    friend bool operator <(const type_t& a, const icomparable<object_t>& b) noexcept {return dynamic_cast<const type_t*>(&b) && a.compare_to(dynamic_cast<const type_t&>(b)) < 0;}
    template<typename object_t>
    friend bool operator <=(const type_t& a, const icomparable<object_t>& b) noexcept {return dynamic_cast<const type_t*>(&b) && a.compare_to(dynamic_cast<const type_t&>(b)) <= 0;}
    template<typename object_t>
    friend bool operator >(const type_t& a, const icomparable<object_t>& b) noexcept {return dynamic_cast<const type_t*>(&b) && a.compare_to(dynamic_cast<const type_t&>(b)) > 0;}
    template<typename object_t>
    friend bool operator >=(const type_t& a, const icomparable<object_t>& b) noexcept {return dynamic_cast<const type_t*>(&b) && a.compare_to(dynamic_cast<const type_t&>(b)) >= 0;}
    /// @endcond
  };
}
