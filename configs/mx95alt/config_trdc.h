/*
** ###################################################################
**
** Copyright 2023-2024 NXP
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
 * @addtogroup CONFIG_MX95ALT
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing coniguration info for the TRDC SM abstraction.
 */
/*==========================================================================*/

#ifndef CONFIG_TRDC_H
#define CONFIG_TRDC_H

/* Includes */

#include "config.h"

/* Defines */

/*--------------------------------------------------------------------------*/
/* TRDC A Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC A */
#define SM_TRDC_A_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB00000A0U, \
        SM_CFG_W1(0x00000820U), 0xB0000012U, \
        SM_CFG_W1(0x00000840U), 0xB0000013U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x00000a00U), 0x90000002U, \
        SM_CFG_W1(0x00000a04U), 0x90000002U, \
        SM_CFG_W1(0x00000a08U), 0x90000002U, \
        SM_CFG_W1(0x00000a20U), 0xB0000013U, \
        SM_CFG_W1(0x00000a40U), 0xB0000013U, \
        SM_CFG_W1(0x00000a60U), 0xB0000013U, \
        SM_CFG_W1(0x00000a80U), 0xB0000013U, \
        SM_CFG_W1(0x00000aa0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ac0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ae0U), 0xB0000013U, \
        SM_CFG_W1(0x00000b00U), 0xB0000013U, \
        SM_CFG_W1(0x00000b20U), 0xB0000013U, \
        SM_CFG_W1(0x00000b40U), 0xB0000013U, \
        SM_CFG_W1(0x00000b60U), 0xB0000013U, \
        SM_CFG_W1(0x00000b80U), 0xB0000013U, \
        SM_CFG_W1(0x00000ba0U), 0xB0000013U, \
        SM_CFG_W1(0x00000bc0U), 0xB0000013U, \
        SM_CFG_W1(0x00000be0U), 0xB0000013U, \
        SM_CFG_W1(0x00000c00U), 0xB0000013U, \
        SM_CFG_W1(0x00000c20U), 0xB0000013U, \
        SM_CFG_W1(0x00000c40U), 0xB0000013U, \
        SM_CFG_W1(0x00000c60U), 0xB0000013U, \
        SM_CFG_W1(0x00000c80U), 0xB0000013U, \
        SM_CFG_W1(0x00000ca0U), 0xB00000A1U, \
        SM_CFG_W1(0x00000cc0U), 0xB00000A1U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010030U), 0x4444U, \
        SM_CFG_Z1(0x00010050U), \
        SM_CFG_Z1(0x00010054U), \
        SM_CFG_W1(0x00010064U), 0x00000003U, \
        SM_CFG_W1(0x00010068U), 0x00000003U, \
        SM_CFG_W1(0x00010180U), 0x000000C0U, \
        SM_CFG_Z1(0x00010250U), \
        SM_CFG_Z1(0x00010254U), \
        SM_CFG_W1(0x00010264U), 0x00000900U, \
        SM_CFG_W1(0x00010380U), 0x000000C0U, \
        SM_CFG_W1(0x00010450U), 0x33003330U, \
        SM_CFG_W1(0x00010454U), 0x03333033U, \
        SM_CFG_W1(0x00010458U), 0x00030000U, \
        SM_CFG_W1(0x0001045cU), 0x33330030U, \
        SM_CFG_W1(0x00010460U), 0x33333333U, \
        SM_CFG_W1(0x00010464U), 0x30000003U, \
        SM_CFG_W1(0x00010468U), 0x33330030U, \
        SM_CFG_W1(0x0001046cU), 0x33333333U, \
        SM_CFG_W1(0x00010470U), 0x33333333U, \
        SM_CFG_W1(0x00010474U), 0x00003030U, \
        SM_CFG_W1(0x00010580U), 0x000003C0U, \
        SM_CFG_W1(0x000105a8U), 0x00000003U, \
        SM_CFG_W1(0x00010640U), 0x99999999U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010648U), 0x99999999U, \
        SM_CFG_W1(0x0001064cU), 0x99999999U, \
        SM_CFG_W1(0x00010650U), 0x09000909U, \
        SM_CFG_W1(0x00010654U), 0x9000C900U, \
        SM_CFG_W1(0x00010658U), 0x99909999U, \
        SM_CFG_W1(0x0001065cU), 0x00009909U, \
        SM_CFG_W1(0x00010668U), 0x00009900U, \
        SM_CFG_W1(0x0001066cU), 0x90909000U, \
        SM_CFG_W1(0x00010670U), 0x00009090U, \
        SM_CFG_W1(0x00010674U), 0x00000909U, \
        SM_CFG_W1(0x00010780U), 0x999990C0U, \
        SM_CFG_Z1(0x00010850U), \
        SM_CFG_Z1(0x00010854U), \
        SM_CFG_W1(0x00010980U), 0x000000C0U, \
        SM_CFG_Z1(0x00010a50U), \
        SM_CFG_Z1(0x00010a54U), \
        SM_CFG_W1(0x00010b80U), 0x000000C0U, \
        SM_CFG_Z1(0x00010c50U), \
        SM_CFG_Z1(0x00010c54U), \
        SM_CFG_W1(0x00010d80U), 0x000000C0U, \
        SM_CFG_Z1(0x00010e50U), \
        SM_CFG_Z1(0x00010e54U), \
        SM_CFG_W1(0x00010f80U), 0x000000C0U, \
        SM_CFG_Z1(0x00011050U), \
        SM_CFG_Z1(0x00011054U), \
        SM_CFG_W1(0x00011064U), 0x09999000U, \
        SM_CFG_W1(0x00011180U), 0x000000C0U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011248U), 0x33333333U, \
        SM_CFG_W1(0x0001124cU), 0x33333333U, \
        SM_CFG_W1(0x00011250U), 0x33003333U, \
        SM_CFG_W1(0x00011254U), 0x33333333U, \
        SM_CFG_W1(0x00011258U), 0x33333333U, \
        SM_CFG_W1(0x0001125cU), 0x33333333U, \
        SM_CFG_W1(0x00011260U), 0x33333333U, \
        SM_CFG_W1(0x00011264U), 0x33333303U, \
        SM_CFG_W1(0x00011268U), 0x33333333U, \
        SM_CFG_W1(0x0001126cU), 0x33333333U, \
        SM_CFG_W1(0x00011270U), 0x33333333U, \
        SM_CFG_W1(0x00011274U), 0x00003333U, \
        SM_CFG_W1(0x00011380U), 0x333333F0U, \
        SM_CFG_W1(0x000113a8U), 0x00000003U, \
        SM_CFG_Z1(0x00011450U), \
        SM_CFG_Z1(0x00011454U), \
        SM_CFG_W1(0x00011580U), 0x000000C0U, \
        SM_CFG_Z1(0x00011650U), \
        SM_CFG_Z1(0x00011654U), \
        SM_CFG_W1(0x00011780U), 0x000000C0U, \
        SM_CFG_Z1(0x00011850U), \
        SM_CFG_Z1(0x00011854U), \
        SM_CFG_W1(0x00011980U), 0x000000C0U, \
        SM_CFG_Z1(0x00011a50U), \
        SM_CFG_Z1(0x00011a54U), \
        SM_CFG_W1(0x00011b80U), 0x000000C0U, \
        SM_CFG_Z1(0x00011c50U), \
        SM_CFG_Z1(0x00011c54U), \
        SM_CFG_W1(0x00011d80U), 0x000000C0U, \
        SM_CFG_Z1(0x00011e50U), \
        SM_CFG_Z1(0x00011e54U), \
        SM_CFG_W1(0x00011f80U), 0x000000C0U, \
        SM_CFG_W1(0x00012024U), 0x6666U, \
        SM_CFG_W1(0x00012028U), 0x7777U, \
        SM_CFG_W1(0x0001202cU), 0x7700U, \
        SM_CFG_W1(0x00012030U), 0x6600U, \
        SM_CFG_W1(0x00012180U), 0x99999999U, \
        SM_CFG_W1(0x00012184U), 0x99999999U, \
        SM_CFG_W1(0x00012188U), 0x99999999U, \
        SM_CFG_W1(0x0001218cU), 0x99999999U, \
        SM_CFG_W1(0x00012440U), 0x33333333U, \
        SM_CFG_W1(0x00012444U), 0x33333333U, \
        SM_CFG_W1(0x00012448U), 0x33333333U, \
        SM_CFG_W1(0x0001244cU), 0x33333333U, \
        SM_CFG_W1(0x00012580U), 0x33333333U, \
        SM_CFG_W1(0x00012584U), 0x33333333U, \
        SM_CFG_W1(0x00012588U), 0x33333333U, \
        SM_CFG_W1(0x0001258cU), 0x33333333U, \
        SM_CFG_Z1(0x00012640U), \
        SM_CFG_Z1(0x00012644U), \
        SM_CFG_Z1(0x00012648U), \
        SM_CFG_Z1(0x0001264cU), \
        SM_CFG_Z1(0x00012780U), \
        SM_CFG_Z1(0x00012784U), \
        SM_CFG_Z1(0x00012788U), \
        SM_CFG_Z1(0x0001278cU), \
        SM_CFG_Z1(0x00012840U), \
        SM_CFG_Z1(0x00012844U), \
        SM_CFG_Z1(0x00012848U), \
        SM_CFG_Z1(0x0001284cU), \
        SM_CFG_Z1(0x00012980U), \
        SM_CFG_Z1(0x00012984U), \
        SM_CFG_Z1(0x00012988U), \
        SM_CFG_Z1(0x0001298cU), \
        SM_CFG_Z1(0x00012a40U), \
        SM_CFG_Z1(0x00012a44U), \
        SM_CFG_Z1(0x00012a48U), \
        SM_CFG_Z1(0x00012a4cU), \
        SM_CFG_Z1(0x00012b80U), \
        SM_CFG_Z1(0x00012b84U), \
        SM_CFG_Z1(0x00012b88U), \
        SM_CFG_Z1(0x00012b8cU), \
        SM_CFG_Z1(0x00012c40U), \
        SM_CFG_Z1(0x00012c44U), \
        SM_CFG_Z1(0x00012c48U), \
        SM_CFG_Z1(0x00012c4cU), \
        SM_CFG_Z1(0x00012d80U), \
        SM_CFG_Z1(0x00012d84U), \
        SM_CFG_Z1(0x00012d88U), \
        SM_CFG_Z1(0x00012d8cU), \
        SM_CFG_Z1(0x00012e40U), \
        SM_CFG_Z1(0x00012e44U), \
        SM_CFG_Z1(0x00012e48U), \
        SM_CFG_Z1(0x00012e4cU), \
        SM_CFG_Z1(0x00012f80U), \
        SM_CFG_Z1(0x00012f84U), \
        SM_CFG_Z1(0x00012f88U), \
        SM_CFG_Z1(0x00012f8cU), \
        SM_CFG_W1(0x00013240U), 0x44444444U, \
        SM_CFG_W1(0x00013244U), 0x44444444U, \
        SM_CFG_W1(0x00013248U), 0x44444444U, \
        SM_CFG_W1(0x0001324cU), 0x44444444U, \
        SM_CFG_W1(0x00013380U), 0x44444444U, \
        SM_CFG_W1(0x00013384U), 0x44444444U, \
        SM_CFG_W1(0x00013388U), 0x44444444U, \
        SM_CFG_W1(0x0001338cU), 0x44444444U, \
        SM_CFG_Z1(0x00013440U), \
        SM_CFG_Z1(0x00013444U), \
        SM_CFG_Z1(0x00013448U), \
        SM_CFG_Z1(0x0001344cU), \
        SM_CFG_Z1(0x00013580U), \
        SM_CFG_Z1(0x00013584U), \
        SM_CFG_Z1(0x00013588U), \
        SM_CFG_Z1(0x0001358cU), \
        SM_CFG_Z1(0x00013640U), \
        SM_CFG_Z1(0x00013644U), \
        SM_CFG_Z1(0x00013648U), \
        SM_CFG_Z1(0x0001364cU), \
        SM_CFG_Z1(0x00013780U), \
        SM_CFG_Z1(0x00013784U), \
        SM_CFG_Z1(0x00013788U), \
        SM_CFG_Z1(0x0001378cU), \
        SM_CFG_Z1(0x00013840U), \
        SM_CFG_Z1(0x00013844U), \
        SM_CFG_Z1(0x00013848U), \
        SM_CFG_Z1(0x0001384cU), \
        SM_CFG_Z1(0x00013980U), \
        SM_CFG_Z1(0x00013984U), \
        SM_CFG_Z1(0x00013988U), \
        SM_CFG_Z1(0x0001398cU), \
        SM_CFG_W1(0x00014024U), 0x6600U, \
        SM_CFG_Z1(0x00014240U), \
        SM_CFG_W1(0x00014244U), 0x0003C001U, \
        SM_CFG_Z1(0x0001424cU), \
        SM_CFG_Z1(0x00014254U), \
        SM_CFG_Z1(0x0001425cU), \
        SM_CFG_W1(0x00014940U), 0x00000001U, \
        SM_CFG_W1(0x00014944U), 0x0003C001U, \
        SM_CFG_Z1(0x0001494cU), \
        SM_CFG_Z1(0x00014954U), \
        SM_CFG_Z1(0x0001495cU), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_Z1(0x00012020U), \
        SM_CFG_W1(0x00014020U), 0x7700U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC C Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC C */
