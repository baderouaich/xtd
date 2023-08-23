/// @file
/// @brief Contains xtd::threading::cancellation_token_registration class.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once

#include "../core_export.h"
#include "../object.h"
#include "../types.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::threading namespace provides classes and interfaces that enable multithreaded programming. In addition to classes for synchronizing cancellation_token_registration activities and access to data ( xtd::threading::mutex, xtd::threading::monitor, xtd::threading::interlocked, xtd::threading::auto_reset_event, and so on), this namespace includes a xtd::threading::cancellation_token_registration class that allows you to use a pool of system-supplied threads, and a xtd::threading::cancellation_token_registration class that executes callback methods on cancellation_token_registration pool threads.
  namespace threading {
    /// @brief Propagates notification that operations should be canceled.
    /// @code
    /// class core_export_ cancellation_token_registration : public xtd::object
    /// @endcode
    /// @par Inheritance
    /// xtd::object → xtd::threading::cancellation_token_registration
    /// @par Header
    /// @code #include <xtd/threading/cancellation_token_registration> @endcode
    /// @par Namespace
    /// xtd::threading
    /// @par Library
    /// xtd.core threading
    /// @ingroup xtd_core threading
    class core_export_ cancellation_token_registration : public object {
      struct data;
    public:
      /// @name Constructors
      
      /// @{
      /// @}

      /// @cond
      cancellation_token_registration();
      cancellation_token_registration(const cancellation_token_registration& cancellation_token_registration);
      cancellation_token_registration& operator=(const cancellation_token_registration& cancellation_token_registration);
      ~cancellation_token_registration();
      /// @endcond
      
      /// @name Proeprties
      
      /// @{
      /// @}
      
      /// @name Methods
      
      /// @{
      /// @}

    private:

    };
  }
}
