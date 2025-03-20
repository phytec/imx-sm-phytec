/*
** ###################################################################
**
** Copyright 2025 NXP
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
 * @addtogroup CONFIG_MX94EVK
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing configuration info for the logical machine manager.
 */
/*==========================================================================*/

#ifndef CONFIG_LMM_H
#define CONFIG_LMM_H

/* Includes */

#include "config_user.h"

/* Defines */

/*--------------------------------------------------------------------------*/
/* LM0 Config (SM)                                                          */
/*--------------------------------------------------------------------------*/

/*! Config for LM0 */
#define SM_LM0_CONFIG \
    { \
        .name = "SM", \
        .rpcType = SM_RPC_NONE, \
        .boot[0] = 1U, \
        .safeType = LMM_SAFE_TYPE_FEENV, \
        .boot[1] = 1U, \
        .boot[2] = 1U, \
    }

/*--------------------------------------------------------------------------*/
/* LM1 Config (M33S)                                                        */
/*--------------------------------------------------------------------------*/

/*! Config for LM1 */
#define SM_LM1_CONFIG \
    { \
        .name = "M33S", \
        .rpcType = SM_RPC_SCMI, \
        .rpcInst = 0U, \
        .boot[0] = 2U, \
        .bootSkip[0] = 1U, \
        .group = 1U, \
        .start = 1U, \
        .stop = 1U, \
        .boot[1] = 2U, \
        .bootSkip[1] = 1U, \
    }

/*--------------------------------------------------------------------------*/
/* LM2 Config (M7)                                                          */
/*--------------------------------------------------------------------------*/

/*! Config for LM2 */
#define SM_LM2_CONFIG \
    { \
        .name = "M7", \
        .rpcType = SM_RPC_SCMI, \
        .rpcInst = 1U, \
        .boot[0] = 3U, \
        .bootSkip[0] = 1U, \
        .safeType = LMM_SAFE_TYPE_SEENV, \
        .start = 7U, \
        .stop = 7U, \
        .boot[1] = 3U, \
    }

/*--------------------------------------------------------------------------*/
/* LM3 Config (M71)                                                         */
/*--------------------------------------------------------------------------*/

/*! Config for LM3 */
#define SM_LM3_CONFIG \
    { \
        .name = "M71", \
        .rpcType = SM_RPC_SCMI, \
        .rpcInst = 2U, \
        .boot[0] = 4U, \
        .bootSkip[0] = 1U, \
        .safeType = LMM_SAFE_TYPE_SEENV, \
        .start = 12U, \
        .stop = 13U, \
    }

/*--------------------------------------------------------------------------*/
/* LM4 Config (AP)                                                          */
/*--------------------------------------------------------------------------*/

/*! Config for LM4 */
#define SM_LM4_CONFIG \
    { \
        .name = "AP", \
        .rpcType = SM_RPC_SCMI, \
        .rpcInst = 3U, \
        .boot[0] = 5U, \
        .bootSkip[0] = 1U, \
        .start = 18U, \
        .stop = 19U, \
    }

/*--------------------------------------------------------------------------*/
/* LM Config                                                                */
/*--------------------------------------------------------------------------*/

/*! Config for number of LM */
#define SM_NUM_LM  5U

/*! Config data array for LM */
#define SM_LM_CONFIG_DATA \
    SM_LM0_CONFIG, \
    SM_LM1_CONFIG, \
    SM_LM2_CONFIG, \
    SM_LM3_CONFIG, \
    SM_LM4_CONFIG

/*! Number of  mSel */
#define SM_LM_NUM_MSEL  3U

/*! Number of  S-EENV */
#define SM_LM_NUM_SEENV  2U

/*! Config name */
#define SM_LM_CFG_NAME  "mx94evk"

/*! Default LM for monitor */
#define SM_LM_DEFAULT  4U

/*--------------------------------------------------------------------------*/
/* LM Start/Stop Lists                                                      */
/*--------------------------------------------------------------------------*/

/*! Config for number of start */
#define SM_LM_NUM_START  26U