#define SM_TRDC_C_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB0000013U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00000840U), 0xB0000013U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x000008e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000900U), 0xB0000013U, \
        SM_CFG_W1(0x00000920U), 0xB0000013U, \
        SM_CFG_W1(0x00000940U), 0xB0000013U, \
        SM_CFG_W1(0x00000960U), 0xB0000013U, \
        SM_CFG_W1(0x00000980U), 0xB0000013U, \
        SM_CFG_W1(0x000009a0U), 0xB0000013U, \
        SM_CFG_W1(0x000009c0U), 0xB0000013U, \
        SM_CFG_W1(0x000009e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000a00U), 0xB0000013U, \
        SM_CFG_W1(0x00000a20U), 0xB0000013U, \
        SM_CFG_W1(0x00000a40U), 0xB0000013U, \
        SM_CFG_W1(0x00000a60U), 0xB0000013U, \
        SM_CFG_W1(0x00000a80U), 0xB0000013U, \
        SM_CFG_W1(0x00000aa0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ac0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ae0U), 0xB0000013U, \
        SM_CFG_W1(0x00000b00U), 0xB0000013U, \
        SM_CFG_W1(0x00000b20U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010040U), 0x00003000U, \
        SM_CFG_W1(0x00010240U), 0x00000900U, \
        SM_CFG_W1(0x00010440U), 0x00330000U, \
        SM_CFG_W1(0x00010640U), 0x99000090U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010648U), 0x99999999U, \
        SM_CFG_W1(0x0001064cU), 0x09999999U, \
        SM_CFG_W1(0x00010650U), 0x99999999U, \
        SM_CFG_W1(0x00010654U), 0x99999999U, \
        SM_CFG_W1(0x00010658U), 0x00000999U, \
        SM_CFG_Z1(0x00010840U), \
        SM_CFG_Z1(0x00010a40U), \
        SM_CFG_Z1(0x00010c40U), \
        SM_CFG_Z1(0x00010e40U), \
        SM_CFG_W1(0x00011040U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011248U), 0x33333333U, \
        SM_CFG_W1(0x0001124cU), 0x03333333U, \
        SM_CFG_W1(0x00011250U), 0x33333333U, \
        SM_CFG_W1(0x00011254U), 0x33333333U, \
        SM_CFG_W1(0x00011258U), 0x00000333U, \
        SM_CFG_Z1(0x00011440U), \
        SM_CFG_Z1(0x00011640U), \
        SM_CFG_Z1(0x00011840U), \
        SM_CFG_Z1(0x00011a40U), \
        SM_CFG_Z1(0x00011c40U), \
        SM_CFG_Z1(0x00011e40U), \
        SM_CFG_W1(0x00012024U), 0x6666U, \
        SM_CFG_W1(0x00012028U), 0x7777U, \
        SM_CFG_W1(0x0001202cU), 0x6600U, \
        SM_CFG_W1(0x00012440U), 0x00000003U, \
        SM_CFG_W1(0x00013240U), 0x00000003U, \
        SM_CFG_W1(0x00014024U), 0x6666U, \
        SM_CFG_W1(0x00014028U), 0x7777U, \
        SM_CFG_W1(0x0001402cU), 0x6600U, \
        SM_CFG_W1(0x00014640U), 0x00000009U, \
        SM_CFG_W1(0x00015240U), 0x00000003U, \
        SM_CFG_W1(0x00016024U), 0x6600U, \
        SM_CFG_W1(0x00016340U), 0x01000000U, \
        SM_CFG_W1(0x00016344U), 0x01014011U, \
        SM_CFG_Z1(0x0001634cU), \
        SM_CFG_W1(0x00016940U), 0x01000001U, \
        SM_CFG_W1(0x00016944U), 0x01014001U, \
        SM_CFG_Z1(0x0001694cU), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_Z1(0x00012020U), \
        SM_CFG_Z1(0x00014020U), \
        SM_CFG_W1(0x00016020U), 0x7777U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC D Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC D */
