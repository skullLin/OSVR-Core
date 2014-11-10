/** @file
    @brief Header

    @date 2014

    @author
    Ryan Pavlik
    <ryan@sensics.com>
    <http://sensics.com>
*/

// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)

#ifndef INCLUDED_HandleNullContext_h_GUID_3951FC65_BC2E_49BD_CACD_978BD4D8F337
#define INCLUDED_HandleNullContext_h_GUID_3951FC65_BC2E_49BD_CACD_978BD4D8F337

// Internal Includes
#include <ogvr/Util/MacroToolsC.h>
#include <ogvr/PluginKit/CommonC.h>

// Library/third-party includes
// - none

// Standard includes
#include <iostream>

/// @brief Internal macro for use in C API function implementations to check the
/// validity of a context parameter for return-code functions.
#define OGVR_PLUGIN_HANDLE_NULL_CONTEXT(FUNC, CONTEXT_NAME)                    \
    OGVR_UTIL_MULTILINE_BEGIN if (!CONTEXT_NAME) {                             \
        std::cerr << "ERROR (" FUNC "): Null context " #CONTEXT_NAME           \
                     " passed!" << std::endl;                                  \
        return OGVR_RETURN_FAILURE;                                            \
    }                                                                          \
    OGVR_UTIL_MULTILINE_END

/// @brief Internal macro for use in C API function implementations to check the
/// validity of a context parameter for constructor-like functions.
#define OGVR_PLUGIN_HANDLE_NULL_CONTEXT_CONSTRUCTOR(FUNC, CONTEXT_NAME)        \
    OGVR_UTIL_MULTILINE_BEGIN if (!CONTEXT_NAME) {                             \
        std::cerr << "ERROR (" FUNC "): Null context " #CONTEXT_NAME           \
                     " passed!" << std::endl;                                  \
        return NULL;                                                           \
    }                                                                          \
    OGVR_UTIL_MULTILINE_END

#endif // INCLUDED_HandleNullContext_h_GUID_3951FC65_BC2E_49BD_CACD_978BD4D8F337
