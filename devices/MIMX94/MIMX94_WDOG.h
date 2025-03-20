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
 * @file MIMX9494_WDOG.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_WDOG
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_WDOG_H_)  /* Check if memory map has not been already included */
#define MIMX9494_WDOG_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- WDOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Peripheral_Access_Layer WDOG Peripheral Access Layer
 * @{
 */

/** WDOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CS;                                /**< WDOG Control and Status, offset: 0x0 */
  __IO uint32_t CNT;                               /**< WDOG Counter, offset: 0x4 */
  __IO uint32_t TOVAL;                             /**< WDOG Timeout Value, offset: 0x8 */
  __IO uint32_t WIN;                               /**< Watchdog Window, offset: 0xC */
} WDOG_Type;

/* ----------------------------------------------------------------------------
   -- WDOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Register_Masks WDOG Register Masks
 * @{
 */

/*! @name CS - WDOG Control and Status */
/*! @{ */

#define WDOG_CS_STOP_MASK                        (0x1U)
#define WDOG_CS_STOP_SHIFT                       (0U)
/*! STOP - Stop Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_STOP(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_STOP_SHIFT)) & WDOG_CS_STOP_MASK)

#define WDOG_CS_WAIT_MASK                        (0x2U)
#define WDOG_CS_WAIT_SHIFT                       (1U)
/*! WAIT - Wait Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_WAIT(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_WAIT_SHIFT)) & WDOG_CS_WAIT_MASK)

#define WDOG_CS_DBG_MASK                         (0x4U)
#define WDOG_CS_DBG_SHIFT                        (2U)
/*! DBG - Debug Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_DBG(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_DBG_SHIFT)) & WDOG_CS_DBG_MASK)

#define WDOG_CS_TST_MASK                         (0x18U)
#define WDOG_CS_TST_SHIFT                        (3U)
/*! TST - WDOG Test
 *  0b00..Disable WDOG Test mode
 *  0b01..Enable WDOG User mode
 *  0b10-0b11..Enable WDOG Test mode
 */
#define WDOG_CS_TST(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_TST_SHIFT)) & WDOG_CS_TST_MASK)

#define WDOG_CS_UPDATE_MASK                      (0x20U)
#define WDOG_CS_UPDATE_SHIFT                     (5U)
/*! UPDATE - Updates Allowed
 *  0b0..Updates not allowed
 *  0b1..Updates allowed
 */
#define WDOG_CS_UPDATE(x)                        (((uint32_t)(((uint32_t)(x)) << WDOG_CS_UPDATE_SHIFT)) & WDOG_CS_UPDATE_MASK)

#define WDOG_CS_INT_MASK                         (0x40U)
#define WDOG_CS_INT_SHIFT                        (6U)
/*! INT - WDOG Interrupt
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_INT(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_INT_SHIFT)) & WDOG_CS_INT_MASK)

#define WDOG_CS_EN_MASK                          (0x80U)
#define WDOG_CS_EN_SHIFT                         (7U)
/*! EN - WDOG Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_EN(x)                            (((uint32_t)(((uint32_t)(x)) << WDOG_CS_EN_SHIFT)) & WDOG_CS_EN_MASK)

#define WDOG_CS_CLK_MASK                         (0x300U)
#define WDOG_CS_CLK_SHIFT                        (8U)
/*! CLK - WDOG Clock
 *  0b00..IPG
 *  0b01..LPO
 *  0b10..INT
 *  0b11..EXT
 */
#define WDOG_CS_CLK(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_CLK_SHIFT)) & WDOG_CS_CLK_MASK)

#define WDOG_CS_RCS_MASK                         (0x400U)
#define WDOG_CS_RCS_SHIFT                        (10U)
/*! RCS - Reconfiguration Success
 *  0b0..Unsuccessful
 *  0b1..Successful
 */
#define WDOG_CS_RCS(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_RCS_SHIFT)) & WDOG_CS_RCS_MASK)

#define WDOG_CS_ULK_MASK                         (0x800U)
#define WDOG_CS_ULK_SHIFT                        (11U)
/*! ULK - Unlock Status
 *  0b0..Locked
 *  0b1..Unlocked
 */
#define WDOG_CS_ULK(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_ULK_SHIFT)) & WDOG_CS_ULK_MASK)