#define SM_TRDC_D_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB0000013U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00000840U), 0xB0000013U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x000008e0U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010040U), 0x00003000U, \
        SM_CFG_W1(0x00010180U), 0x00003000U, \
        SM_CFG_W1(0x00010240U), 0x00000900U, \
        SM_CFG_W1(0x00010380U), 0x00000900U, \
        SM_CFG_W1(0x00010440U), 0x00330000U, \
        SM_CFG_W1(0x0001045cU), 0x30000000U, \
        SM_CFG_W1(0x00010580U), 0x00330000U, \
        SM_CFG_W1(0x0001059cU), 0x30000000U, \
        SM_CFG_W1(0x00010640U), 0x90000090U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010648U), 0x00000009U, \
        SM_CFG_W1(0x00010658U), 0x00000009U, \
        SM_CFG_W1(0x00010780U), 0x90000090U, \
        SM_CFG_W1(0x00010784U), 0x99999999U, \
        SM_CFG_W1(0x00010788U), 0x00000009U, \
        SM_CFG_W1(0x00010798U), 0x00000009U, \
        SM_CFG_W1(0x000107a8U), 0x99999999U, \
        SM_CFG_W1(0x000107acU), 0x99999999U, \
        SM_CFG_W1(0x000107b0U), 0x99999999U, \
        SM_CFG_W1(0x000107b4U), 0x99999999U, \
        SM_CFG_W1(0x000107b8U), 0x99999999U, \
        SM_CFG_W1(0x000107bcU), 0x99999999U, \
        SM_CFG_W1(0x000107c0U), 0x99999999U, \
        SM_CFG_W1(0x000107c4U), 0x99999999U, \
        SM_CFG_W1(0x000107d0U), 0x99999999U, \
        SM_CFG_W1(0x000107d4U), 0x99999999U, \
        SM_CFG_W1(0x000107d8U), 0x99999999U, \
        SM_CFG_W1(0x000107dcU), 0x99999999U, \
        SM_CFG_W1(0x000107e0U), 0x99999999U, \
        SM_CFG_W1(0x000107e4U), 0x99999999U, \
        SM_CFG_W1(0x000107e8U), 0x99999999U, \
        SM_CFG_W1(0x000107ecU), 0x99999999U, \
        SM_CFG_Z1(0x00010840U), \
        SM_CFG_Z1(0x00010980U), \
        SM_CFG_Z1(0x00010a40U), \
        SM_CFG_Z1(0x00010b80U), \
        SM_CFG_Z1(0x00010c40U), \
        SM_CFG_Z1(0x00010d80U), \
        SM_CFG_Z1(0x00010e40U), \
        SM_CFG_Z1(0x00010f80U), \
        SM_CFG_W1(0x00011040U), 0x00000009U, \
        SM_CFG_W1(0x00011180U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x30333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011248U), 0x00000003U, \
        SM_CFG_W1(0x00011258U), 0x00000003U, \
        SM_CFG_W1(0x0001125cU), 0x30000000U, \
        SM_CFG_W1(0x00011380U), 0x30333333U, \
        SM_CFG_W1(0x00011384U), 0x33333333U, \
        SM_CFG_W1(0x00011388U), 0x00000003U, \
        SM_CFG_W1(0x00011398U), 0x00000003U, \
        SM_CFG_W1(0x0001139cU), 0x30000000U, \
        SM_CFG_W1(0x000113a8U), 0x33333333U, \
        SM_CFG_W1(0x000113acU), 0x33333333U, \
        SM_CFG_W1(0x000113b0U), 0x33333333U, \
        SM_CFG_W1(0x000113b4U), 0x33333333U, \
        SM_CFG_W1(0x000113b8U), 0x33333333U, \
        SM_CFG_W1(0x000113bcU), 0x33333333U, \
        SM_CFG_W1(0x000113c0U), 0x33333333U, \
        SM_CFG_W1(0x000113c4U), 0x33333333U, \
        SM_CFG_W1(0x000113d0U), 0x33333333U, \
        SM_CFG_W1(0x000113d4U), 0x33333333U, \
        SM_CFG_W1(0x000113d8U), 0x33333333U, \
        SM_CFG_W1(0x000113dcU), 0x33333333U, \
        SM_CFG_W1(0x000113e0U), 0x33333333U, \
        SM_CFG_W1(0x000113e4U), 0x33333333U, \
        SM_CFG_W1(0x000113e8U), 0x33333333U, \
        SM_CFG_W1(0x000113ecU), 0x33333333U, \
        SM_CFG_Z1(0x00011440U), \
        SM_CFG_Z1(0x00011580U), \
        SM_CFG_Z1(0x00011640U), \
        SM_CFG_Z1(0x00011780U), \
        SM_CFG_Z1(0x00011840U), \
        SM_CFG_Z1(0x00011980U), \
        SM_CFG_Z1(0x00011a40U), \
        SM_CFG_Z1(0x00011b80U), \
        SM_CFG_Z1(0x00011c40U), \
        SM_CFG_Z1(0x00011d80U), \
        SM_CFG_Z1(0x00011e40U), \
        SM_CFG_Z1(0x00011f80U), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC E Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC E */
#define SM_TRDC_E_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB8000013U, \
        SM_CFG_W1(0x00000820U), 0xB8400013U, \
        SM_CFG_W1(0x00000840U), 0xB8800013U, \
        SM_CFG_W1(0x00000860U), 0xB8C00013U, \
        SM_CFG_W1(0x00000880U), 0xB9000013U, \
        SM_CFG_W1(0x000008a0U), 0xB9400013U, \
        SM_CFG_W1(0x000008c0U), 0xB9800013U, \
        SM_CFG_W1(0x000008e0U), 0xB9C00013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x000101a8U), 0x00003000U, \
        SM_CFG_W1(0x000103a8U), 0x00000900U, \
        SM_CFG_W1(0x000105a8U), 0x00330000U, \
        SM_CFG_W1(0x00010640U), 0x99999999U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010648U), 0x99999999U, \
        SM_CFG_W1(0x0001064cU), 0x99999999U, \
        SM_CFG_W1(0x00010780U), 0x99999999U, \
        SM_CFG_W1(0x000107a8U), 0x00000090U, \
        SM_CFG_W1(0x000107acU), 0x00009909U, \
        SM_CFG_Z1(0x000109a8U), \
        SM_CFG_Z1(0x00010ba8U), \
        SM_CFG_Z1(0x00010da8U), \
        SM_CFG_Z1(0x00010fa8U), \
        SM_CFG_W1(0x000111a8U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011248U), 0x33333333U, \
        SM_CFG_W1(0x0001124cU), 0x33333333U, \
        SM_CFG_W1(0x00011380U), 0x33333333U, \
        SM_CFG_W1(0x000113a8U), 0x00333333U, \
        SM_CFG_W1(0x000113acU), 0x00003303U, \
        SM_CFG_Z1(0x000115a8U), \
        SM_CFG_Z1(0x000117a8U), \
        SM_CFG_Z1(0x000119a8U), \
        SM_CFG_Z1(0x00011ba8U), \
        SM_CFG_Z1(0x00011da8U), \
        SM_CFG_Z1(0x00011fa8U), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC G Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC G */
