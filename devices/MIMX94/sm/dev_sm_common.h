/*
** ###################################################################
**
**     Copyright 2025 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

#ifndef DEV_SM_COMMON_H
#define DEV_SM_COMMON_H

/*==========================================================================*/
/*!
 * @addtogroup DEV_SM_MX94
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the SM API for the common device.
 */
/*==========================================================================*/

/* Includes */

#include "sm.h"

/* Defines */

/*! Max number of device agents */
#define DEV_SM_NUM_AGENT   9U
/*! Number of devices */
#define DEV_SM_NUM_DEVICE  0U
/*! Number of device bases */
#define DEV_SM_NUM_BASE    (DEV_SM_NUM_AGENT + DEV_SM_NUM_DEVICE)

/*!
 * @name Base agent indexes
 */
/** @{ */
#define DEV_SM_BASE_AGENT_0  0U  /*!< Agent 0 */
#define DEV_SM_BASE_AGENT_1  1U  /*!< Agent 1 */
#define DEV_SM_BASE_AGENT_2  2U  /*!< Agent 2 */
#define DEV_SM_BASE_AGENT_3  3U  /*!< Agent 3 */
#define DEV_SM_BASE_AGENT_4  4U  /*!< Agent 4 */
#define DEV_SM_BASE_AGENT_5  5U  /*!< Agent 5 */
#define DEV_SM_BASE_AGENT_6  6U  /*!< Agent 6 */
#define DEV_SM_BASE_AGENT_7  7U  /*!< Agent 7 */
#define DEV_SM_BASE_AGENT_8  8U  /*!< Agent 8 */
/** @} */

/*!
 * @name Silicon version IDs
 */
/** @{ */
#define DEV_SM_SIVER_A0  0x00000000U  /*!< A0 */
/** @} */

/* Types */

/*!
 * Syslog
 */
typedef struct
{
    /*! System sleep record */
    dev_sm_sys_sleep_rec_t sysSleepRecord;

#ifdef DEV_SM_MSG_PROF_CNT
    /*! Message profiling record */
    dev_sm_sys_msg_rec_t sysMsgRecord;
#endif
} dev_sm_syslog_t;

/* Global variables */

/*! Structure to hold the syslog */
extern dev_sm_syslog_t g_syslog;

/* Functions */

/** @} */

/* Include SM device API */

// coverity[misra_c_2012_rule_20_1_violation:FALSE]
#include "dev_sm_common_api.h"

#endif /* DEV_SM_COMMON_H */