#define WDOG_CS_PRES_MASK                        (0x1000U)
#define WDOG_CS_PRES_SHIFT                       (12U)
/*! PRES - WDOG Prescaler
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_PRES(x)                          (((uint32_t)(((uint32_t)(x)) << WDOG_CS_PRES_SHIFT)) & WDOG_CS_PRES_MASK)

#define WDOG_CS_CMD32EN_MASK                     (0x2000U)
#define WDOG_CS_CMD32EN_SHIFT                    (13U)
/*! CMD32EN - Command 32 Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_CMD32EN(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_CS_CMD32EN_SHIFT)) & WDOG_CS_CMD32EN_MASK)

#define WDOG_CS_FLG_MASK                         (0x4000U)
#define WDOG_CS_FLG_SHIFT                        (14U)
/*! FLG - WDOG Interrupt Flag
 *  0b0..No interrupt occurred
 *  0b1..An interrupt occurred
 */
#define WDOG_CS_FLG(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_FLG_SHIFT)) & WDOG_CS_FLG_MASK)

#define WDOG_CS_WIN_MASK                         (0x8000U)
#define WDOG_CS_WIN_SHIFT                        (15U)
/*! WIN - WDOG Window
 *  0b0..Disable
 *  0b1..Enable
 */
#define WDOG_CS_WIN(x)                           (((uint32_t)(((uint32_t)(x)) << WDOG_CS_WIN_SHIFT)) & WDOG_CS_WIN_MASK)
/*! @} */

/*! @name CNT - WDOG Counter */
/*! @{ */

#define WDOG_CNT_CNTLOW_MASK                     (0xFFU)
#define WDOG_CNT_CNTLOW_SHIFT                    (0U)
/*! CNTLOW - Counter High Byte */
#define WDOG_CNT_CNTLOW(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_CNT_CNTLOW_SHIFT)) & WDOG_CNT_CNTLOW_MASK)

#define WDOG_CNT_CNTHIGH_MASK                    (0xFF00U)
#define WDOG_CNT_CNTHIGH_SHIFT                   (8U)
/*! CNTHIGH - Counter Low Byte */
#define WDOG_CNT_CNTHIGH(x)                      (((uint32_t)(((uint32_t)(x)) << WDOG_CNT_CNTHIGH_SHIFT)) & WDOG_CNT_CNTHIGH_MASK)
/*! @} */

/*! @name TOVAL - WDOG Timeout Value */
/*! @{ */

#define WDOG_TOVAL_TOVALLOW_MASK                 (0xFFU)
#define WDOG_TOVAL_TOVALLOW_SHIFT                (0U)
/*! TOVALLOW - Timeout Value Low */
#define WDOG_TOVAL_TOVALLOW(x)                   (((uint32_t)(((uint32_t)(x)) << WDOG_TOVAL_TOVALLOW_SHIFT)) & WDOG_TOVAL_TOVALLOW_MASK)

#define WDOG_TOVAL_TOVALHIGH_MASK                (0xFF00U)
#define WDOG_TOVAL_TOVALHIGH_SHIFT               (8U)
/*! TOVALHIGH - Timeout Value High */
#define WDOG_TOVAL_TOVALHIGH(x)                  (((uint32_t)(((uint32_t)(x)) << WDOG_TOVAL_TOVALHIGH_SHIFT)) & WDOG_TOVAL_TOVALHIGH_MASK)
/*! @} */

/*! @name WIN - Watchdog Window */
/*! @{ */

#define WDOG_WIN_WINLOW_MASK                     (0xFFU)
#define WDOG_WIN_WINLOW_SHIFT                    (0U)
/*! WINLOW - Low Byte */
#define WDOG_WIN_WINLOW(x)                       (((uint32_t)(((uint32_t)(x)) << WDOG_WIN_WINLOW_SHIFT)) & WDOG_WIN_WINLOW_MASK)

#define WDOG_WIN_WINHIGH_MASK                    (0xFF00U)
#define WDOG_WIN_WINHIGH_SHIFT                   (8U)
/*! WINHIGH - High Byte */
#define WDOG_WIN_WINHIGH(x)                      (((uint32_t)(((uint32_t)(x)) << WDOG_WIN_WINHIGH_SHIFT)) & WDOG_WIN_WINHIGH_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group WDOG_Register_Masks */