#define SM_TRDC_G_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB0000013U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010040U), 0x00003000U, \
        SM_CFG_W1(0x00010240U), 0x00000900U, \
        SM_CFG_W1(0x00010440U), 0x00330000U, \
        SM_CFG_W1(0x00010640U), 0x00000090U, \
        SM_CFG_Z1(0x00010840U), \
        SM_CFG_Z1(0x00010a40U), \
        SM_CFG_Z1(0x00010c40U), \
        SM_CFG_Z1(0x00010e40U), \
        SM_CFG_W1(0x00011040U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x00333333U, \
        SM_CFG_Z1(0x00011440U), \
        SM_CFG_Z1(0x00011640U), \
        SM_CFG_Z1(0x00011840U), \
        SM_CFG_Z1(0x00011a40U), \
        SM_CFG_Z1(0x00011c40U), \
        SM_CFG_Z1(0x00011e40U), \
        SM_CFG_W1(0x00012024U), 0x6600U, \
        SM_CFG_W1(0x00012340U), 0x4D900000U, \
        SM_CFG_W1(0x00012344U), 0x4DD7C011U, \
        SM_CFG_Z1(0x0001234cU), \
        SM_CFG_Z1(0x00012354U), \
        SM_CFG_Z1(0x0001235cU), \
        SM_CFG_W1(0x00012940U), 0x4D900001U, \
        SM_CFG_W1(0x00012944U), 0x4DD7C001U, \
        SM_CFG_Z1(0x0001294cU), \
        SM_CFG_Z1(0x00012954U), \
        SM_CFG_Z1(0x0001295cU), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_W1(0x00012020U), 0x6666U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC H Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC H */
#define SM_TRDC_H_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xA3800013U, \
        SM_CFG_W1(0x00000820U), 0xA3C00013U, \
        SM_CFG_W1(0x00000840U), 0xA4000013U, \
        SM_CFG_W1(0x00000860U), 0xA4400013U, \
        SM_CFG_W1(0x00000880U), 0xA4800013U, \
        SM_CFG_W1(0x000008a0U), 0xA4C00013U, \
        SM_CFG_W1(0x000008c0U), 0xA5000013U, \
        SM_CFG_W1(0x000008e0U), 0xA5400013U, \
        SM_CFG_W1(0x00000900U), 0xA5800013U, \
        SM_CFG_W1(0x00000920U), 0xA5C00013U, \
        SM_CFG_W1(0x00000940U), 0xA6000013U, \
        SM_CFG_W1(0x00000960U), 0xA6400013U, \
        SM_CFG_W1(0x00000980U), 0xA6800013U, \
        SM_CFG_W1(0x000009a0U), 0xA6C00013U, \
        SM_CFG_W1(0x000009c0U), 0xA7000013U, \
        SM_CFG_W1(0x000009e0U), 0xA7400013U, \
        SM_CFG_W1(0x00000a00U), 0xA7800013U, \
        SM_CFG_W1(0x00000a20U), 0xA7C00013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x000101a8U), 0x00003000U, \
        SM_CFG_W1(0x000103a8U), 0x00000900U, \
        SM_CFG_W1(0x000105a8U), 0x03330000U, \
        SM_CFG_W1(0x00010640U), 0x99999999U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010780U), 0x99999999U, \
        SM_CFG_W1(0x00010784U), 0x99999999U, \
        SM_CFG_W1(0x000107a8U), 0x00000090U, \
        SM_CFG_W1(0x000107d0U), 0x99999999U, \
        SM_CFG_W1(0x000107d4U), 0x99999999U, \
        SM_CFG_W1(0x000107d8U), 0x99999999U, \
        SM_CFG_Z1(0x000109a8U), \
        SM_CFG_Z1(0x00010ba8U), \
        SM_CFG_Z1(0x00010da8U), \
        SM_CFG_Z1(0x00010fa8U), \
        SM_CFG_W1(0x000111a8U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011380U), 0x33333333U, \
        SM_CFG_W1(0x00011384U), 0x33333333U, \
        SM_CFG_W1(0x000113a8U), 0x03333333U, \
        SM_CFG_W1(0x000113d0U), 0x33333333U, \
        SM_CFG_W1(0x000113d4U), 0x33333333U, \
        SM_CFG_W1(0x000113d8U), 0x33333333U, \
        SM_CFG_Z1(0x000115a8U), \
        SM_CFG_Z1(0x000117a8U), \
        SM_CFG_Z1(0x000119a8U), \
        SM_CFG_Z1(0x00011ba8U), \
        SM_CFG_Z1(0x00011da8U), \
        SM_CFG_Z1(0x00011fa8U), \
        SM_CFG_W1(0x00012024U), 0x6666U, \
        SM_CFG_W1(0x00012028U), 0x7777U, \
        SM_CFG_W1(0x0001202cU), 0x6600U, \
        SM_CFG_W1(0x00012640U), 0x00099999U, \
        SM_CFG_W1(0x00012780U), 0x00099999U, \
        SM_CFG_W1(0x000127a8U), 0x00099999U, \
        SM_CFG_W1(0x000127d0U), 0x00099999U, \
        SM_CFG_W1(0x00013240U), 0x00033333U, \
        SM_CFG_W1(0x00013380U), 0x00033333U, \
        SM_CFG_W1(0x000133a8U), 0x00033333U, \
        SM_CFG_W1(0x000133d0U), 0x00033333U, \
        SM_CFG_W1(0x00014024U), 0x6666U, \
        SM_CFG_W1(0x00014028U), 0x7777U, \
        SM_CFG_W1(0x0001402cU), 0x6600U, \
        SM_CFG_W1(0x00014640U), 0x99999999U, \
        SM_CFG_W1(0x00014644U), 0x99999999U, \
        SM_CFG_W1(0x00014648U), 0x99999999U, \
        SM_CFG_W1(0x00015240U), 0x33333333U, \
        SM_CFG_W1(0x00015244U), 0x33333333U, \
        SM_CFG_W1(0x00015248U), 0x33333333U, \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_Z1(0x00012020U), \
        SM_CFG_Z1(0x00014020U), \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC M Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC M */
#define SM_TRDC_M_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB0000013U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00000840U), 0xB00000A8U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB00000A9U, \
        SM_CFG_W1(0x000008c0U), 0xB00000A9U, \
        SM_CFG_W1(0x000008e0U), 0xB00000ACU, \
        SM_CFG_W1(0x00000900U), 0x90000003U, \
        SM_CFG_W1(0x00000920U), 0xB0000013U, \
        SM_CFG_W1(0x00000940U), 0xB0000013U, \
        SM_CFG_W1(0x00000960U), 0xB0000013U, \
        SM_CFG_W1(0x00000980U), 0xB0000013U, \
        SM_CFG_W1(0x000009a0U), 0xB0000013U, \
        SM_CFG_W1(0x000009c0U), 0xB0000013U, \
        SM_CFG_W1(0x000009e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000a00U), 0xB0000013U, \
        SM_CFG_W1(0x00000a20U), 0xB0000013U, \
        SM_CFG_W1(0x00000a40U), 0xB0000013U, \
        SM_CFG_W1(0x00000a60U), 0xB0000013U, \
        SM_CFG_W1(0x00000a80U), 0xB0000013U, \
        SM_CFG_W1(0x00000aa0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ac0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ae0U), 0xB0000013U, \
        SM_CFG_W1(0x00000b00U), 0xB0000013U, \
        SM_CFG_W1(0x00000b20U), 0xB0000013U, \
        SM_CFG_W1(0x00000b40U), 0xB0000013U, \
        SM_CFG_W1(0x00000b60U), 0xB0000013U, \
        SM_CFG_W1(0x00000b80U), 0xB0000013U, \
        SM_CFG_W1(0x00000ba0U), 0xB0000013U, \
        SM_CFG_W1(0x00000bc0U), 0xB0000013U, \
        SM_CFG_W1(0x00000be0U), 0xB0000013U, \
        SM_CFG_W1(0x00000c00U), 0xB0000013U, \
        SM_CFG_W1(0x00000c20U), 0xB0000013U, \
        SM_CFG_W1(0x00000c40U), 0xB0000013U, \
        SM_CFG_W1(0x00000c60U), 0xB0000013U, \
        SM_CFG_W1(0x00000c80U), 0xB0000013U, \
        SM_CFG_W1(0x00000ca0U), 0xB0000013U, \
        SM_CFG_W1(0x00000cc0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ce0U), 0xB0000013U, \
        SM_CFG_W1(0x00000d00U), 0xB0000013U, \
        SM_CFG_W1(0x00000d20U), 0xB0000013U, \
        SM_CFG_W1(0x00000d40U), 0xB0000013U, \
        SM_CFG_W1(0x00000d60U), 0xB00000ACU, \
        SM_CFG_W1(0x00000d80U), 0xB0000013U, \
        SM_CFG_W1(0x00000da0U), 0xB0000013U, \
        SM_CFG_W1(0x00000dc0U), 0xB0000013U, \
        SM_CFG_W1(0x00000de0U), 0xB0000013U, \
        SM_CFG_W1(0x00000e00U), 0xB0000013U, \
        SM_CFG_W1(0x00000e20U), 0xB0000013U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC N Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC N */
