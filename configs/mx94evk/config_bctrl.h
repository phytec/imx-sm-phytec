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
 * Header file containing configuration info for the device block controls.
 */
/*==========================================================================*/

#ifndef CONFIG_BCTRL_H
#define CONFIG_BCTRL_H

/* Includes */

#include "config_user.h"

/* Defines */

/*--------------------------------------------------------------------------*/
/* BCTRL A Config                                                           */
/*--------------------------------------------------------------------------*/

/*! Config for BCTRL A */
#define SM_BCTRL_A_CONFIG \
    { \
        SM_CFG_W1(0x00000008U), 0x00001804U, \
        SM_CFG_W1(0x0000000CU), 0x0000E16AU, \
        SM_CFG_W1(0x00000010U), 0x0000E16AU, \
        SM_CFG_W1(0x00000014U), 0x0000E16AU, \
        SM_CFG_W1(0x00000018U), 0x0000E56AU, \
        SM_CFG_W1(0x00000024U), 0x00000291U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* BCTRL W Config                                                           */
/*--------------------------------------------------------------------------*/

/*! Config for BCTRL W */
#define SM_BCTRL_W_CONFIG \
    { \
        SM_CFG_W1(0x00000030U), 0xF80FDFFFU, \
        SM_CFG_W1(0x00000034U), 0xF80FDFFFU, \
        SM_CFG_W1(0x00000038U), 0xF80FDFFFU, \
        SM_CFG_W1(0x0000003CU), 0xF80FDFFFU, \
        SM_CFG_W1(0x00000040U), 0x02900000U, \
        SM_CFG_W1(0x00000044U), 0x04402000U, \
        SM_CFG_W1(0x00000048U), 0x01400000U, \
        SM_CFG_W1(0x00000050U), 0x00000003U, \
        SM_CFG_W1(0x00000054U), 0x00000003U, \
        SM_CFG_W1(0x00000058U), 0x00000003U, \
        SM_CFG_W1(0x0000005CU), 0x00000003U, \
        SM_CFG_W1(0x00000060U), 0x00001E18U, \
        SM_CFG_W1(0x00000064U), 0x00000004U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* BCTRL N Config                                                           */
/*--------------------------------------------------------------------------*/

/*! Config for BCTRL N */
#define SM_BCTRL_N_CONFIG \
    { \
        SM_CFG_W1(0x000000FCU), 0x000000FFU, \
        SM_CFG_END \
    }

#endif /* CONFIG_BCTRL_H */

/** @} */

