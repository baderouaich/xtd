/// @file
/// @brief Contains xtd::iequatable interface.
/// @copyright Copyright (c) 2024 Gammasoft. All rights reserved.
#pragma once
#include "interface.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  template<typename type_t>
  /// @brief Defines a generalized method that a value type or class implements to create a type-specific method for determining equality of instances.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core interfaces
  /// @remarks This interface is implemented by types whose values can be equated (for example, the numeric and string classes). A value type or class implements the equals method to create a type-specific method suitable for determining equality of instances.
  /// @remarks The xtd::icomparable<type_t> interface defines the compare_to method, which determines the sort order of instances of the implementing type. The iequatable<T> interface defines the equals method, which determines the equality of instances of the implementing type.
  /// @par Examples
  /// The following example shows how to use xtd::iequatable interface.
  /// @include iequatable.cpp
  class iequatable interface_ {
  public:
    /// @name Public Methods
    
    /// @{
    /// @brief Indicates wheth er the current object is equal to another object of the same type.
    /// @param obj An object to compare with this object.
    /// @return true if the current object is equal to the other parameter; otherwise, false.
    virtual bool equals(const type_t&) const noexcept = 0;
    /// @}
    
    /// @cond
    friend bool operator ==(const type_t& a, const type_t& b) noexcept {return a.equals(b);}
    friend bool operator !=(const type_t& a, const type_t& b) noexcept {return !a.equals(b);}
    template<typename object_t>
    friend bool operator ==(const type_t& a, const iequatable<object_t>& b) noexcept {return dynamic_cast<const type_t*>(&b) && a.equals(dynamic_cast<const type_t&>(b));}
    template<typename object_t>
    friend bool operator !=(const type_t& a, const iequatable<object_t>& b) noexcept {return !dynamic_cast<const type_t*>(&b) || !a.equals(dynamic_cast<const type_t&>(b));}
    /// @endcond
  };
}
