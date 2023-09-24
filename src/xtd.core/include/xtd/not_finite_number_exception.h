/// @file
/// @brief Contains xtd::not_finite_number_exception exception.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "arithmetic_exception"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The exception that is thrown when a floating-point value is positive infinity, negative infinity, or Not-a-Number (NaN).
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core exceptions
  /// @par Examples
  /// The following example demonstrates how to throw and catch an not_finite_number_exception.
  /// @include not_finite_number_exception.cpp
  class not_finite_number_exception : public arithmetic_exception {
  public:
    /// @name Constructors
    
    /// @{
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    /// @remarks Message is set with the default message associate to the exception.
    explicit not_finite_number_exception(const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(default_message(), info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, error, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, help_link, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, error, help_link, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    /// @remarks Message is set with the default message associate to the exception.
    explicit not_finite_number_exception(const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(default_message(), inner_exception, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, inner_exception, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, inner_exception, error, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::exception& inner_exception, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, inner_exception, help_link, info) {}
    /// @brief Create a new instance of class not_finite_number_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Contains current information about member name, file path and  line number in the file where the exception is occurred. Typically #current_stack_frame_.
    explicit not_finite_number_exception(const xtd::ustring& message, const std::exception& inner_exception, const std::error_code& error, const xtd::ustring& help_link, const xtd::diagnostics::stack_frame& info = xtd::diagnostics::stack_frame::empty()) : arithmetic_exception(message, inner_exception, error, help_link, info) {}
    /// @}
    
    /// @cond
    not_finite_number_exception(const not_finite_number_exception&) = default;
    not_finite_number_exception& operator =(const not_finite_number_exception&) = default;
    /// @endcond
    
  private:
    const char* default_message() const noexcept {return "Number encountered was not a finite quantity."_t;}
  };
}

/// @brief Helper on xtd::not_finite_number_exception to call it with current stack frame information.
/// @par Library
/// xtd.core
/// @ingroup xtd_core exceptions
/// @remarks Is equivalent to xtd::not_finite_number_exception {{any argument}, csf_}
/// @code
/// void my_func() {
///   if (invalid_info) throw not_finite_number_exception_(); // same as : throw not_finite_number_exception {csf_};
///   if (invalid_value) throw not_finite_number_exception_("Bad value"); // same as : throw not_finite_number_exception {"Bad value", csf_};
///   ...
/// }
/// @endcode
#define not_finite_number_exception_(...) not_finite_number_exception(add_csf_(__VA_ARGS__))