#define SM_TRDC_N_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0x90000003U, \
        SM_CFG_W1(0x00000804U), 0x90000003U, \
        SM_CFG_W1(0x00000808U), 0x90000003U, \
        SM_CFG_W1(0x0000080cU), 0x90000003U, \
        SM_CFG_W1(0x00000820U), 0x90000003U, \
        SM_CFG_W1(0x00000824U), 0x90000003U, \
        SM_CFG_W1(0x00000828U), 0x90000003U, \
        SM_CFG_W1(0x0000082cU), 0x90000003U, \
        SM_CFG_W1(0x00000840U), 0x90000003U, \
        SM_CFG_W1(0x00000844U), 0x90000003U, \
        SM_CFG_W1(0x00000848U), 0x90000003U, \
        SM_CFG_W1(0x0000084cU), 0x90000003U, \
        SM_CFG_W1(0x00000860U), 0x90000003U, \
        SM_CFG_W1(0x00000864U), 0x90000003U, \
        SM_CFG_W1(0x00000868U), 0x90000003U, \
        SM_CFG_W1(0x0000086cU), 0x90000003U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010040U), 0x00300000U, \
        SM_CFG_W1(0x00010180U), 0x00300000U, \
        SM_CFG_W1(0x000101a8U), 0x00003000U, \
        SM_CFG_W1(0x000101d0U), 0x00003000U, \
        SM_CFG_W1(0x00010240U), 0x00009000U, \
        SM_CFG_W1(0x00010380U), 0x00009000U, \
        SM_CFG_W1(0x000103a8U), 0x00000900U, \
        SM_CFG_W1(0x000103d0U), 0x00000900U, \
        SM_CFG_W1(0x00010440U), 0x33000333U, \
        SM_CFG_W1(0x00010444U), 0x00033303U, \
        SM_CFG_W1(0x00010450U), 0x30000000U, \
        SM_CFG_W1(0x00010580U), 0x33000333U, \
        SM_CFG_W1(0x00010584U), 0x00033303U, \
        SM_CFG_W1(0x00010590U), 0x30000000U, \
        SM_CFG_W1(0x000105a8U), 0x00030000U, \
        SM_CFG_W1(0x000105d0U), 0x00030000U, \
        SM_CFG_Z1(0x00010640U), \
        SM_CFG_Z1(0x00010780U), \
        SM_CFG_Z1(0x00010840U), \
        SM_CFG_Z1(0x00010980U), \
        SM_CFG_Z1(0x00010a40U), \
        SM_CFG_Z1(0x00010b80U), \
        SM_CFG_Z1(0x00010c40U), \
        SM_CFG_Z1(0x00010d80U), \
        SM_CFG_Z1(0x00010e40U), \
        SM_CFG_Z1(0x00010f80U), \
        SM_CFG_W1(0x00011040U), 0x00090000U, \
        SM_CFG_W1(0x00011180U), 0x00090000U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x00033303U, \
        SM_CFG_W1(0x00011250U), 0x30000000U, \
        SM_CFG_W1(0x00011380U), 0x33333333U, \
        SM_CFG_W1(0x00011384U), 0x00033303U, \
        SM_CFG_W1(0x00011390U), 0x30000000U, \
        SM_CFG_W1(0x000113a8U), 0x00033300U, \
        SM_CFG_W1(0x000113d0U), 0x00033300U, \
        SM_CFG_Z1(0x00011440U), \
        SM_CFG_Z1(0x00011580U), \
        SM_CFG_Z1(0x00011640U), \
        SM_CFG_Z1(0x00011780U), \
        SM_CFG_Z1(0x00011840U), \
        SM_CFG_Z1(0x00011980U), \
        SM_CFG_Z1(0x00011a40U), \
        SM_CFG_Z1(0x00011b80U), \
        SM_CFG_Z1(0x00011c40U), \
        SM_CFG_Z1(0x00011d80U), \
        SM_CFG_Z1(0x00011e40U), \
        SM_CFG_Z1(0x00011f80U), \
        SM_CFG_W1(0x00012024U), 0x6666U, \
        SM_CFG_W1(0x00012028U), 0x7777U, \
        SM_CFG_W1(0x0001202cU), 0x6600U, \
        SM_CFG_W1(0x00012440U), 0x33333333U, \
        SM_CFG_W1(0x00012444U), 0x33333333U, \
        SM_CFG_W1(0x00012448U), 0x00000333U, \
        SM_CFG_W1(0x00012580U), 0x33333333U, \
        SM_CFG_W1(0x00012584U), 0x33333333U, \
        SM_CFG_W1(0x00012588U), 0x00000333U, \
        SM_CFG_W1(0x00012640U), 0x99999999U, \
        SM_CFG_W1(0x00012644U), 0x99999999U, \
        SM_CFG_W1(0x00012648U), 0x00000999U, \
        SM_CFG_W1(0x00012780U), 0x99999999U, \
        SM_CFG_W1(0x00012784U), 0x99999999U, \
        SM_CFG_W1(0x00012788U), 0x00000999U, \
        SM_CFG_W1(0x00013240U), 0x33333333U, \
        SM_CFG_W1(0x00013244U), 0x33333333U, \
        SM_CFG_W1(0x00013248U), 0x00000333U, \
        SM_CFG_W1(0x00013380U), 0x33333333U, \
        SM_CFG_W1(0x00013384U), 0x33333333U, \
        SM_CFG_W1(0x00013388U), 0x00000333U, \
        SM_CFG_W1(0x00014024U), 0x6666U, \
        SM_CFG_W1(0x00014028U), 0x7777U, \
        SM_CFG_W1(0x0001402cU), 0x6600U, \
        SM_CFG_W1(0x00014040U), 0x99999999U, \
        SM_CFG_W1(0x00014044U), 0x99999999U, \
        SM_CFG_W1(0x00014048U), 0x00999999U, \
        SM_CFG_W1(0x00014180U), 0x99999999U, \
        SM_CFG_W1(0x00014184U), 0x99999999U, \
        SM_CFG_W1(0x00014188U), 0x00999999U, \
        SM_CFG_Z1(0x00014440U), \
        SM_CFG_Z1(0x00014444U), \
        SM_CFG_Z1(0x00014448U), \
        SM_CFG_Z1(0x00014580U), \
        SM_CFG_Z1(0x00014584U), \
        SM_CFG_Z1(0x00014588U), \
        SM_CFG_W1(0x00014640U), 0xAAAAAAAAU, \
        SM_CFG_W1(0x00014644U), 0xAAAAAAAAU, \
        SM_CFG_W1(0x00014648U), 0x00AAAAAAU, \
        SM_CFG_W1(0x00014780U), 0xAAAAAAAAU, \
        SM_CFG_W1(0x00014784U), 0xAAAAAAAAU, \
        SM_CFG_W1(0x00014788U), 0x00AAAAAAU, \
        SM_CFG_W1(0x000147a8U), 0x99999999U, \
        SM_CFG_W1(0x000147acU), 0x00000009U, \
        SM_CFG_W1(0x000147d0U), 0x99999999U, \
        SM_CFG_W1(0x000147d4U), 0x00000009U, \
        SM_CFG_Z1(0x00014840U), \
        SM_CFG_Z1(0x00014844U), \
        SM_CFG_Z1(0x00014848U), \
        SM_CFG_Z1(0x00014980U), \
        SM_CFG_Z1(0x00014984U), \
        SM_CFG_Z1(0x00014988U), \
        SM_CFG_Z1(0x00014a40U), \
        SM_CFG_Z1(0x00014a44U), \
        SM_CFG_Z1(0x00014a48U), \
        SM_CFG_Z1(0x00014b80U), \
        SM_CFG_Z1(0x00014b84U), \
        SM_CFG_Z1(0x00014b88U), \
        SM_CFG_Z1(0x00014c40U), \
        SM_CFG_Z1(0x00014c44U), \
        SM_CFG_Z1(0x00014c48U), \
        SM_CFG_Z1(0x00014d80U), \
        SM_CFG_Z1(0x00014d84U), \
        SM_CFG_Z1(0x00014d88U), \
        SM_CFG_Z1(0x00014e40U), \
        SM_CFG_Z1(0x00014e44U), \
        SM_CFG_Z1(0x00014e48U), \
        SM_CFG_Z1(0x00014f80U), \
        SM_CFG_Z1(0x00014f84U), \
        SM_CFG_Z1(0x00014f88U), \
        SM_CFG_W1(0x00015240U), 0x33333333U, \
        SM_CFG_W1(0x00015244U), 0x33333333U, \
        SM_CFG_W1(0x00015248U), 0x00333333U, \
        SM_CFG_W1(0x00015380U), 0x33333333U, \
        SM_CFG_W1(0x00015384U), 0x33333333U, \
        SM_CFG_W1(0x00015388U), 0x00333333U, \
        SM_CFG_W1(0x000153a8U), 0x33333333U, \
        SM_CFG_W1(0x000153acU), 0x00000003U, \
        SM_CFG_W1(0x000153d0U), 0x33333333U, \
        SM_CFG_W1(0x000153d4U), 0x00000003U, \
        SM_CFG_Z1(0x00015440U), \
        SM_CFG_Z1(0x00015444U), \
        SM_CFG_Z1(0x00015448U), \
        SM_CFG_Z1(0x00015580U), \
        SM_CFG_Z1(0x00015584U), \
        SM_CFG_Z1(0x00015588U), \
        SM_CFG_Z1(0x00015640U), \
        SM_CFG_Z1(0x00015644U), \
        SM_CFG_Z1(0x00015648U), \
        SM_CFG_Z1(0x00015780U), \
        SM_CFG_Z1(0x00015784U), \
        SM_CFG_Z1(0x00015788U), \
        SM_CFG_W1(0x00016024U), 0x6666U, \
        SM_CFG_W1(0x00016028U), 0x7777U, \
        SM_CFG_W1(0x0001602cU), 0x6600U, \
        SM_CFG_W1(0x000161a8U), 0x00003000U, \
        SM_CFG_W1(0x000161d0U), 0x00003000U, \
        SM_CFG_W1(0x00016240U), 0x00000900U, \
        SM_CFG_W1(0x00016380U), 0x00000900U, \
        SM_CFG_W1(0x000163a8U), 0x00000900U, \
        SM_CFG_W1(0x000163d0U), 0x00000900U, \
        SM_CFG_W1(0x00016440U), 0x33300030U, \
        SM_CFG_W1(0x00016444U), 0x00000033U, \
        SM_CFG_W1(0x00016580U), 0x33300030U, \
        SM_CFG_W1(0x00016584U), 0x00000033U, \
        SM_CFG_W1(0x000165a8U), 0x33300000U, \
        SM_CFG_W1(0x000165d0U), 0x33300000U, \
        SM_CFG_W1(0x00016640U), 0x00000090U, \
        SM_CFG_W1(0x00016644U), 0x00000099U, \
        SM_CFG_W1(0x00016780U), 0x00000090U, \
        SM_CFG_W1(0x00016784U), 0x00000099U, \
        SM_CFG_W1(0x000167a8U), 0x00000090U, \
        SM_CFG_W1(0x000167d0U), 0x00000090U, \
        SM_CFG_W1(0x00017040U), 0x00000009U, \
        SM_CFG_W1(0x00017180U), 0x00000009U, \
        SM_CFG_W1(0x000171a8U), 0x00000009U, \
        SM_CFG_W1(0x000171d0U), 0x00000009U, \
        SM_CFG_W1(0x00017240U), 0x33300333U, \
        SM_CFG_W1(0x00017244U), 0x00000033U, \
        SM_CFG_W1(0x00017380U), 0x33300333U, \
        SM_CFG_W1(0x00017384U), 0x00000033U, \
        SM_CFG_W1(0x000173a8U), 0x33303333U, \
        SM_CFG_W1(0x000173d0U), 0x33303333U, \
        SM_CFG_W1(0x00018024U), 0x6666U, \
        SM_CFG_W1(0x00018028U), 0x7777U, \
        SM_CFG_W1(0x0001802cU), 0x6600U, \
        SM_CFG_W1(0x00018440U), 0x33333333U, \
        SM_CFG_W1(0x00018580U), 0x33333333U, \
        SM_CFG_W1(0x00018640U), 0x99999999U, \
        SM_CFG_W1(0x00018780U), 0x99999999U, \
        SM_CFG_W1(0x00019240U), 0x33333333U, \
        SM_CFG_W1(0x00019380U), 0x33333333U, \
        SM_CFG_W1(0x0001a024U), 0x7777U, \
        SM_CFG_W1(0x0001a028U), 0x6600U, \
        SM_CFG_W1(0x0001a040U), 0x08000000U, \
        SM_CFG_W1(0x0001a044U), 0xFFFFFC11U, \
        SM_CFG_Z1(0x0001a04cU), \
        SM_CFG_Z1(0x0001a054U), \
        SM_CFG_Z1(0x0001a05cU), \
        SM_CFG_Z1(0x0001a244U), \
        SM_CFG_Z1(0x0001a24cU), \
        SM_CFG_Z1(0x0001a254U), \
        SM_CFG_Z1(0x0001a25cU), \
        SM_CFG_W1(0x0001a340U), 0x08000001U, \
        SM_CFG_W1(0x0001a344U), 0x87FFFC11U, \
        SM_CFG_Z1(0x0001a34cU), \
        SM_CFG_Z1(0x0001a354U), \
        SM_CFG_Z1(0x0001a35cU), \
        SM_CFG_Z1(0x0001a444U), \
        SM_CFG_Z1(0x0001a44cU), \
        SM_CFG_Z1(0x0001a454U), \
        SM_CFG_Z1(0x0001a45cU), \
        SM_CFG_Z1(0x0001a544U), \
        SM_CFG_Z1(0x0001a54cU), \
        SM_CFG_Z1(0x0001a554U), \
        SM_CFG_Z1(0x0001a55cU), \
        SM_CFG_Z1(0x0001a644U), \
        SM_CFG_Z1(0x0001a64cU), \
        SM_CFG_Z1(0x0001a654U), \
        SM_CFG_Z1(0x0001a65cU), \
        SM_CFG_Z1(0x0001a744U), \
        SM_CFG_Z1(0x0001a74cU), \
        SM_CFG_Z1(0x0001a754U), \
        SM_CFG_Z1(0x0001a75cU), \
        SM_CFG_Z1(0x0001a844U), \
        SM_CFG_Z1(0x0001a84cU), \
        SM_CFG_Z1(0x0001a854U), \
        SM_CFG_Z1(0x0001a85cU), \
        SM_CFG_W1(0x0001a940U), 0x08000002U, \
        SM_CFG_W1(0x0001a944U), 0x87FFFC01U, \
        SM_CFG_W1(0x0001a948U), 0x08000002U, \
        SM_CFG_W1(0x0001a94cU), 0xFFFFFC01U, \
        SM_CFG_Z1(0x0001a954U), \
        SM_CFG_Z1(0x0001a95cU), \
        SM_CFG_Z1(0x0001aa44U), \
        SM_CFG_Z1(0x0001aa4cU), \
        SM_CFG_Z1(0x0001aa54U), \
        SM_CFG_Z1(0x0001aa5cU), \
        SM_CFG_Z1(0x0001ab44U), \
        SM_CFG_Z1(0x0001ab4cU), \
        SM_CFG_Z1(0x0001ab54U), \
        SM_CFG_Z1(0x0001ab5cU), \
        SM_CFG_Z1(0x0001ac44U), \
        SM_CFG_Z1(0x0001ac4cU), \
        SM_CFG_Z1(0x0001ac54U), \
        SM_CFG_Z1(0x0001ac5cU), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_Z1(0x00012020U), \
        SM_CFG_Z1(0x00014020U), \
        SM_CFG_Z1(0x00016020U), \
        SM_CFG_Z1(0x00018020U), \
        SM_CFG_W1(0x0001a020U), 0x6666U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC V Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC V */
