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
 * @file MIMX9494_ANALOG_OSC24M.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_ANALOG_OSC24M
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_ANALOG_OSC24M_H_)  /* Check if memory map has not been already included */
#define MIMX9494_ANALOG_OSC24M_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- ANALOG_OSC24M Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANALOG_OSC24M_Peripheral_Access_Layer ANALOG_OSC24M Peripheral Access Layer
 * @{
 */

/** ANALOG_OSC24M - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[2048];
  __I  uint32_t DIGPROG_DEVICE_ID;                 /**< Device ID, offset: 0x800 */
} OSC24M_Type;

/* ----------------------------------------------------------------------------
   -- ANALOG_OSC24M Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANALOG_OSC24M_Register_Masks ANALOG_OSC24M Register Masks
 * @{
 */

/*! @name DIGPROG_DEVICE_ID - Device ID */
/*! @{ */

#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MINOR_MASK (0xFFU)
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MINOR_SHIFT (0U)
/*! DIGPROG_MINOR - Bit[3:0] is the metal layer revision. Bit[7:4] is the base layer revision. */
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MINOR(x) (((uint32_t)(((uint32_t)(x)) << OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MINOR_SHIFT)) & OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MINOR_MASK)

#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_LOWER_MASK (0xFF00U)
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_LOWER_SHIFT (8U)
/*! DIGPROG_MAJOR_LOWER - DIGPROG_MAJOR_LOWER */
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_LOWER(x) (((uint32_t)(((uint32_t)(x)) << OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_LOWER_SHIFT)) & OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_LOWER_MASK)

#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_UPPER_MASK (0xFF0000U)
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_UPPER_SHIFT (16U)
/*! DIGPROG_MAJOR_UPPER - DIGPROG_MAJOR_UPPER */
#define OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_UPPER(x) (((uint32_t)(((uint32_t)(x)) << OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_UPPER_SHIFT)) & OSC24M_DIGPROG_DEVICE_ID_DIGPROG_MAJOR_UPPER_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ANALOG_OSC24M_Register_Masks */


/* ANALOG_OSC24M - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral OSC24M base address */
  #define OSC24M_BASE                      (0x54480000u)
  /** Peripheral OSC24M base address */
  #define OSC24M_BASE_NS                   (0x44480000u)
  /** Peripheral OSC24M base pointer */
  #define OSC24M                           ((OSC24M_Type *)OSC24M_BASE)
  /** Peripheral OSC24M base pointer */
  #define OSC24M_NS                        ((OSC24M_Type *)OSC24M_BASE_NS)
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define OSC24M_BASE_ADDRS                 { OSC24M_BASE }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define OSC24M_BASE_PTRS                  { OSC24M }
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define OSC24M_BASE_ADDRS_NS              { OSC24M_BASE_NS }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define OSC24M_BASE_PTRS_NS               { OSC24M_NS }
#else
  /** Peripheral OSC24M base address */
  #define OSC24M_BASE                      (0x44480000u)
  /** Peripheral OSC24M base pointer */
  #define OSC24M                           ((OSC24M_Type *)OSC24M_BASE)
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define OSC24M_BASE_ADDRS                 { OSC24M_BASE }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define OSC24M_BASE_PTRS                  { OSC24M }
#endif

/*!
 * @}
 */ /* end of group ANALOG_OSC24M_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_ANALOG_OSC24M_H_) */
