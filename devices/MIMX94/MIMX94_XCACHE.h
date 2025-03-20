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
 * @file MIMX9494_XCACHE.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_XCACHE
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_XCACHE_H_)  /* Check if memory map has not been already included */
#define MIMX9494_XCACHE_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- XCACHE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XCACHE_Peripheral_Access_Layer XCACHE Peripheral Access Layer
 * @{
 */

/** XCACHE - Register Layout Typedef */
typedef struct {
  __IO uint32_t CCR;                               /**< Cache Control, offset: 0x0 */
  __IO uint32_t CLCR;                              /**< Cache Line Control, offset: 0x4 */
  __IO uint32_t CSAR;                              /**< Cache Search Address, offset: 0x8 */
  __IO uint32_t CCVR;                              /**< Cache Read/Write Value, offset: 0xC */
} XCACHE_Type;

/* ----------------------------------------------------------------------------
   -- XCACHE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XCACHE_Register_Masks XCACHE Register Masks
 * @{
 */

/*! @name CCR - Cache Control */
/*! @{ */

#define XCACHE_CCR_ENCACHE_MASK                  (0x1U)
#define XCACHE_CCR_ENCACHE_SHIFT                 (0U)
/*! ENCACHE - Cache Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define XCACHE_CCR_ENCACHE(x)                    (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_ENCACHE_SHIFT)) & XCACHE_CCR_ENCACHE_MASK)

#define XCACHE_CCR_FRCWT_MASK                    (0x4U)
#define XCACHE_CCR_FRCWT_SHIFT                   (2U)
/*! FRCWT - Force Write Through Mode
 *  0b0..Not force
 *  0b1..Force
 */
#define XCACHE_CCR_FRCWT(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_FRCWT_SHIFT)) & XCACHE_CCR_FRCWT_MASK)

#define XCACHE_CCR_FRCNOALLC_MASK                (0x8U)
#define XCACHE_CCR_FRCNOALLC_SHIFT               (3U)
/*! FRCNOALLC - Force No Allocation on Cache Misses
 *  0b0..Allocate on cache misses
 *  0b1..Force no allocation on cache misses
 */
#define XCACHE_CCR_FRCNOALLC(x)                  (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_FRCNOALLC_SHIFT)) & XCACHE_CCR_FRCNOALLC_MASK)

#define XCACHE_CCR_INVW0_MASK                    (0x1000000U)
#define XCACHE_CCR_INVW0_SHIFT                   (24U)
/*! INVW0 - Invalidate Way 0
 *  0b0..No operation
 *  0b1..Invalidate all lines in way 0
 */
#define XCACHE_CCR_INVW0(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_INVW0_SHIFT)) & XCACHE_CCR_INVW0_MASK)

#define XCACHE_CCR_PUSHW0_MASK                   (0x2000000U)
#define XCACHE_CCR_PUSHW0_SHIFT                  (25U)
/*! PUSHW0 - Push Way 0
 *  0b0..No operation
 *  0b1..Pushes all modified lines in way 0
 */
#define XCACHE_CCR_PUSHW0(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_PUSHW0_SHIFT)) & XCACHE_CCR_PUSHW0_MASK)

#define XCACHE_CCR_INVW1_MASK                    (0x4000000U)
#define XCACHE_CCR_INVW1_SHIFT                   (26U)
/*! INVW1 - Invalidate Way 1
 *  0b0..No operation
 *  0b1..Invalidate all lines in way 1
 */
#define XCACHE_CCR_INVW1(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_INVW1_SHIFT)) & XCACHE_CCR_INVW1_MASK)

#define XCACHE_CCR_PUSHW1_MASK                   (0x8000000U)
#define XCACHE_CCR_PUSHW1_SHIFT                  (27U)
/*! PUSHW1 - Push Way 1
 *  0b0..No operation
 *  0b1..Push all modified lines in way 1
 */
#define XCACHE_CCR_PUSHW1(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_PUSHW1_SHIFT)) & XCACHE_CCR_PUSHW1_MASK)

#define XCACHE_CCR_GO_MASK                       (0x80000000U)
#define XCACHE_CCR_GO_SHIFT                      (31U)
/*! GO - Initiate Cache Command
 *  0b0..Write: no effect; Read: no cache command active
 *  0b1..Write: initiate command; Read: cache command active
 */
#define XCACHE_CCR_GO(x)                         (((uint32_t)(((uint32_t)(x)) << XCACHE_CCR_GO_SHIFT)) & XCACHE_CCR_GO_MASK)
/*! @} */

/*! @name CLCR - Cache Line Control */
/*! @{ */

#define XCACHE_CLCR_LGO_MASK                     (0x1U)
#define XCACHE_CLCR_LGO_SHIFT                    (0U)
/*! LGO - Initiate Cache Line Command
 *  0b0..Write: no effect; Read: no line command active
 *  0b1..Write: initiate line command; Read: line command active
 */
#define XCACHE_CLCR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LGO_SHIFT)) & XCACHE_CLCR_LGO_MASK)

#define XCACHE_CLCR_CACHEADDR_MASK               (0x3FFCU)
#define XCACHE_CLCR_CACHEADDR_SHIFT              (2U)
/*! CACHEADDR - Cache Address */
#define XCACHE_CLCR_CACHEADDR(x)                 (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_CACHEADDR_SHIFT)) & XCACHE_CLCR_CACHEADDR_MASK)

#define XCACHE_CLCR_WSEL_MASK                    (0x4000U)
#define XCACHE_CLCR_WSEL_SHIFT                   (14U)
/*! WSEL - Way Select
 *  0b0..Way 0
 *  0b1..Way 1
 */
#define XCACHE_CLCR_WSEL(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_WSEL_SHIFT)) & XCACHE_CLCR_WSEL_MASK)

#define XCACHE_CLCR_TDSEL_MASK                   (0x10000U)
#define XCACHE_CLCR_TDSEL_SHIFT                  (16U)
/*! TDSEL - Tag or Data Select
 *  0b0..Data
 *  0b1..Tag
 */
#define XCACHE_CLCR_TDSEL(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_TDSEL_SHIFT)) & XCACHE_CLCR_TDSEL_MASK)

#define XCACHE_CLCR_LCIVB_MASK                   (0x100000U)
#define XCACHE_CLCR_LCIVB_SHIFT                  (20U)
/*! LCIVB - Line Command Initial Valid */
#define XCACHE_CLCR_LCIVB(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LCIVB_SHIFT)) & XCACHE_CLCR_LCIVB_MASK)

#define XCACHE_CLCR_LCIMB_MASK                   (0x200000U)
#define XCACHE_CLCR_LCIMB_SHIFT                  (21U)
/*! LCIMB - Line Command Initial Modified */
#define XCACHE_CLCR_LCIMB(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LCIMB_SHIFT)) & XCACHE_CLCR_LCIMB_MASK)

#define XCACHE_CLCR_LCWAY_MASK                   (0x400000U)
#define XCACHE_CLCR_LCWAY_SHIFT                  (22U)
/*! LCWAY - Line Command Way */
#define XCACHE_CLCR_LCWAY(x)                     (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LCWAY_SHIFT)) & XCACHE_CLCR_LCWAY_MASK)

#define XCACHE_CLCR_LCMD_MASK                    (0x3000000U)
#define XCACHE_CLCR_LCMD_SHIFT                   (24U)
/*! LCMD - Line Command
 *  0b00..Search and read or write
 *  0b01..Invalidate
 *  0b10..Push
 *  0b11..Clear
 */
#define XCACHE_CLCR_LCMD(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LCMD_SHIFT)) & XCACHE_CLCR_LCMD_MASK)

#define XCACHE_CLCR_LADSEL_MASK                  (0x4000000U)
#define XCACHE_CLCR_LADSEL_SHIFT                 (26U)
/*! LADSEL - Line Address Select
 *  0b0..Cache address
 *  0b1..Physical address
 */
#define XCACHE_CLCR_LADSEL(x)                    (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LADSEL_SHIFT)) & XCACHE_CLCR_LADSEL_MASK)

#define XCACHE_CLCR_LACC_MASK                    (0x8000000U)
#define XCACHE_CLCR_LACC_SHIFT                   (27U)
/*! LACC - Line Access Type
 *  0b0..Read
 *  0b1..Write
 */
#define XCACHE_CLCR_LACC(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CLCR_LACC_SHIFT)) & XCACHE_CLCR_LACC_MASK)
/*! @} */

/*! @name CSAR - Cache Search Address */
/*! @{ */

#define XCACHE_CSAR_LGO_MASK                     (0x1U)
#define XCACHE_CSAR_LGO_SHIFT                    (0U)
/*! LGO - Initiate Cache Line Command
 *  0b0..Write: no effect; Read: no line command active
 *  0b1..Write: initiate line command; Read: line command active
 */
#define XCACHE_CSAR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << XCACHE_CSAR_LGO_SHIFT)) & XCACHE_CSAR_LGO_MASK)

#define XCACHE_CSAR_PHYADDR_MASK                 (0xFFFFFFFCU)
#define XCACHE_CSAR_PHYADDR_SHIFT                (2U)
/*! PHYADDR - Physical Address */
#define XCACHE_CSAR_PHYADDR(x)                   (((uint32_t)(((uint32_t)(x)) << XCACHE_CSAR_PHYADDR_SHIFT)) & XCACHE_CSAR_PHYADDR_MASK)
/*! @} */

/*! @name CCVR - Cache Read/Write Value */
/*! @{ */

#define XCACHE_CCVR_DATA_MASK                    (0xFFFFFFFFU)
#define XCACHE_CCVR_DATA_SHIFT                   (0U)
/*! DATA - Cache Read/Write Data */
#define XCACHE_CCVR_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << XCACHE_CCVR_DATA_SHIFT)) & XCACHE_CCVR_DATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group XCACHE_Register_Masks */


/* XCACHE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE                    (0x54400000u)
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE_NS                 (0x44400000u)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC                         ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC_NS                      ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE_NS)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE                    (0x54400800u)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE_NS                 (0x44400800u)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS                         ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS_NS                      ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE_NS)
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS                        { M33_CACHE_CTRLPC_BASE, M33_CACHE_CTRLPS_BASE }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS                         { M33_CACHE_CTRLPC, M33_CACHE_CTRLPS }
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS_NS                     { M33_CACHE_CTRLPC_BASE_NS, M33_CACHE_CTRLPS_BASE_NS }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS_NS                      { M33_CACHE_CTRLPC_NS, M33_CACHE_CTRLPS_NS }
#else
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE                    (0x44400000u)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC                         ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE                    (0x44400800u)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS                         ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE)
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS                        { M33_CACHE_CTRLPC_BASE, M33_CACHE_CTRLPS_BASE }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS                         { M33_CACHE_CTRLPC, M33_CACHE_CTRLPS }
#endif
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES                { 0x1FFC0000u, 0x38000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES                { 0x00040000u, 0x08000000u }
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES_NS             { 0x0FFC0000u, 0x28000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES_NS             { 0x00040000u, 0x08000000u }
#else
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES                { 0x0FFC0000u, 0x28000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES                { 0x00040000u, 0x08000000u }
#endif


/*!
 * @}
 */ /* end of group XCACHE_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_XCACHE_H_) */
