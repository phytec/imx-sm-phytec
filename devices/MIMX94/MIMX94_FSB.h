/*
** ###################################################################
**     Processors:          MIMX94_cm33
**
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX94_cm33
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**
** ###################################################################
*/

/*!
 * @file MIMX94_FSB.h
 * @version
 * @date
 * @brief CMSIS Peripheral Access Layer for MIMX94_FSB
 *
 * CMSIS Peripheral Access Layer for MIMX94
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX94_FSB_H_)  /* Check if memory map has not been already included */
#define MIMX94_FSB_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FSB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FSB_Peripheral_Access_Layer FSB Peripheral Access Layer
 * @{
 */

/** FSB - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[0x8000];
  __IO uint32_t FUSE[8192];                     /**< Fuse Value Registers, offset: 0x8000 */
} FSB_Type;

/* FSB - Peripheral instance base addresses */
/** Peripheral FSB base address */
#define FSB_BASE                                (0x47510000u)
/** Peripheral FSB base pointer */
#define FSB                                     ((FSB_Type *)FSB_BASE)
/** Array initializer of FSB peripheral base addresses */
#define FSB_BASE_ADDRS                          { FSB_BASE }
/** Array initializer of FSB peripheral base pointers */
#define FSB_BASE_PTRS                           { FSB }

/*!
 * @}
 */ /* end of group FSB_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX94_FSB_H_) */
