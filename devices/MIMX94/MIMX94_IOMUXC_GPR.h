/*
** ###################################################################
**     Processors:          MIMX9494AVKXD_cm33_core0
**                          MIMX9494AVKXJ_cm33_core0
**                          MIMX9494AVKXM_cm33_core0
**                          MIMX9494AVMXD_cm33_core0
**                          MIMX9494AVMXJ_cm33_core0
**                          MIMX9494AVMXM_cm33_core0
**                          MIMX9494CVKXD_cm33_core0
**                          MIMX9494CVKXJ_cm33_core0
**                          MIMX9494CVKXM_cm33_core0
**                          MIMX9494CVMXD_cm33_core0
**                          MIMX9494CVMXJ_cm33_core0
**                          MIMX9494CVMXM_cm33_core0
**                          MIMX9494DVKXD_cm33_core0
**                          MIMX9494DVKXJ_cm33_core0
**                          MIMX9494DVKXM_cm33_core0
**                          MIMX9494DVMXD_cm33_core0
**                          MIMX9494DVMXJ_cm33_core0
**                          MIMX9494DVMXM_cm33_core0
**                          MIMX9494XVKXD_cm33_core0
**                          MIMX9494XVKXJ_cm33_core0
**                          MIMX9494XVKXM_cm33_core0
**                          MIMX9494XVMXD_cm33_core0
**                          MIMX9494XVMXJ_cm33_core0
**                          MIMX9494XVMXM_cm33_core0
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**
**     Reference manual:    iMX94RM rev1 draftK
**     Version:             rev. 1.0, 2023-11-01
**     Build:               b240315
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX9494_cm33_core0
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-11-01)
**         Initial version.
**         core name and core alias name
**         +---------------------------------------------------------------------+
**         | core name  |                  core alias name                       |
**         +---------------------------------------------------------------------+
**         | cm33_core0 | m33, cm33                                              |
**         +---------------------------------------------------------------------+
**         | cm33_core1 | m33_2, cm33_2, cm33_sync, netcmix_cm33                 |
**         +---------------------------------------------------------------------+
**         | cm7_core0  | m7, cm7                                                |
**         +---------------------------------------------------------------------+
**         | cm7_core1  | m7_2, cm7_2                                            |
**         +---------------------------------------------------------------------+
**         | ca55_core0 | a55, ca55, a55_0, ca55_0                               |
**         +---------------------------------------------------------------------+
**         | ca55_core1 | a55, ca55, a55_1, ca55_1                               |
**         +---------------------------------------------------------------------+
**         | ca55_core2 | a55, ca55, a55_2, ca55_2                               |
**         +---------------------------------------------------------------------+
**         | ca55_core3 | a55, ca55, a55_3, ca55_3                               |
**         +---------------------------------------------------------------------+
**
** ###################################################################
*/

/*!
 * @file MIMX9494_IOMUXC_GPR.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_IOMUXC_GPR
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_IOMUXC_GPR_H_)  /* Check if memory map has not been already included */
#define MIMX9494_IOMUXC_GPR_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Peripheral_Access_Layer IOMUXC_GPR Peripheral Access Layer
 * @{
 */

/** IOMUXC_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t GPR0;                              /**< GPR0 General Purpose Register, offset: 0x0 */
} IOMUXC_GPR_Type;

/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Register_Masks IOMUXC_GPR Register Masks
 * @{
 */

/*! @name GPR0 - GPR0 General Purpose Register */
/*! @{ */

#define IOMUXC_GPR_GPR0_GPR_MASK                 (0xFFFFFFFFU)
#define IOMUXC_GPR_GPR0_GPR_SHIFT                (0U)
/*! GPR - General purpose bits */
#define IOMUXC_GPR_GPR0_GPR(x)                   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_GPR_SHIFT)) & IOMUXC_GPR_GPR0_GPR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group IOMUXC_GPR_Register_Masks */


/* IOMUXC_GPR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral IOMUXC_GPR base address */
  #define IOMUXC_GPR_BASE                          (0x543D0000u)
  /** Peripheral IOMUXC_GPR base address */
  #define IOMUXC_GPR_BASE_NS                       (0x443D0000u)
  /** Peripheral IOMUXC_GPR base pointer */
  #define IOMUXC_GPR                               ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE)
  /** Peripheral IOMUXC_GPR base pointer */
  #define IOMUXC_GPR_NS                            ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE_NS)
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS                    { IOMUXC_GPR_BASE }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS                     { IOMUXC_GPR }
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS_NS                 { IOMUXC_GPR_BASE_NS }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS_NS                  { IOMUXC_GPR_NS }
#else
  /** Peripheral IOMUXC_GPR base address */
  #define IOMUXC_GPR_BASE                          (0x443D0000u)
  /** Peripheral IOMUXC_GPR base pointer */
  #define IOMUXC_GPR                               ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE)
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS                    { IOMUXC_GPR_BASE }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS                     { IOMUXC_GPR }
#endif

/*!
 * @}
 */ /* end of group IOMUXC_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_IOMUXC_GPR_H_) */