/*! LM start list */
#define SM_LM_START_DATA \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 1U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 1U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 1U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 1U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M70}, \
    {.lmId = 2U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M70}, \
    {.lmId = 2U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 2U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 3U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 3U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 3U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 3U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 3U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 3U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PERF, .rsrc = DEV_SM_PERF_A55, \
     .numArg = 1, .arg[0] = 3U,}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PERF, .rsrc = DEV_SM_PERF_A55, \
     .numArg = 1, .arg[0] = 3U,}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PERF, .rsrc = DEV_SM_PERF_A55, \
     .numArg = 1, .arg[0] = 3U,}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55C0}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55C0}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55C0},

/*! Config for number of stop */
#define SM_LM_NUM_STOP  36U

/*! LM stop list */
#define SM_LM_STOP_DATA \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 1U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 1U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M33S}, \
    {.lmId = 1U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 1U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 1U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_NETC}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 2U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 2U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P0}, \
    {.lmId = 2U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M70}, \
    {.lmId = 2U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M70}, \
    {.lmId = 2U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M70}, \
    {.lmId = 3U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 3U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 3U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_M7P1}, \
    {.lmId = 3U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 3U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 3U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_M71}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55P}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55P}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_CPU, .rsrc = DEV_SM_CPU_A55P}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C3}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C3}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C3}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C2}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C2}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C2}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C1}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C1}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C1}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C0}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C0}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55C0}, \
    {.lmId = 4U, .mSel = 0U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 4U, .mSel = 1U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P}, \
    {.lmId = 4U, .mSel = 2U, .ss = LMM_SS_PD, .rsrc = DEV_SM_PD_A55P},

/*--------------------------------------------------------------------------*/
/* LM Fault Lists                                                           */
/*--------------------------------------------------------------------------*/

/*! LM fault reactions */
#define SM_LM_FAULT_DATA \
    [DEV_SM_FAULT_SWNCF03] = {.reaction = LMM_REACT_GRP_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_SWNCF04] = {.reaction = LMM_REACT_SYS_RESET, .lm = 0U}, \
    [DEV_SM_FAULT_M33_SYNC_LOCKUP] = {.reaction = LMM_REACT_LM_RESET, .lm = 1U}, \
    [DEV_SM_FAULT_M33_SYNC_RST] = {.reaction = LMM_REACT_LM_RESET, .lm = 1U}, \
    [DEV_SM_FAULT_WDOG7] = {.reaction = LMM_REACT_LM_RESET, .lm = 1U}, \
    [DEV_SM_FAULT_WDOG8] = {.reaction = LMM_REACT_LM_RESET, .lm = 1U}, \
    [DEV_SM_FAULT_M7_LOCKUP] = {.reaction = LMM_REACT_LM_RESET, .lm = 2U}, \
    [DEV_SM_FAULT_M7_RST] = {.reaction = LMM_REACT_LM_RESET, .lm = 2U}, \
    [DEV_SM_FAULT_SWNCF00] = {.reaction = LMM_REACT_FUSA, .lm = 2U}, \
    [DEV_SM_FAULT_SWNCF01] = {.reaction = LMM_REACT_LM_RESET, .lm = 2U}, \
    [DEV_SM_FAULT_WDOG5] = {.reaction = LMM_REACT_LM_RESET, .lm = 2U}, \
    [DEV_SM_FAULT_M7_1_LOCKUP] = {.reaction = LMM_REACT_LM_RESET, .lm = 3U}, \
    [DEV_SM_FAULT_M7_1_RST] = {.reaction = LMM_REACT_LM_RESET, .lm = 3U}, \
    [DEV_SM_FAULT_SWNCF02] = {.reaction = LMM_REACT_FUSA, .lm = 3U}, \
    [DEV_SM_FAULT_WDOG6] = {.reaction = LMM_REACT_LM_RESET, .lm = 3U}, \
    [DEV_SM_FAULT_WDOG3] = {.reaction = LMM_REACT_LM_RESET, .lm = 4U}, \
    [DEV_SM_FAULT_WDOG4] = {.reaction = LMM_REACT_LM_RESET, .lm = 4U},

#endif /* CONFIG_LMM_H */

/** @} */

