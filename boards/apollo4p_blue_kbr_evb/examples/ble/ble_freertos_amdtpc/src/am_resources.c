//*****************************************************************************
//
// file am_resources.c
//
// brief This generated file contains a list of resources and owners.
//
// This file is generated by "configure_system.py".
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2022, Ambiq Micro, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of the AmbiqSuite Development Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "am_mcu_apollo.h"

//*****************************************************************************
//
// MCU Resources.
//
//*****************************************************************************
AM_SHARED_RW uint32_t ui32MCUClaimed[AM_HAL_ACCESS_STRUCT_SIZE];
AM_USED const uint32_t ui32MCUAllowed[AM_HAL_ACCESS_STRUCT_SIZE] =
{
    0x00000000,
    0x00000000,
    0x00000000
};

//*****************************************************************************
//
// DSP0 Resources.
//
//*****************************************************************************
AM_SHARED_RW uint32_t ui32DSP0Claimed[AM_HAL_ACCESS_STRUCT_SIZE];
AM_USED const uint32_t ui32DSP0Allowed[AM_HAL_ACCESS_STRUCT_SIZE] =
{
    0x00000000,
    0x00000000,
    0x00000000
};

//*****************************************************************************
//
// DSP1 Resources.
//
//*****************************************************************************
AM_SHARED_RW uint32_t ui32DSP1Claimed[AM_HAL_ACCESS_STRUCT_SIZE];
AM_USED const uint32_t ui32DSP1Allowed[AM_HAL_ACCESS_STRUCT_SIZE] =
{
    0x00000000,
    0x00000000,
    0x00000000
};

//*****************************************************************************
//
// List of shared resources.
//
//*****************************************************************************
AM_USED const uint32_t ui32SharedAccess[AM_HAL_ACCESS_STRUCT_SIZE] =
{
    0x00000000,
    0x00000000,
    0x00000000
};

//*****************************************************************************
//
// The final resource structure to be passed on to the HAL
//
//*****************************************************************************
AM_USED const am_hal_access_t sGlobalAccess =
{
    ui32SharedAccess,
    ui32MCUAllowed,
    ui32DSP0Allowed,
    ui32DSP1Allowed,
    ui32MCUClaimed,
    ui32DSP0Claimed,
    ui32DSP1Claimed,
};

AM_RESOURCE_TABLE const am_hal_access_t *psGlobalAccessPtr = &sGlobalAccess;

//*****************************************************************************
//
// End Doxygen group.
//! @}
//
//*****************************************************************************