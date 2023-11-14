/*
** ###################################################################
**
** Copyright 2023 NXP
**
** Redistribution and use in source and binary forms, with or without modification,
** are permitted provided that the following conditions are met:
**
** o Redistributions of source code must retain the above copyright notice, this list
**   of conditions and the following disclaimer.
**
** o Redistributions in binary form must reproduce the above copyright notice, this
**   list of conditions and the following disclaimer in the documentation and/or
**   other materials provided with the distribution.
**
** o Neither the name of the copyright holder nor the names of its
**   contributors may be used to endorse or promote products derived from this
**   software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
** ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
** ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/*!
 * @addtogroup MONITOR
 * @{
 *
 * @file
 * @brief
 *
 * Header file for the SM debug monitor TRDC commands.
 */
/*==========================================================================*/

#ifndef SM_MONITOR_TRDC_H
#define SM_MONITOR_TRDC_H

/* Includes */

#include "sm.h"

/* Defines */

/* Types */

/* Functions */

/*!
 * Dispatch trdc command.
 *
 * @param[in]     argc              Number of arguments
 * @param[in]     argv              List of arguments
 *
 * Dumps the TRDC in a parsed form.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 */
int32_t MONITOR_CmdTrdc(int32_t argc, const char * const argv[]);

/*!
 * Dispatch trdc.raw command.
 *
 * @param[in]     argc              Number of arguments
 * @param[in]     argv              List of arguments
 *
 * Dumps the TRDC in a raw form.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 */
int32_t MONITOR_CmdTrdcRaw(int32_t argc, const char * const argv[]);

/*!
 * Dispatch TRDC part of err command.
 *
 * @param[in]     argc              Number of arguments
 * @param[in]     argv              List of arguments
 *
 * Dumps any error response data found in any powered TRDC.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 */
int32_t MONITOR_CmdTrdcErr(int32_t argc, const char * const argv[]);

/* External variables */

#endif /* SM_MONITOR_TRDC_H */

/** @} */

