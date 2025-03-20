/*
** ###################################################################
**     Processors:          MIMX95_cm33
**
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX95_cm33
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     All rights reserved.
**
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
 * @file MIMX95_BLK_CTRL_GPUMIX.h
 * @version 0.0
 * @date 0-00-00
 * @brief CMSIS Peripheral Access Layer for MIMX95_BLK_CTRL_GPUMIX
 *
 * CMSIS Peripheral Access Layer for MIMX95
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX95_BLK_CTRL_GPUMIX_H_)  /* Check if memory map has not been already included */
#define MIMX95_BLK_CTRL_GPUMIX_H_

#include "MIMX95_COMMON.h"

/* ----------------------------------------------------------------------------
   -- BLK_CTRL_GPUMIX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BLK_CTRL_GPUMIX_Peripheral_Access_Layer BLK_CTRL_GPUMIX Peripheral Access Layer
 * @{
 */

/** BLK_CTRL_GPUMIX - Register Layout Typedef */
typedef struct {
  __IO uint32_t STRIPING_GRANULE;                  /**< Striping Granule Register, offset: 0x0 */
  __IO uint32_t TEXFMTENABLE;                      /**< TEXFMT Enable Register, offset: 0x4 */
  __IO uint32_t GPURESET;                          /**< GPU RESET Relase Register, offset: 0x8 */
} BLK_CTRL_GPUMIX_Type;

/* ----------------------------------------------------------------------------
   -- BLK_CTRL_GPUMIX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BLK_CTRL_GPUMIX_Register_Masks BLK_CTRL_GPUMIX Register Masks
 * @{
 */

/*! @name STRIPING_GRANULE - Striping Granule Register */
/*! @{ */

#define BLK_CTRL_GPUMIX_STRIPING_GRANULE_STRIPING_GRANULE_MASK (0xFU)
#define BLK_CTRL_GPUMIX_STRIPING_GRANULE_STRIPING_GRANULE_SHIFT (0U)
/*! STRIPING_GRANULE - Striping Granule Bits */
#define BLK_CTRL_GPUMIX_STRIPING_GRANULE_STRIPING_GRANULE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_GPUMIX_STRIPING_GRANULE_STRIPING_GRANULE_SHIFT)) & BLK_CTRL_GPUMIX_STRIPING_GRANULE_STRIPING_GRANULE_MASK)
/*! @} */

/*! @name TEXFMTENABLE - TEXFMT Enable Register */
/*! @{ */

#define BLK_CTRL_GPUMIX_TEXFMTENABLE_TEXFMTENABLE_MASK (0xFFFFFFFFU)
#define BLK_CTRL_GPUMIX_TEXFMTENABLE_TEXFMTENABLE_SHIFT (0U)
/*! TEXFMTENABLE - TEXFMT Enable Bits */
#define BLK_CTRL_GPUMIX_TEXFMTENABLE_TEXFMTENABLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_GPUMIX_TEXFMTENABLE_TEXFMTENABLE_SHIFT)) & BLK_CTRL_GPUMIX_TEXFMTENABLE_TEXFMTENABLE_MASK)
/*! @} */

/*! @name GPURESET - GPU RESET Relase Register */
/*! @{ */

#define BLK_CTRL_GPUMIX_GPURESET_GPURR_MASK  (0x1U)
#define BLK_CTRL_GPUMIX_GPURESET_GPURR_SHIFT (0U)
/*! GPURR - GPU Reset Release */
#define BLK_CTRL_GPUMIX_GPURESET_GPURR(x)    (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_GPUMIX_GPURESET_GPURR_SHIFT)) & BLK_CTRL_GPUMIX_GPURESET_GPURR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group BLK_CTRL_GPUMIX_Register_Masks */


/* BLK_CTRL_GPUMIX - Peripheral instance base addresses */
/** Peripheral BLK_CTRL_GPUMIX base address */
#define BLK_CTRL_GPUMIX_BASE                (0x4D810000u)
/** Peripheral BLK_CTRL_GPUMIX base pointer */
#define BLK_CTRL_GPUMIX                     ((BLK_CTRL_GPUMIX_Type *)BLK_CTRL_GPUMIX_BASE)
/** Array initializer of BLK_CTRL_GPUMIX peripheral base addresses */
#define BLK_CTRL_GPUMIX_BASE_ADDRS           { BLK_CTRL_GPUMIX_BASE }
/** Array initializer of BLK_CTRL_GPUMIX peripheral base pointers */
#define BLK_CTRL_GPUMIX_BASE_PTRS            { BLK_CTRL_GPUMIX }

/*!
 * @}
 */ /* end of group BLK_CTRL_GPUMIX_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX95_BLK_CTRL_GPUMIX_H_) */