#define SM_TRDC_V_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0xB0000013U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00000840U), 0xB0000013U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x000008e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000900U), 0xB0000013U, \
        SM_CFG_W1(0x00000920U), 0xB0000013U, \
        SM_CFG_W1(0x00000940U), 0xB0000013U, \
        SM_CFG_W1(0x00000960U), 0xB0000013U, \
        SM_CFG_W1(0x00000980U), 0xB0000013U, \
        SM_CFG_W1(0x000009a0U), 0xB0000013U, \
        SM_CFG_W1(0x000009c0U), 0xB0000013U, \
        SM_CFG_W1(0x000009e0U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_W1(0x00010040U), 0x00003000U, \
        SM_CFG_W1(0x00010180U), 0x00003000U, \
        SM_CFG_W1(0x00010240U), 0x00000900U, \
        SM_CFG_W1(0x00010380U), 0x00000900U, \
        SM_CFG_W1(0x00010440U), 0x00330000U, \
        SM_CFG_W1(0x00010450U), 0x00000003U, \
        SM_CFG_W1(0x00010580U), 0x00330000U, \
        SM_CFG_W1(0x00010590U), 0x00000003U, \
        SM_CFG_W1(0x00010640U), 0x00000090U, \
        SM_CFG_W1(0x00010644U), 0x00099999U, \
        SM_CFG_W1(0x00010648U), 0x99999999U, \
        SM_CFG_W1(0x0001064cU), 0x00000099U, \
        SM_CFG_W1(0x00010780U), 0x00000090U, \
        SM_CFG_W1(0x00010784U), 0x00099999U, \
        SM_CFG_W1(0x00010788U), 0x99999999U, \
        SM_CFG_W1(0x0001078cU), 0x00000099U, \
        SM_CFG_Z1(0x00010840U), \
        SM_CFG_Z1(0x00010980U), \
        SM_CFG_Z1(0x00010a40U), \
        SM_CFG_Z1(0x00010b80U), \
        SM_CFG_Z1(0x00010c40U), \
        SM_CFG_Z1(0x00010d80U), \
        SM_CFG_Z1(0x00010e40U), \
        SM_CFG_Z1(0x00010f80U), \
        SM_CFG_W1(0x00011040U), 0x00000009U, \
        SM_CFG_W1(0x00011180U), 0x00000009U, \
        SM_CFG_W1(0x00011240U), 0x00333333U, \
        SM_CFG_W1(0x00011244U), 0x00033333U, \
        SM_CFG_W1(0x00011248U), 0x33333333U, \
        SM_CFG_W1(0x0001124cU), 0x00000033U, \
        SM_CFG_W1(0x00011250U), 0x00000003U, \
        SM_CFG_W1(0x00011380U), 0x00333333U, \
        SM_CFG_W1(0x00011384U), 0x00033333U, \
        SM_CFG_W1(0x00011388U), 0x33333333U, \
        SM_CFG_W1(0x0001138cU), 0x00000033U, \
        SM_CFG_W1(0x00011390U), 0x00000003U, \
        SM_CFG_Z1(0x00011440U), \
        SM_CFG_Z1(0x00011580U), \
        SM_CFG_Z1(0x00011640U), \
        SM_CFG_Z1(0x00011780U), \
        SM_CFG_Z1(0x00011840U), \
        SM_CFG_Z1(0x00011980U), \
        SM_CFG_Z1(0x00011a40U), \
        SM_CFG_Z1(0x00011b80U), \
        SM_CFG_Z1(0x00011c40U), \
        SM_CFG_Z1(0x00011d80U), \
        SM_CFG_Z1(0x00011e40U), \
        SM_CFG_Z1(0x00011f80U), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

/*--------------------------------------------------------------------------*/
/* TRDC W Config                                                            */
/*--------------------------------------------------------------------------*/

/*! Config for TRDC W */
#define SM_TRDC_W_CONFIG \
    { \
        SM_CFG_W1(0x00000800U), 0x90000003U, \
        SM_CFG_W1(0x00000820U), 0xB0000013U, \
        SM_CFG_W1(0x00000840U), 0xB0000013U, \
        SM_CFG_W1(0x00000860U), 0xB0000013U, \
        SM_CFG_W1(0x00000880U), 0xB0000013U, \
        SM_CFG_W1(0x000008a0U), 0xB0000013U, \
        SM_CFG_W1(0x000008c0U), 0xB0000013U, \
        SM_CFG_W1(0x000008e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000900U), 0xB0000013U, \
        SM_CFG_W1(0x00000920U), 0xB0000013U, \
        SM_CFG_W1(0x00000940U), 0xB0000013U, \
        SM_CFG_W1(0x00000960U), 0xB0000013U, \
        SM_CFG_W1(0x00000980U), 0xB0000013U, \
        SM_CFG_W1(0x000009a0U), 0xB0000013U, \
        SM_CFG_W1(0x000009c0U), 0xB0000013U, \
        SM_CFG_W1(0x000009e0U), 0xB0000013U, \
        SM_CFG_W1(0x00000a00U), 0xB0000013U, \
        SM_CFG_W1(0x00000a20U), 0xB0000013U, \
        SM_CFG_W1(0x00000a40U), 0xB0000013U, \
        SM_CFG_W1(0x00000a60U), 0xB0000013U, \
        SM_CFG_W1(0x00000a80U), 0xB0000013U, \
        SM_CFG_W1(0x00000aa0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ac0U), 0xB0000013U, \
        SM_CFG_W1(0x00000ae0U), 0xB0000013U, \
        SM_CFG_W1(0x00000b00U), 0xB0000013U, \
        SM_CFG_W1(0x00000b20U), 0xB0000013U, \
        SM_CFG_W1(0x00000b40U), 0xB0000013U, \
        SM_CFG_W1(0x00000b60U), 0xB0000013U, \
        SM_CFG_W1(0x00000b80U), 0xB0000013U, \
        SM_CFG_W1(0x00000ba0U), 0xB0000013U, \
        SM_CFG_W1(0x00000bc0U), 0xB0000013U, \
        SM_CFG_W1(0x00000be0U), 0xB0000013U, \
        SM_CFG_W1(0x00000c00U), 0xB0000013U, \
        SM_CFG_W1(0x00000c20U), 0xB0000013U, \
        SM_CFG_W1(0x00000c40U), 0xB0000013U, \
        SM_CFG_W1(0x00010024U), 0x6666U, \
        SM_CFG_W1(0x00010028U), 0x7777U, \
        SM_CFG_W1(0x0001002cU), 0x6600U, \
        SM_CFG_Z1(0x00010060U), \
        SM_CFG_W1(0x00010070U), 0x00003000U, \
        SM_CFG_Z1(0x00010260U), \
        SM_CFG_W1(0x00010270U), 0x00000090U, \
        SM_CFG_W1(0x00010460U), 0x33000300U, \
        SM_CFG_W1(0x00010478U), 0x33000000U, \
        SM_CFG_W1(0x0001047cU), 0x00003333U, \
        SM_CFG_W1(0x000105d0U), 0x33333333U, \
        SM_CFG_W1(0x000105d4U), 0x33333333U, \
        SM_CFG_W1(0x000105d8U), 0x00000003U, \
        SM_CFG_W1(0x00010640U), 0x99999999U, \
        SM_CFG_W1(0x00010644U), 0x99999999U, \
        SM_CFG_W1(0x00010648U), 0x99999999U, \
        SM_CFG_W1(0x0001064cU), 0x99999999U, \
        SM_CFG_W1(0x00010650U), 0x99999999U, \
        SM_CFG_W1(0x00010654U), 0x99999999U, \
        SM_CFG_W1(0x00010658U), 0x99999999U, \
        SM_CFG_W1(0x0001065cU), 0x99999999U, \
        SM_CFG_W1(0x00010660U), 0x00999099U, \
        SM_CFG_W1(0x00010664U), 0x99999999U, \
        SM_CFG_W1(0x00010668U), 0x99999999U, \
        SM_CFG_W1(0x0001066cU), 0x09999999U, \
        SM_CFG_W1(0x00010670U), 0x99900009U, \
        SM_CFG_W1(0x00010674U), 0x99999999U, \
        SM_CFG_W1(0x00010678U), 0x00099999U, \
        SM_CFG_W1(0x0001067cU), 0x00990000U, \
        SM_CFG_W1(0x00010780U), 0x00000009U, \
        SM_CFG_W1(0x000107a8U), 0x00000009U, \
        SM_CFG_Z1(0x00010860U), \
        SM_CFG_Z1(0x00010a60U), \
        SM_CFG_Z1(0x00010c60U), \
        SM_CFG_Z1(0x00010e60U), \
        SM_CFG_Z1(0x00011060U), \
        SM_CFG_W1(0x00011070U), 0x00000900U, \
        SM_CFG_W1(0x00011240U), 0x33333333U, \
        SM_CFG_W1(0x00011244U), 0x33333333U, \
        SM_CFG_W1(0x00011248U), 0x33333333U, \
        SM_CFG_W1(0x0001124cU), 0x33333333U, \
        SM_CFG_W1(0x00011250U), 0x33333333U, \
        SM_CFG_W1(0x00011254U), 0x33333333U, \
        SM_CFG_W1(0x00011258U), 0x33333333U, \
        SM_CFG_W1(0x0001125cU), 0x33333333U, \
        SM_CFG_W1(0x00011260U), 0x33333333U, \
        SM_CFG_W1(0x00011264U), 0x33333333U, \
        SM_CFG_W1(0x00011268U), 0x33333333U, \
        SM_CFG_W1(0x0001126cU), 0x03333333U, \
        SM_CFG_W1(0x00011270U), 0x33303333U, \
        SM_CFG_W1(0x00011274U), 0x33333333U, \
        SM_CFG_W1(0x00011278U), 0x33033333U, \
        SM_CFG_W1(0x0001127cU), 0x00333333U, \
        SM_CFG_W1(0x00011380U), 0x00000003U, \
        SM_CFG_W1(0x000113a8U), 0x00000003U, \
        SM_CFG_W1(0x000113d0U), 0x33333333U, \
        SM_CFG_W1(0x000113d4U), 0x33333333U, \
        SM_CFG_W1(0x000113d8U), 0x00000003U, \
        SM_CFG_Z1(0x00011460U), \
        SM_CFG_Z1(0x00011660U), \
        SM_CFG_Z1(0x00011860U), \
        SM_CFG_Z1(0x00011a60U), \
        SM_CFG_Z1(0x00011c60U), \
        SM_CFG_Z1(0x00011e60U), \
        SM_CFG_W1(0x00012024U), 0x6666U, \
        SM_CFG_W1(0x00012028U), 0x7777U, \
        SM_CFG_W1(0x0001202cU), 0x6600U, \
        SM_CFG_Z1(0x00012040U), \
        SM_CFG_W1(0x00012240U), 0x90000000U, \
        SM_CFG_W1(0x00012440U), 0x00003330U, \
        SM_CFG_W1(0x00012580U), 0x00000003U, \
        SM_CFG_W1(0x000125a8U), 0x00000003U, \
        SM_CFG_W1(0x00012640U), 0x09900000U, \
        SM_CFG_W1(0x00012644U), 0x00009900U, \
        SM_CFG_W1(0x000127d0U), 0x00000099U, \
        SM_CFG_Z1(0x00012840U), \
        SM_CFG_Z1(0x00012a40U), \
        SM_CFG_Z1(0x00012c40U), \
        SM_CFG_Z1(0x00012e40U), \
        SM_CFG_Z1(0x00013040U), \
        SM_CFG_W1(0x00013240U), 0x33303330U, \
        SM_CFG_W1(0x00013244U), 0x00003300U, \
        SM_CFG_W1(0x00013380U), 0x00000003U, \
        SM_CFG_W1(0x000133a8U), 0x00000003U, \
        SM_CFG_W1(0x000133d0U), 0x00000033U, \
        SM_CFG_Z1(0x00013440U), \
        SM_CFG_Z1(0x00013640U), \
        SM_CFG_Z1(0x00013840U), \
        SM_CFG_Z1(0x00013a40U), \
        SM_CFG_Z1(0x00013c40U), \
        SM_CFG_Z1(0x00013e40U), \
        SM_CFG_W1(0x00014024U), 0x6666U, \
        SM_CFG_W1(0x00014028U), 0x7777U, \
        SM_CFG_W1(0x0001402cU), 0x6600U, \
        SM_CFG_W1(0x00014640U), 0x00999999U, \
        SM_CFG_W1(0x00014780U), 0x00999999U, \
        SM_CFG_W1(0x00015240U), 0x00333333U, \
        SM_CFG_W1(0x00015380U), 0x00333333U, \
        SM_CFG_W1(0x00017024U), 0x6600U, \
        SM_CFG_Z1(0x00017244U), \
        SM_CFG_Z1(0x0001724cU), \
        SM_CFG_Z1(0x00017254U), \
        SM_CFG_Z1(0x0001725cU), \
        SM_CFG_Z1(0x00017340U), \
        SM_CFG_W1(0x00017344U), 0xFFFFC011U, \
        SM_CFG_Z1(0x0001734cU), \
        SM_CFG_Z1(0x00017354U), \
        SM_CFG_Z1(0x0001735cU), \
        SM_CFG_Z1(0x00017444U), \
        SM_CFG_Z1(0x0001744cU), \
        SM_CFG_Z1(0x00017454U), \
        SM_CFG_Z1(0x0001745cU), \
        SM_CFG_Z1(0x00017544U), \
        SM_CFG_Z1(0x0001754cU), \
        SM_CFG_Z1(0x00017554U), \
        SM_CFG_Z1(0x0001755cU), \
        SM_CFG_Z1(0x00017644U), \
        SM_CFG_Z1(0x0001764cU), \
        SM_CFG_Z1(0x00017654U), \
        SM_CFG_Z1(0x0001765cU), \
        SM_CFG_Z1(0x00017744U), \
        SM_CFG_Z1(0x0001774cU), \
        SM_CFG_Z1(0x00017754U), \
        SM_CFG_Z1(0x0001775cU), \
        SM_CFG_Z1(0x00017844U), \
        SM_CFG_Z1(0x0001784cU), \
        SM_CFG_Z1(0x00017854U), \
        SM_CFG_Z1(0x0001785cU), \
        SM_CFG_W1(0x00017940U), 0x00000001U, \
        SM_CFG_W1(0x00017944U), 0xFFFFC001U, \
        SM_CFG_Z1(0x0001794cU), \
        SM_CFG_Z1(0x00017954U), \
        SM_CFG_Z1(0x0001795cU), \
        SM_CFG_Z1(0x00017a44U), \
        SM_CFG_Z1(0x00017a4cU), \
        SM_CFG_Z1(0x00017a54U), \
        SM_CFG_Z1(0x00017a5cU), \
        SM_CFG_Z1(0x00017b44U), \
        SM_CFG_Z1(0x00017b4cU), \
        SM_CFG_Z1(0x00017b54U), \
        SM_CFG_Z1(0x00017b5cU), \
        SM_CFG_Z1(0x00017c44U), \
        SM_CFG_Z1(0x00017c4cU), \
        SM_CFG_Z1(0x00017c54U), \
        SM_CFG_Z1(0x00017c5cU), \
        SM_CFG_W1(0x00018024U), 0x6666U, \
        SM_CFG_W1(0x00018040U), 0x4A030000U, \
        SM_CFG_W1(0x00018044U), 0x4A03C001U, \
        SM_CFG_Z1(0x0001804cU), \
        SM_CFG_Z1(0x00018054U), \
        SM_CFG_Z1(0x0001805cU), \
        SM_CFG_W1(0x00018140U), 0x4A020001U, \
        SM_CFG_W1(0x00018144U), 0x4A02C011U, \
        SM_CFG_Z1(0x0001814cU), \
        SM_CFG_Z1(0x00018154U), \
        SM_CFG_Z1(0x0001815cU), \
        SM_CFG_W1(0x00018240U), 0x4A000000U, \
        SM_CFG_W1(0x00018244U), 0x4A0AC001U, \
        SM_CFG_Z1(0x0001824cU), \
        SM_CFG_Z1(0x00018254U), \
        SM_CFG_Z1(0x0001825cU), \
        SM_CFG_W1(0x00018340U), 0x4A000001U, \
        SM_CFG_W1(0x00018344U), 0x4A0AC011U, \
        SM_CFG_W1(0x00018348U), 0x20380001U, \
        SM_CFG_W1(0x0001834cU), 0x2047C011U, \
        SM_CFG_Z1(0x00018354U), \
        SM_CFG_Z1(0x0001835cU), \
        SM_CFG_Z1(0x00018444U), \
        SM_CFG_Z1(0x0001844cU), \
        SM_CFG_Z1(0x00018454U), \
        SM_CFG_Z1(0x0001845cU), \
        SM_CFG_Z1(0x00018544U), \
        SM_CFG_Z1(0x0001854cU), \
        SM_CFG_Z1(0x00018554U), \
        SM_CFG_Z1(0x0001855cU), \
        SM_CFG_Z1(0x00018644U), \
        SM_CFG_Z1(0x0001864cU), \
        SM_CFG_Z1(0x00018654U), \
        SM_CFG_Z1(0x0001865cU), \
        SM_CFG_Z1(0x00018744U), \
        SM_CFG_Z1(0x0001874cU), \
        SM_CFG_Z1(0x00018754U), \
        SM_CFG_Z1(0x0001875cU), \
        SM_CFG_Z1(0x00018844U), \
        SM_CFG_Z1(0x0001884cU), \
        SM_CFG_Z1(0x00018854U), \
        SM_CFG_Z1(0x0001885cU), \
        SM_CFG_W1(0x00018940U), 0x4A000000U, \
        SM_CFG_W1(0x00018944U), 0x4A0AC001U, \
        SM_CFG_W1(0x00018948U), 0x4A000000U, \
        SM_CFG_W1(0x0001894cU), 0x4A0AC001U, \
        SM_CFG_W1(0x00018950U), 0x4A020000U, \
        SM_CFG_W1(0x00018954U), 0x4A02C001U, \
        SM_CFG_W1(0x00018958U), 0x4A030000U, \
        SM_CFG_W1(0x0001895cU), 0x4A03C001U, \
        SM_CFG_W1(0x00018960U), 0x20380000U, \
        SM_CFG_W1(0x00018964U), 0x2047C001U, \
        SM_CFG_Z1(0x00018a44U), \
        SM_CFG_Z1(0x00018a4cU), \
        SM_CFG_Z1(0x00018a54U), \
        SM_CFG_Z1(0x00018a5cU), \
        SM_CFG_Z1(0x00018b44U), \
        SM_CFG_Z1(0x00018b4cU), \
        SM_CFG_Z1(0x00018b54U), \
        SM_CFG_Z1(0x00018b5cU), \
        SM_CFG_Z1(0x00018c44U), \
        SM_CFG_Z1(0x00018c4cU), \
        SM_CFG_Z1(0x00018c54U), \
        SM_CFG_Z1(0x00018c5cU), \
        SM_CFG_Z1(0x00010020U), \
        SM_CFG_Z1(0x00012020U), \
        SM_CFG_Z1(0x00014020U), \
        SM_CFG_W1(0x00017020U), 0x7777U, \
        SM_CFG_W1(0x00018020U), 0x6600U, \
        SM_CFG_C1(0x00000000U), 0x0000C001U, \
        SM_CFG_END \
    }

#endif /* CONFIG_TRDC_H */

/** @} */

