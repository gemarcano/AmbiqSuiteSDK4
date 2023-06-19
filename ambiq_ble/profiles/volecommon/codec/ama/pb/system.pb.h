//*****************************************************************************
//
//  system.pb.h
//! @file
//!
//! @brief Auto-generated (see below).
//!
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
// This is part of revision release_sdk_4_3_0-0ca7d78a2b of the AmbiqSuite Development Package.
//
//*****************************************************************************
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Fri Nov 09 16:58:28 2018. */

#ifndef PB_SYSTEM_PB_H_INCLUDED
#define PB_SYSTEM_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _KeepAlive
{
    char dummy_field;
/* @@protoc_insertion_point(struct:KeepAlive) */
} KeepAlive;

typedef struct _RemoveDevice
{
    char dummy_field;
/* @@protoc_insertion_point(struct:RemoveDevice) */
} RemoveDevice;

typedef struct _ResetConnection
{
    uint32_t timeout;
    bool force_disconnect;
/* @@protoc_insertion_point(struct:ResetConnection) */
} ResetConnection;

typedef struct _SynchronizeSettings
{
    uint32_t timestamp_hi;
    uint32_t timestamp_lo;
/* @@protoc_insertion_point(struct:SynchronizeSettings) */
} SynchronizeSettings;

/* Default values for struct fields */

/* Initializer values for message structs */
#define ResetConnection_init_default             {0, 0}
#define SynchronizeSettings_init_default         {0, 0}
#define KeepAlive_init_default                   {0}
#define RemoveDevice_init_default                {0}
#define ResetConnection_init_zero                {0, 0}
#define SynchronizeSettings_init_zero            {0, 0}
#define KeepAlive_init_zero                      {0}
#define RemoveDevice_init_zero                   {0}

/* Field tags (for use in manual encoding/decoding) */
#define ResetConnection_timeout_tag              1
#define ResetConnection_force_disconnect_tag     2
#define SynchronizeSettings_timestamp_hi_tag     1
#define SynchronizeSettings_timestamp_lo_tag     2

/* Struct field encoding specification for nanopb */
extern const pb_field_t ResetConnection_fields[3];
extern const pb_field_t SynchronizeSettings_fields[3];
extern const pb_field_t KeepAlive_fields[1];
extern const pb_field_t RemoveDevice_fields[1];

/* Maximum encoded size of messages (where known) */
#define ResetConnection_size                     8
#define SynchronizeSettings_size                 12
#define KeepAlive_size                           0
#define RemoveDevice_size                        0

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SYSTEM_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