/* WDOG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE                               (0x542D0000u)
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE_NS                            (0x442D0000u)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1_NS                                 ((WDOG_Type *)WDOG1_BASE_NS)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE                               (0x542E0000u)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE_NS                            (0x442E0000u)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2                                    ((WDOG_Type *)WDOG2_BASE)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2_NS                                 ((WDOG_Type *)WDOG2_BASE_NS)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE                               (0x59220000u)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE_NS                            (0x49220000u)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3                                    ((WDOG_Type *)WDOG3_BASE)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3_NS                                 ((WDOG_Type *)WDOG3_BASE_NS)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE                               (0x59230000u)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE_NS                            (0x49230000u)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4                                    ((WDOG_Type *)WDOG4_BASE)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4_NS                                 ((WDOG_Type *)WDOG4_BASE_NS)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE                               (0x524B0000u)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE_NS                            (0x424B0000u)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5                                    ((WDOG_Type *)WDOG5_BASE)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5_NS                                 ((WDOG_Type *)WDOG5_BASE_NS)
  /** Peripheral WDOG6 base address */
  #define WDOG6_BASE                               (0x527E0000u)
  /** Peripheral WDOG6 base address */
  #define WDOG6_BASE_NS                            (0x427E0000u)
  /** Peripheral WDOG6 base pointer */
  #define WDOG6                                    ((WDOG_Type *)WDOG6_BASE)
  /** Peripheral WDOG6 base pointer */
  #define WDOG6_NS                                 ((WDOG_Type *)WDOG6_BASE_NS)
  /** Peripheral WDOG7 base address */
  #define WDOG7_BASE                               (0x5D0E0000u)
  /** Peripheral WDOG7 base address */
  #define WDOG7_BASE_NS                            (0x4D0E0000u)
  /** Peripheral WDOG7 base pointer */
  #define WDOG7                                    ((WDOG_Type *)WDOG7_BASE)
  /** Peripheral WDOG7 base pointer */
  #define WDOG7_NS                                 ((WDOG_Type *)WDOG7_BASE_NS)
  /** Peripheral WDOG8 base address */
  #define WDOG8_BASE                               (0x5D0F0000u)
  /** Peripheral WDOG8 base address */
  #define WDOG8_BASE_NS                            (0x4D0F0000u)
  /** Peripheral WDOG8 base pointer */
  #define WDOG8                                    ((WDOG_Type *)WDOG8_BASE)
  /** Peripheral WDOG8 base pointer */
  #define WDOG8_NS                                 ((WDOG_Type *)WDOG8_BASE_NS)
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS                          { WDOG1_BASE, WDOG2_BASE, WDOG3_BASE, WDOG4_BASE, WDOG5_BASE, WDOG6_BASE, WDOG7_BASE, WDOG8_BASE }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS                           { WDOG1, WDOG2, WDOG3, WDOG4, WDOG5, WDOG6, WDOG7, WDOG8 }
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS_NS                       { WDOG1_BASE_NS, WDOG2_BASE_NS, WDOG3_BASE_NS, WDOG4_BASE_NS, WDOG5_BASE_NS, WDOG6_BASE_NS, WDOG7_BASE_NS, WDOG8_BASE_NS }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS_NS                        { WDOG1_NS, WDOG2_NS, WDOG3_NS, WDOG4_NS, WDOG5_NS, WDOG6_NS, WDOG7_NS, WDOG8_NS }
#else
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE                               (0x442D0000u)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE                               (0x442E0000u)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2                                    ((WDOG_Type *)WDOG2_BASE)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE                               (0x49220000u)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3                                    ((WDOG_Type *)WDOG3_BASE)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE                               (0x49230000u)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4                                    ((WDOG_Type *)WDOG4_BASE)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE                               (0x424B0000u)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5                                    ((WDOG_Type *)WDOG5_BASE)
  /** Peripheral WDOG6 base address */
  #define WDOG6_BASE                               (0x427E0000u)
  /** Peripheral WDOG6 base pointer */
  #define WDOG6                                    ((WDOG_Type *)WDOG6_BASE)
  /** Peripheral WDOG7 base address */
  #define WDOG7_BASE                               (0x4D0E0000u)
  /** Peripheral WDOG7 base pointer */
  #define WDOG7                                    ((WDOG_Type *)WDOG7_BASE)
  /** Peripheral WDOG8 base address */
  #define WDOG8_BASE                               (0x4D0F0000u)
  /** Peripheral WDOG8 base pointer */
  #define WDOG8                                    ((WDOG_Type *)WDOG8_BASE)
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS                          { WDOG1_BASE, WDOG2_BASE, WDOG3_BASE, WDOG4_BASE, WDOG5_BASE, WDOG6_BASE, WDOG7_BASE, WDOG8_BASE }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS                           { WDOG1, WDOG2, WDOG3, WDOG4, WDOG5, WDOG6, WDOG7, WDOG8 }
#endif
/* Extra definition */
#define WDOG_UPDATE_KEY                          (0xD928C520U)
#define WDOG_REFRESH_KEY                         (0xB480A602U)


/*!
 * @}
 */ /* end of group WDOG_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_WDOG_H_) */
