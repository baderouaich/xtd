
/// @file
/// @brief Contains socket shutdown constants.
/// @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
#pragma once
/// @cond
#ifndef __XTD_CORE_NATIVE_LIBRARY__
#error "Do not include this file: Internal use only"
#endif
/// @endcond

#include <cstdint>

/// @internal
/// @brief Disables a xtd::net::sockets::socket for receiving.
/// @par Library
/// xtd.core.native
/// @ingroup xtd_core_native socket_shutdown
/// @remarks Added specifically for xtd.
/// @warning Internal use only
constexpr int32_t SOCKET_SHUTDOWN_RECEIVE = 0;

/// @internal
/// @brief Disables a xtd::net::sockets::socket for sending.
/// @par Library
/// xtd.core.native
/// @ingroup xtd_core_native socket_shutdown
/// @remarks Added specifically for xtd.
/// @warning Internal use only
constexpr int32_t SOCKET_SHUTDOWN_SEND = 1;

/// @internal
/// @brief Disables a xtd::net::sockets::socket for both sending and receiving.
/// @par Library
/// xtd.core.native
/// @ingroup xtd_core_native socket_shutdown
/// @remarks Added specifically for xtd.
/// @warning Internal use only
constexpr int32_t SOCKET_SHUTDOWN_BOTH = 2;
