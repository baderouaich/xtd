/// @file
/// @brief Contains xtd::net::protocol_violation_exception exception.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "../format_exception.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::net namespace provides a simple programming interface for many of the protocols used on networks today. The xtd::net::web_request and xtd::net::web_response classes form the basis of what are called pluggable protocols, an implementation of network services that enables you to develop applications that use Internet resources without worrying about the specific details of the individual protocols.
  namespace net {
    /// @brief The exception that is thrown when an error is made adding a xtd::net::cookie to a xtd::net::cookie_container.
    /// @par Namespace
    /// xtd::net
    /// @par Library
    /// xtd.core
    /// @ingroup xtd_core exceptions
    /// @par Examples
    /// The following example demonstrates how to throw and catch an protocol_violation_exception.
    /// @include protocol_violation_exception.cpp
    class protocol_violation_exception : public format_exception {
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      /// @remarks Message is set with the default message associate to the exception.
      explicit protocol_violation_exception(const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(default_message(), info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param error Error code associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, error, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, help_link, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param error Error code associate to the exception.
      /// @param help_link Help link string associate to the exception.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, error, help_link, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      /// @remarks Message is set with the default message associate to the exception.
      explicit protocol_violation_exception(const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(default_message(), inner_exception, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, inner_exception, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param error Error code associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, inner_exception, error, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, inner_exception, help_link, info) {}
      /// @brief Create a new instance of class protocol_violation_exception
      /// @param message Message string associate to the exception.
      /// @param inner_exception The exception that is the cause of the current exception.
      /// @param error Error code associate to the exception.
      /// @param help_link Help link string associate to the exception.
      /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
      explicit protocol_violation_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : format_exception(message, inner_exception, error, help_link, info) {}
      /// @}
      
      /// @cond
      protocol_violation_exception(const protocol_violation_exception&) = default;
      protocol_violation_exception& operator =(const protocol_violation_exception&) = default;
      /// @endcond
      
    private:
      const char* default_message() const noexcept {return "Operation is not valid due to the current state of the object."_t;}
    };
  }
}

/// @brief Helper on system_exception to call it with caller information
/// @par Library
/// xtd.core
/// @ingroup xtd_core exceptions
/// @remarks Is equivalent to protocol_violation_exception({any argument}, csf_)
/// @code
/// void my_func() {
///   if (invalid_info) throw protocol_violation_exception_(); // same as : throw protocol_violation_exception(csf_);
///   if (invalid_value) throw protocol_violation_exception_("Bad value"); // same as : throw protocol_violation_exception("Bad value", csf_);
///   ...
/// }
/// @endcode
#define protocol_violation_exception_(...) protocol_violation_exception(add_csf_(__VA_ARGS__))
