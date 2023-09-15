/// @file
/// @brief Contains xtd::diagnostics::data_received_event_handler event handler.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "../event_handler"
#include "data_received_event_args"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::diagnostics namespace provides classes that allow you to interact with system processes, event logs, and performance counters.
  namespace diagnostics {
    /// @brief Represents the method that will handle the xtd::diagnostics::process::output_data_received and xtd::diagnostics::process::error_data_received event of a Process.
    /// @code
    /// using data_received_event_handler = xtd::delegate<void(xtd::object& sender, const xtd::diagnostics::data_received_event_args& e)>
    /// @endcode
    /// @param sender The source of the event.
    /// @param e A xtd::diagnostics::process::data_received_event_args that contains the event data.
    /// @par Header
    /// @code #include <xtd/diagnostics/data_received_event_handler> @endcode
    /// @par Namespace
    /// xtd::diagnostics
    /// @par Library
    /// xtd.core
    /// @ingroup xtd_core events
    using data_received_event_handler = xtd::delegate<void(xtd::object& sender, const xtd::diagnostics::data_received_event_args& e)>;
  }
}
