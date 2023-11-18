/// @file
/// @brief Contains xtd::convert class.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "any.h"
#include "argument_null_exception.h"
#include "invalid_cast_exception.h"
#include "static.h"
#include "types.h"
#include "unused.h"

/// @cond
template<typename new_type_t, typename current_type_t>
new_type_t* __convert_value__(current_type_t* value);
/// @endcond

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief Represents API to convert pointers.
  /// @par Header
  /// @code #include <xtd/convert_pointer> @endcode
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core system
  /// @remarks This class cannot be inherited.
  class convert_pointer static_ {
  public:
    /// @name Methods
    
    /// @{
    /// @brief Casts a type into another type.
    /// @par Namespace
    /// xtd
    /// @par Library
    /// xtd.core
    /// @ingroup xtd_core
    /// @par Examples
    /// @code
    /// const button* value = new xtd::forms::button();
    /// const control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename type_t>
    static const type_t* to_ptr(const type_t& value) {
      return &value;
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
    /// control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename type_t>
    static type_t* to_ptr(type_t& value) {
      return &value;
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
    /// const control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename type_t>
    static const type_t* to_ptr(const type_t* value) {
      return value;
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
    /// control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename type_t>
    static type_t* to_ptr(type_t* value) {
      return value;
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
    /// const control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename new_type_t, typename current_type_t>
    static const new_type_t* to_ptr(const current_type_t* value) {
      if (value == nullptr) return nullptr;
      return &to_ref<new_type_t>(*value);
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
    /// control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename new_type_t, typename current_type_t>
    static new_type_t* to_ptr(current_type_t* value) {
      if (value == nullptr) return nullptr;
      return &to_ref<new_type_t>(*value);
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
    /// const control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename new_type_t, typename current_type_t>
    static const new_type_t* to_ptr(const current_type_t& value) {
      return &to_ref<new_type_t>(value);
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
    /// control* result = convert::to_ptr<xtd::forms::control>(value);
    /// @endcode
    template<typename new_type_t, typename current_type_t>
    static new_type_t* to_ptr(current_type_t& value) {
      return &to_ref<new_type_t>(value);
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
    /// const button& result = convert::to_ref<xtd::forms::control>(*value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename type_t>
    static const type_t& to_ref(const type_t& value) {
      return value;
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
    /// button& result = convert::to_ref<xtd::forms::control>(*value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename type_t>
    static type_t& to_ref(type_t& value) {
      return value;
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
    /// const button& result = convert::to_ref<xtd::forms::control>(value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename type_t>
    static const type_t& to_ref(const type_t* value) {
      if (value == nullptr) throw argument_null_exception {csf_};
      return *value;
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
    /// button& result = convert::to_ref<xtd::forms::control>(value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename type_t>
    static type_t& to_ref(type_t* value) { // value parameter can't be const by design.
      if (value == nullptr) throw argument_null_exception {csf_};
      return *value;
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
    /// const control& result = convert::to_ref<xtd::forms::control>(*value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename new_type_t, typename current_type_t>
    static const new_type_t& to_ref(const current_type_t& value) {
      try {
        return dynamic_cast<const new_type_t&>(value);
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    /// control& result = convert::to_ref<xtd::forms::control>(*value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename new_type_t, typename current_type_t>
    static new_type_t& to_ref(current_type_t& value) {
      try {
        return dynamic_cast<new_type_t&>(value);
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    /// const control& result = convert::to_ref<xtd::forms::control>(value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename new_type_t, typename current_type_t>
    static const new_type_t& to_ref(const current_type_t* value) {
      if (value == nullptr) throw argument_null_exception {csf_};
      try {
        return dynamic_cast<const new_type_t&>(*value);
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    /// control& result = convert::to_ref<xtd::forms::control>(value);
    /// @endcode
    /// @exception xtd::invalid_cast_exception the parameters is bad cast.
    template<typename new_type_t, typename current_type_t>
    static new_type_t& to_ref(current_type_t* value) {
      if (value == nullptr) throw argument_null_exception {csf_};
      try {
        return dynamic_cast<new_type_t&>(*value);
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    static std::unique_ptr<new_type_t> to_unique_ptr(std::unique_ptr<current_type_t>& value) {
      auto ptr = value.release();
      try {
        return std::unique_ptr<new_type_t>(__convert_value__<new_type_t>(ptr));
      } catch (const std::exception& e) {
        value = std::unique_ptr<current_type_t>(ptr);
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    static std::unique_ptr<new_type_t> to_unique_ptr(std::unique_ptr<current_type_t>&& value) {
      auto ptr = value.release();
      try {
        return std::unique_ptr<new_type_t>(__convert_value__<new_type_t>(ptr));
      } catch (const std::exception& e) {
        value = std::unique_ptr<current_type_t>(ptr);
        throw invalid_cast_exception(e.what(), csf_);
      }
      throw invalid_cast_exception {csf_};
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
    static std::shared_ptr<new_type_t> to_shared_ptr(const std::shared_ptr<current_type_t>& value) {
      try {
        unused_(dynamic_cast<new_type_t&>(*value.get()));
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      return std::dynamic_pointer_cast<new_type_t>(value);
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
    static std::shared_ptr<new_type_t> to_shared_ptr(std::shared_ptr<current_type_t>& value) {
      try {
        unused_(dynamic_cast<new_type_t&>(*value.get()));
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      return std::dynamic_pointer_cast<new_type_t>(value);
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
    static std::shared_ptr<new_type_t> to_shared_ptr(std::shared_ptr<current_type_t>&& value) {
      try {
        unused_(dynamic_cast<new_type_t&>(*value.get()));
      } catch (const std::exception& e) {
        throw invalid_cast_exception(e.what(), csf_);
      }
      //return std::move(value);
      return std::dynamic_pointer_cast<new_type_t>(std::move(value));
    }
    /// @}
  };
}
