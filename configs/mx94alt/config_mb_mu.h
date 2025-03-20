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
 * @addtogroup CONFIG_MX94ALT
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing configuration info for the MB_MU.
 */
/*==========================================================================*/

#ifndef CONFIG_MB_MU_H
#define CONFIG_MB_MU_H

/* Includes */

#include "config_user.h"
#include "mb_mu_config.h"

/* Defines */

/*--------------------------------------------------------------------------*/
/* LM0 MB_MU Config (SM)                                                    */
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
/* LM1 MB_MU Config (Boot)                                                  */
/*--------------------------------------------------------------------------*/

/*! Config for MU15 MB */
#define SM_MB_MU15_CONFIG \
    { \
        .mu = 15U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 0U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 1U, \
        .xportType[2] = SM_XPORT_SMT, \
        .xportChannel[2] = 2U, \
    }

/*! Config for MU17 MB */
#define SM_MB_MU17_CONFIG \
    { \
        .mu = 17U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 3U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 4U, \
    }

/*! Config for MU9 MB */
#define SM_MB_MU9_CONFIG \
    { \
        .mu = 9U, \
        .priority = IRQ_PRIO_NOPREEMPT_HIGH, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 5U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 6U, \
    }

/*! Config for MU13 MB */
#define SM_MB_MU13_CONFIG \
    { \
        .mu = 13U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 7U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 8U, \
    }

/*! Config for MU1 MB */
#define SM_MB_MU1_CONFIG \
    { \
        .mu = 1U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 9U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 10U, \
    }

/*! Config for MU3 MB */
#define SM_MB_MU3_CONFIG \
    { \
        .mu = 3U, \
        .xportType[0] = SM_XPORT_SMT, \
        .xportChannel[0] = 11U, \
        .xportType[1] = SM_XPORT_SMT, \
        .xportChannel[1] = 12U, \
    }

/*--------------------------------------------------------------------------*/
/* MB MU Config                                                             */
/*--------------------------------------------------------------------------*/

/*! Config for number of MU MB */
#define SM_NUM_MB_MU  6U

/*! Config data array for MU MB */
#define SM_MB_MU_CONFIG_DATA \
    SM_MB_MU15_CONFIG, \
    SM_MB_MU17_CONFIG, \
    SM_MB_MU9_CONFIG, \
    SM_MB_MU13_CONFIG, \
    SM_MB_MU1_CONFIG, \
    SM_MB_MU3_CONFIG

#endif /* CONFIG_MB_MU_H */

/** @} */

