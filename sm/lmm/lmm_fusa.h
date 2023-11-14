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
 * @addtogroup LMM_FUSA
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the API for the Logical Machine Manager FuSa.
 */
/*==========================================================================*/

#ifndef LMM_FUSA_H
#define LMM_FUSA_H

/* Includes */

#include "sm.h"
#include "dev_sm_api.h"

/* Defines */

/* SCMI FuSa F-EENV states */
#define LMM_FUSA_FEENV_STATE_PRE_SAFETY      0U
#define LMM_FUSA_FEENV_STATE_SAFETY_RUNTIME  1U
#define LMM_FUSA_FEENV_STATE_SOC_STANDBY     2U
#define LMM_FUSA_FEENV_STATE_SOC_SHUTDOWN    3U
#define LMM_FUSA_FEENV_STATE_SOC_RESET       4U

/* SCMI FuSa S-EENV states */
#define LMM_FUSA_SEENV_STATE_INIT            0U
#define LMM_FUSA_SEENV_STATE_SAFETY_READY    1U
#define LMM_FUSA_SEENV_STATE_SAFETY_RUNTIME  2U
#define LMM_FUSA_SEENV_STATE_TERMINAL        3U

/* Types */

/* Functions */

/*!
 * Initialize the FuSa system.
 *
 * This function initializes the functional safety system.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 */
int32_t LMM_FusaInit(void);

void LMM_SsenvNumGet(uint32_t *num);

int32_t LMM_FusaFeenvStateGet(uint32_t lmId, uint32_t *feenvState,
    uint32_t *mselMode);

int32_t LMM_FusaFeenvStateSet(uint32_t lmId, uint32_t feenvState,
    bool graceful);

int32_t LMM_FusaSeenvStateGet(uint32_t lmId, uint32_t *seenvState);

int32_t LMM_FusaSeenvStateSet(uint32_t lmId, uint32_t seenvState,
    uint32_t pingCookie, uint32_t scstSignature);

int32_t LMM_FusaFaultGet(uint32_t lmId, uint32_t faultId,
    bool *state);

int32_t LMM_FusaFaultSet(uint32_t lmId, uint32_t faultId, bool set);

int32_t LMM_FusaScheckEvntrig(uint32_t lmId);

int32_t LMM_FusaFaultRecover(uint32_t faultId, uint32_t *reaction,
    uint32_t *lm);

void LMM_FusaFaultCleared(uint32_t faultId);

int32_t LMM_FusaCrcCalculate(uint32_t lmId, uint32_t crcChannel,
    uint32_t crcCfg, uint64_t memStart, uint32_t memSize);

int32_t LMM_FusaCrcResultGet(uint32_t lmId, uint32_t crcChannel,
    uint64_t *memStart, uint32_t *memSize, uint32_t *crcResult);

#endif /* LMM_FUSA_H */

/** @} */

