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
 * @file MIMX9494_BLK_CTRL_NS_AONMIX.h
 * @version 1.0
 * @date 2023-11-01
 * @brief CMSIS Peripheral Access Layer for MIMX9494_BLK_CTRL_NS_AONMIX
 *
 * CMSIS Peripheral Access Layer for MIMX9494
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX9494_BLK_CTRL_NS_AONMIX_H_)  /* Check if memory map has not been already included */
#define MIMX9494_BLK_CTRL_NS_AONMIX_H_

#include "MIMX94_COMMON.h"

/* ----------------------------------------------------------------------------
   -- BLK_CTRL_NS_AONMIX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BLK_CTRL_NS_AONMIX_Peripheral_Access_Layer BLK_CTRL_NS_AONMIX Peripheral Access Layer
 * @{
 */

/** BLK_CTRL_NS_AONMIX - Register Layout Typedef */
typedef struct {
  __IO uint32_t GPC_CFG;                           /**< GPC CORE SLEEP Request Select, offset: 0x0 */
  __IO uint32_t UPPER_ADDR;                        /**< UPPER ADDR BITS[35:32], offset: 0x4 */
  __IO uint32_t IPG_DEBUG_CM33;                    /**< IPG DEBUG MASK BIT for CM33, offset: 0x8 */
  __IO uint32_t IPG_DEBUG_CA55C0;                  /**< IPG DEBUG MASK BIT CA55 CORE0, offset: 0xC */
  __IO uint32_t IPG_DEBUG_CA55C1;                  /**< IPG DEBUG MASK BIT CA55 CORE1, offset: 0x10 */
  __IO uint32_t IPG_DEBUG_CA55C2;                  /**< IPG DEBUG MASK BIT CA55 CORE2, offset: 0x14 */
  __IO uint32_t IPG_DEBUG_CA55C3;                  /**< IPG DEBUG MASK BIT CA55 CORE3, offset: 0x18 */
  __IO uint32_t IPG_DEBUG_CM7_1;                   /**< IPG DEBUG MASK BIT CM7_1, offset: 0x1C */
  __IO uint32_t IPG_DEBUG_CM33_SYNC;               /**< IPG DEBUG MASK BIT CM33_SYNC, offset: 0x20 */
  __IO uint32_t IPG_DEBUG_CM7;                     /**< IPG DEBUG MASK BIT for cm7, offset: 0x24 */
  __I  uint32_t FUSE_ACC_DIS;                      /**< Fuse access-disable, offset: 0x28 */
  __IO uint32_t GPT_MUX_SEL;                       /**< GPT mux select, offset: 0x2C */
  __I  uint32_t OCOTP_FUSE_DATA0;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_0, offset: 0x30 */
  __I  uint32_t OCOTP_FUSE_DATA1;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_1, offset: 0x34 */
  __I  uint32_t OCOTP_FUSE_DATA2;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_2, offset: 0x38 */
  __I  uint32_t OCOTP_FUSE_DATA3;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_3, offset: 0x3C */
  __I  uint32_t OCOTP_FUSE_DATA4;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_4, offset: 0x40 */
  __I  uint32_t OCOTP_FUSE_DATA5;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_5, offset: 0x44 */
  __I  uint32_t OCOTP_FUSE_DATA6;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_6, offset: 0x48 */
  __I  uint32_t OCOTP_FUSE_DATA7;                  /**< Read-only version of OCOTP fusedata_mtr_cfg_7, offset: 0x4C */
  __I  uint32_t OCOTP_FUSE_DATA8;                  /**< Read-only version of OCOTP fusedata_mem_trim_cfg0, offset: 0x50 */
  __I  uint32_t OCOTP_FUSE_DATA9;                  /**< Read-only version of OCOTP fusedata_mem_trim_cfg1, offset: 0x54 */
  __I  uint32_t OCOTP_FUSE_DATA10;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg2, offset: 0x58 */
  __I  uint32_t OCOTP_FUSE_DATA11;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg3, offset: 0x5C */
  __I  uint32_t OCOTP_FUSE_DATA12;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg4, offset: 0x60 */
  __I  uint32_t OCOTP_FUSE_DATA13;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg5, offset: 0x64 */
  __I  uint32_t OCOTP_FUSE_DATA14;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg6, offset: 0x68 */
  __I  uint32_t OCOTP_FUSE_DATA15;                 /**< Read-only version of OCOTP fusedata_mem_trim_cfg7, offset: 0x6C */
  __IO uint32_t I3C1_WAKEUP;                       /**< I3C1 WAKEUPX CLR, offset: 0x70 */
  __I  uint32_t OCOTP_STATUS;                      /**< OCOTP status register, offset: 0x74 */
  __IO uint32_t PDM_CLK_SEL;                       /**< PDM clock selection register, offset: 0x78 */
  __IO uint32_t I3C1_SDA_IRQ;                      /**< I3C1 SDA IRQ CONTROL BIT, offset: 0x7C */
  __IO uint32_t SSI;                               /**< SSI master low power mode control, offset: 0x80 */
  __I  uint32_t FASTBOOT_ENABLE;                   /**< fastboot enable, offset: 0x84 */
  __IO uint32_t MQS_SETTINGS;                      /**< MQS settings, offset: 0x88 */
  __I  uint32_t ELE_FW_PRESENT;                    /**< ELE_FW_PRESENT, offset: 0x8C */
  __I  uint32_t AOMIX_SPARE_FUSE;                  /**< Spare fuse register, offset: 0x90 */
  __IO uint32_t IPG_STOP_CTL;                      /**< IPG_STOP control, offset: 0x94 */
  __I  uint32_t IPG_STOP_ACK_STATUS;               /**< IPG_STOP_ACK status, offset: 0x98 */
  __IO uint32_t AONMIX_MISC;                       /**< AONMIX_MISC, offset: 0x9C */
  __IO uint32_t QREQ_N;                            /**< QREQ_N control, offset: 0xA0 */
  __IO uint32_t SAI_MCLK;                          /**< SAI1 MCLK control register, offset: 0xA4 */
  __I  uint32_t QACTIVE;                           /**< QACTIVE status, offset: 0xA8 */
  __I  uint32_t QDENY;                             /**< QDENY status, offset: 0xAC */
  __I  uint32_t QACCEPT_N;                         /**< QACCEPT_N status, offset: 0xB0 */
  __IO uint32_t ADC_TRIG;                          /**< ADC trigger, offset: 0xB4 */
  __IO uint32_t FORCE_ON_OFF;                      /**< force_on_off and force_on_off_sel for IPCs, offset: 0xB8 */
  __IO uint32_t FORCE_ON_OFF_1;                    /**< force_on_off and force_on_off_sel for IPCs, offset: 0xBC */
  __IO uint32_t FORCE_ON_OFF_2;                    /**< force_on_off and force_on_off_sel for IPCs, offset: 0xC0 */
  __IO uint32_t ECC_ERROR;                         /**< ECC error clear and enable, offset: 0xC4 */
  __IO uint32_t FORCE_ON_OFF_3;                    /**< force_on_off and force_on_off_sel for IPCs, offset: 0xC8 */
  __IO uint32_t FORCE_ON_OFF_4;                    /**< force_on_off and force_on_off_sel for IPCs, offset: 0xCC */
  __IO uint32_t FORCE_ON_OFF_5;                    /**< force_on_off and force_on_off_sel for IPCs, offset: 0xD0 */
} BLK_CTRL_NS_AONMIX_Type;

/* ----------------------------------------------------------------------------
   -- BLK_CTRL_NS_AONMIX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BLK_CTRL_NS_AONMIX_Register_Masks BLK_CTRL_NS_AONMIX Register Masks
 * @{
 */

/*! @name GPC_CFG - GPC CORE SLEEP Request Select */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SLEEP_SEL_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SLEEP_SEL_SHIFT (0U)
/*! M33_SLEEP_SEL - M33 SLEEP Request Select
 *  0b0..Select SLEEPING as request source
 *  0b1..Select SLEEPDEEP as request source
 */
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SLEEP_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SLEEP_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SLEEP_SEL_MASK)

#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_SLEEP_SEL_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_SLEEP_SEL_SHIFT (1U)
/*! M7_SLEEP_SEL - M7 SLEEP Request Select
 *  0b0..Select SLEEPING as request source
 *  0b1..Select SLEEPDEEP as request source
 */
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_SLEEP_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPC_CFG_M7_SLEEP_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPC_CFG_M7_SLEEP_SEL_MASK)

#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_1_SLEEP_SEL_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_1_SLEEP_SEL_SHIFT (2U)
/*! M7_1_SLEEP_SEL - M7_1 SLEEP Request Select
 *  0b0..Select SLEEPING as request source
 *  0b1..Select SLEEPDEEP as request source
 */
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M7_1_SLEEP_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPC_CFG_M7_1_SLEEP_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPC_CFG_M7_1_SLEEP_SEL_MASK)

#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SYNC_SLEEP_SEL_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SYNC_SLEEP_SEL_SHIFT (3U)
/*! M33_SYNC_SLEEP_SEL - M33_SYNC SLEEP Request Select
 *  0b0..Select SLEEPING as request source
 *  0b1..Select SLEEPDEEP as request source
 */
#define BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SYNC_SLEEP_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SYNC_SLEEP_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPC_CFG_M33_SYNC_SLEEP_SEL_MASK)
/*! @} */

/*! @name UPPER_ADDR - UPPER ADDR BITS[35:32] */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_ELE_MASK (0xFU)
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_ELE_SHIFT (0U)
/*! ELE - address bit [35:32] for ELE */
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_ELE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_UPPER_ADDR_ELE_SHIFT)) & BLK_CTRL_NS_AONMIX_UPPER_ADDR_ELE_MASK)

#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_EDMA1_MASK (0xF0U)
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_EDMA1_SHIFT (4U)
/*! edma1 - address bit [35:32] for edma1 */
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_UPPER_ADDR_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_UPPER_ADDR_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_MTR_MASTER_MASK (0xF00U)
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_MTR_MASTER_SHIFT (8U)
/*! mtr_master - address bit [35:32] for mtr_master */
#define BLK_CTRL_NS_AONMIX_UPPER_ADDR_MTR_MASTER(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_UPPER_ADDR_MTR_MASTER_SHIFT)) & BLK_CTRL_NS_AONMIX_UPPER_ADDR_MTR_MASTER_MASK)
/*! @} */

/*! @name IPG_DEBUG_CM33 - IPG DEBUG MASK BIT for CM33 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33
 *  0b1..Block enters debug halted mode when CM33 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CA55C0 - IPG DEBUG MASK BIT CA55 CORE0 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C0_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CA55C1 - IPG DEBUG MASK BIT CA55 CORE1 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C1_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CA55C2 - IPG DEBUG MASK BIT CA55 CORE2 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C2_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CA55C3 - IPG DEBUG MASK BIT CA55 CORE3 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CA55 core
 *  0b1..Block enters debug halted mode when CA55 core is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CA55C3_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CM7_1 - IPG DEBUG MASK BIT CM7_1 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7_1
 *  0b1..Block enters debug halted mode when CM7_1 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_1_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CM33_SYNC - IPG DEBUG MASK BIT CM33_SYNC */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM33_SYNC
 *  0b1..Block enters debug halted mode when CM33_SYNC is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM33_SYNC_GF_MASK)
/*! @} */

/*! @name IPG_DEBUG_CM7 - IPG DEBUG MASK BIT for cm7 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_CAN1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_CAN1_SHIFT (0U)
/*! can1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_EDMA1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_EDMA1_SHIFT (1U)
/*! edma1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C1_SHIFT (2U)
/*! lpi2c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C2_SHIFT (3U)
/*! lpi2c2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPIT1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPIT1_SHIFT (4U)
/*! lpit1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI1_SHIFT (5U)
/*! lpspi1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI2_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI2_SHIFT (6U)
/*! lpspi2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPTMR1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPTMR1_SHIFT (7U)
/*! lptmr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPTMR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPTMR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_LPTMR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SAI1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SAI1_SHIFT (8U)
/*! sai1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SAI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SAI1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SAI1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM1_SHIFT (9U)
/*! tpm1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM2_SHIFT (10U)
/*! tpm2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG1_SHIFT (11U)
/*! wdog1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG2_SHIFT (12U)
/*! wdog2 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_I3C1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_I3C1_SHIFT (13U)
/*! i3c1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_I3C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_I3C1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_I3C1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_PDM_SHIFT (14U)
/*! pdm - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SYS_CTR1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SYS_CTR1_SHIFT (15U)
/*! sys_ctr1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SYS_CTR1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SYS_CTR1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_SYS_CTR1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GPT1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GPT1_SHIFT (16U)
/*! gpt1 - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GPT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GPT1_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GPT1_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GF_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GF_SHIFT (17U)
/*! gf - Mask bit for debug halted mode
 *  0b0..Block does not enter debug halted mode with CM7
 *  0b1..Block enters debug halted mode when CM7 is debug halted
 */
#define BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_DEBUG_CM7_GF_MASK)
/*! @} */

/*! @name FUSE_ACC_DIS - Fuse access-disable */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FUSE_ACC_DIS_OSCCA_FUSE_READ_DIS_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FUSE_ACC_DIS_OSCCA_FUSE_READ_DIS_SHIFT (0U)
/*! OSCCA_FUSE_READ_DIS - Fuse read disable bit
 *  0b0..SoC is allowed to access the OCOTP registers
 *  0b1..SoC is NOT allowed to access the OCOTP
 */
#define BLK_CTRL_NS_AONMIX_FUSE_ACC_DIS_OSCCA_FUSE_READ_DIS(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FUSE_ACC_DIS_OSCCA_FUSE_READ_DIS_SHIFT)) & BLK_CTRL_NS_AONMIX_FUSE_ACC_DIS_OSCCA_FUSE_READ_DIS_MASK)
/*! @} */

/*! @name GPT_MUX_SEL - GPT mux select */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_SEL_MASK (0xFFFU)
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_SEL_SHIFT (0U)
/*! sel - sel */
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_SEL_MASK)

#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CLKIN_MASK (0x7000U)
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CLKIN_SHIFT (12U)
/*! gpt1_ipp_ind_clkin - gpt1_ipp_ind_clkin */
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CLKIN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CLKIN_SHIFT)) & BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CLKIN_MASK)

#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN1_SEL_MASK (0x78000U)
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN1_SEL_SHIFT (15U)
/*! gpt1_ipp_ind_capin1_sel - gpt1_ipp_ind_capin1_sel */
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN1_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN1_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN1_SEL_MASK)

#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN2_SEL_MASK (0x180000U)
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN2_SEL_SHIFT (19U)
/*! gpt1_ipp_ind_capin2_sel - gpt1_ipp_ind_capin2_sel */
#define BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN2_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN2_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_GPT_MUX_SEL_GPT1_IPP_IND_CAPIN2_SEL_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA0 - Read-only version of OCOTP fusedata_mtr_cfg_0 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA0_OCOTP_FUSE_DATA0_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA0_OCOTP_FUSE_DATA0_SHIFT (0U)
/*! OCOTP_FUSE_DATA0 - OCOTP_FUSE_DATA0 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA0_OCOTP_FUSE_DATA0(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA0_OCOTP_FUSE_DATA0_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA0_OCOTP_FUSE_DATA0_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA1 - Read-only version of OCOTP fusedata_mtr_cfg_1 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA1_OCOTP_FUSE_DATA1_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA1_OCOTP_FUSE_DATA1_SHIFT (0U)
/*! OCOTP_FUSE_DATA1 - OCOTP_FUSE_DATA1 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA1_OCOTP_FUSE_DATA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA1_OCOTP_FUSE_DATA1_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA1_OCOTP_FUSE_DATA1_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA2 - Read-only version of OCOTP fusedata_mtr_cfg_2 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA2_OCOTP_FUSE_DATA2_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA2_OCOTP_FUSE_DATA2_SHIFT (0U)
/*! OCOTP_FUSE_DATA2 - OCOTP_FUSE_DATA2 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA2_OCOTP_FUSE_DATA2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA2_OCOTP_FUSE_DATA2_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA2_OCOTP_FUSE_DATA2_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA3 - Read-only version of OCOTP fusedata_mtr_cfg_3 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA3_OCOTP_FUSE_DATA3_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA3_OCOTP_FUSE_DATA3_SHIFT (0U)
/*! OCOTP_FUSE_DATA3 - OCOTP_FUSE_DATA3 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA3_OCOTP_FUSE_DATA3(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA3_OCOTP_FUSE_DATA3_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA3_OCOTP_FUSE_DATA3_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA4 - Read-only version of OCOTP fusedata_mtr_cfg_4 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA4_OCOTP_FUSE_DATA4_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA4_OCOTP_FUSE_DATA4_SHIFT (0U)
/*! OCOTP_FUSE_DATA4 - OCOTP_FUSE_DATA4 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA4_OCOTP_FUSE_DATA4(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA4_OCOTP_FUSE_DATA4_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA4_OCOTP_FUSE_DATA4_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA5 - Read-only version of OCOTP fusedata_mtr_cfg_5 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA5_OCOTP_FUSE_DATA5_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA5_OCOTP_FUSE_DATA5_SHIFT (0U)
/*! OCOTP_FUSE_DATA5 - OCOTP_FUSE_DATA5 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA5_OCOTP_FUSE_DATA5(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA5_OCOTP_FUSE_DATA5_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA5_OCOTP_FUSE_DATA5_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA6 - Read-only version of OCOTP fusedata_mtr_cfg_6 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA6_OCOTP_FUSE_DATA6_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA6_OCOTP_FUSE_DATA6_SHIFT (0U)
/*! OCOTP_FUSE_DATA6 - OCOTP_FUSE_DATA6 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA6_OCOTP_FUSE_DATA6(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA6_OCOTP_FUSE_DATA6_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA6_OCOTP_FUSE_DATA6_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA7 - Read-only version of OCOTP fusedata_mtr_cfg_7 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA7_OCOTP_FUSE_DATA7_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA7_OCOTP_FUSE_DATA7_SHIFT (0U)
/*! OCOTP_FUSE_DATA7 - OCOTP_FUSE_DATA7 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA7_OCOTP_FUSE_DATA7(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA7_OCOTP_FUSE_DATA7_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA7_OCOTP_FUSE_DATA7_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA8 - Read-only version of OCOTP fusedata_mem_trim_cfg0 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA8_OCOTP_FUSE_DATA8_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA8_OCOTP_FUSE_DATA8_SHIFT (0U)
/*! OCOTP_FUSE_DATA8 - OCOTP_FUSE_DATA8 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA8_OCOTP_FUSE_DATA8(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA8_OCOTP_FUSE_DATA8_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA8_OCOTP_FUSE_DATA8_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA9 - Read-only version of OCOTP fusedata_mem_trim_cfg1 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA9_OCOTP_FUSE_DATA9_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA9_OCOTP_FUSE_DATA9_SHIFT (0U)
/*! OCOTP_FUSE_DATA9 - OCOTP_FUSE_DATA9 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA9_OCOTP_FUSE_DATA9(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA9_OCOTP_FUSE_DATA9_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA9_OCOTP_FUSE_DATA9_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA10 - Read-only version of OCOTP fusedata_mem_trim_cfg2 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA10_OCOTP_FUSE_DATA10_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA10_OCOTP_FUSE_DATA10_SHIFT (0U)
/*! OCOTP_FUSE_DATA10 - OCOTP_FUSE_DATA10 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA10_OCOTP_FUSE_DATA10(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA10_OCOTP_FUSE_DATA10_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA10_OCOTP_FUSE_DATA10_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA11 - Read-only version of OCOTP fusedata_mem_trim_cfg3 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA11_OCOTP_FUSE_DATA11_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA11_OCOTP_FUSE_DATA11_SHIFT (0U)
/*! OCOTP_FUSE_DATA11 - OCOTP_FUSE_DATA12 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA11_OCOTP_FUSE_DATA11(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA11_OCOTP_FUSE_DATA11_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA11_OCOTP_FUSE_DATA11_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA12 - Read-only version of OCOTP fusedata_mem_trim_cfg4 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA12_OCOTP_FUSE_DATA12_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA12_OCOTP_FUSE_DATA12_SHIFT (0U)
/*! OCOTP_FUSE_DATA12 - OCOTP_FUSE_DATA13 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA12_OCOTP_FUSE_DATA12(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA12_OCOTP_FUSE_DATA12_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA12_OCOTP_FUSE_DATA12_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA13 - Read-only version of OCOTP fusedata_mem_trim_cfg5 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA13_OCOTP_FUSE_DATA13_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA13_OCOTP_FUSE_DATA13_SHIFT (0U)
/*! OCOTP_FUSE_DATA13 - OCOTP_FUSE_DATA13 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA13_OCOTP_FUSE_DATA13(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA13_OCOTP_FUSE_DATA13_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA13_OCOTP_FUSE_DATA13_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA14 - Read-only version of OCOTP fusedata_mem_trim_cfg6 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA14_OCOTP_FUSE_DATA14_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA14_OCOTP_FUSE_DATA14_SHIFT (0U)
/*! OCOTP_FUSE_DATA14 - OCOTP_FUSE_DATA14 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA14_OCOTP_FUSE_DATA14(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA14_OCOTP_FUSE_DATA14_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA14_OCOTP_FUSE_DATA14_MASK)
/*! @} */

/*! @name OCOTP_FUSE_DATA15 - Read-only version of OCOTP fusedata_mem_trim_cfg7 */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA15_OCOTP_FUSE_DATA15_MASK (0xFFFFFFFFU)
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA15_OCOTP_FUSE_DATA15_SHIFT (0U)
/*! OCOTP_FUSE_DATA15 - OCOTP_FUSE_DATA15 */
#define BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA15_OCOTP_FUSE_DATA15(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA15_OCOTP_FUSE_DATA15_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_FUSE_DATA15_OCOTP_FUSE_DATA15_MASK)
/*! @} */

/*! @name I3C1_WAKEUP - I3C1 WAKEUPX CLR */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_I3C1_WAKEUP_IRQ_CLR_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_I3C1_WAKEUP_IRQ_CLR_SHIFT (0U)
/*! irq_clr - Clear the interrupt of the i3c1 wakeup interrupt */
#define BLK_CTRL_NS_AONMIX_I3C1_WAKEUP_IRQ_CLR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_I3C1_WAKEUP_IRQ_CLR_SHIFT)) & BLK_CTRL_NS_AONMIX_I3C1_WAKEUP_IRQ_CLR_MASK)
/*! @} */

/*! @name OCOTP_STATUS - OCOTP status register */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_OCOTP_STATUS_BUSY_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_OCOTP_STATUS_BUSY_SHIFT (0U)
/*! busy - OCOTP controller busy bit
 *  0b0..Idle
 *  0b1..Busy
 */
#define BLK_CTRL_NS_AONMIX_OCOTP_STATUS_BUSY(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_OCOTP_STATUS_BUSY_SHIFT)) & BLK_CTRL_NS_AONMIX_OCOTP_STATUS_BUSY_MASK)
/*! @} */

/*! @name PDM_CLK_SEL - PDM clock selection register */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_PDM_CLK_SEL_SEL_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_PDM_CLK_SEL_SEL_SHIFT (0U)
/*! sel - Select source for pdm clock
 *  0b0..PDM root clock
 *  0b1..SAI1_MCLK
 */
#define BLK_CTRL_NS_AONMIX_PDM_CLK_SEL_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_PDM_CLK_SEL_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_PDM_CLK_SEL_SEL_MASK)
/*! @} */

/*! @name I3C1_SDA_IRQ - I3C1 SDA IRQ CONTROL BIT */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_I3C1_SDA_IRQ_ENABLE_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_I3C1_SDA_IRQ_ENABLE_SHIFT (0U)
/*! enable - IRQ enable bit
 *  0b0..I3C1 SDA IRQ disable
 *  0b1..I3C1 SDA IRQ enable
 */
#define BLK_CTRL_NS_AONMIX_I3C1_SDA_IRQ_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_I3C1_SDA_IRQ_ENABLE_SHIFT)) & BLK_CTRL_NS_AONMIX_I3C1_SDA_IRQ_ENABLE_MASK)
/*! @} */

/*! @name SSI - SSI master low power mode control */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_SSI_PAUSE_MODE_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_SSI_PAUSE_MODE_SHIFT (0U)
/*! PAUSE_MODE - AONMIX SSI master pause mode
 *  0b0..AONMIX SSI master is not in pause mode
 *  0b1..AONMIX SSI master is not in pause mode
 */
#define BLK_CTRL_NS_AONMIX_SSI_PAUSE_MODE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_SSI_PAUSE_MODE_SHIFT)) & BLK_CTRL_NS_AONMIX_SSI_PAUSE_MODE_MASK)

#define BLK_CTRL_NS_AONMIX_SSI_BLKHOLE_MODE_B_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_SSI_BLKHOLE_MODE_B_SHIFT (1U)
/*! BLKHOLE_MODE_B - AONMIX SSI master blackhole mode
 *  0b0..AONMIX SSI master will enter into blackhole mode
 *  0b1..AONMIX SSI master will exit from blackhole mode
 */
#define BLK_CTRL_NS_AONMIX_SSI_BLKHOLE_MODE_B(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_SSI_BLKHOLE_MODE_B_SHIFT)) & BLK_CTRL_NS_AONMIX_SSI_BLKHOLE_MODE_B_MASK)
/*! @} */

/*! @name FASTBOOT_ENABLE - fastboot enable */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_FASTBOOT_ENABLE_MASK (0x3U)
#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_FASTBOOT_ENABLE_SHIFT (0U)
/*! FASTBOOT_ENABLE - FASTBOOT_ENABLE bits */
#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_FASTBOOT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_FASTBOOT_ENABLE_SHIFT)) & BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_FASTBOOT_ENABLE_MASK)

#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_BP_FASTBOOT_ENABLE_MASK (0xCU)
#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_BP_FASTBOOT_ENABLE_SHIFT (2U)
/*! BP_FASTBOOT_ENABLE - BP_FASTBOOT_ENABLE bits */
#define BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_BP_FASTBOOT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_BP_FASTBOOT_ENABLE_SHIFT)) & BLK_CTRL_NS_AONMIX_FASTBOOT_ENABLE_BP_FASTBOOT_ENABLE_MASK)
/*! @} */

/*! @name MQS_SETTINGS - MQS settings */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_MQS_EN_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_MQS_EN_SHIFT (1U)
/*! MQS_EN - MQS Enable */
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_MQS_EN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_MQS_SETTINGS_MQS_EN_SHIFT)) & BLK_CTRL_NS_AONMIX_MQS_SETTINGS_MQS_EN_MASK)

#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_SOFT_RESET_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_SOFT_RESET_SHIFT (2U)
/*! SOFT_RESET - Software Reset */
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_SOFT_RESET(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_MQS_SETTINGS_SOFT_RESET_SHIFT)) & BLK_CTRL_NS_AONMIX_MQS_SETTINGS_SOFT_RESET_MASK)

#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_OVERSAMPLE_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_OVERSAMPLE_SHIFT (3U)
/*! OVERSAMPLE - Oversample enable */
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_OVERSAMPLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_MQS_SETTINGS_OVERSAMPLE_SHIFT)) & BLK_CTRL_NS_AONMIX_MQS_SETTINGS_OVERSAMPLE_MASK)

#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_CLK_DIVIDE_MASK (0xFF00U)
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_CLK_DIVIDE_SHIFT (8U)
/*! CLK_DIVIDE - clock divide factor configuration */
#define BLK_CTRL_NS_AONMIX_MQS_SETTINGS_CLK_DIVIDE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_MQS_SETTINGS_CLK_DIVIDE_SHIFT)) & BLK_CTRL_NS_AONMIX_MQS_SETTINGS_CLK_DIVIDE_MASK)
/*! @} */

/*! @name ELE_FW_PRESENT - ELE_FW_PRESENT */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_ELE_FW_PRESENT_ELE_FW_PRESENT_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_ELE_FW_PRESENT_ELE_FW_PRESENT_SHIFT (0U)
/*! ele_fw_present - ele_fw_present */
#define BLK_CTRL_NS_AONMIX_ELE_FW_PRESENT_ELE_FW_PRESENT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ELE_FW_PRESENT_ELE_FW_PRESENT_SHIFT)) & BLK_CTRL_NS_AONMIX_ELE_FW_PRESENT_ELE_FW_PRESENT_MASK)
/*! @} */

/*! @name AOMIX_SPARE_FUSE - Spare fuse register */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_AOMIX_SPARE_FUSE_SPARE_FUSE_MASK (0x3U)
#define BLK_CTRL_NS_AONMIX_AOMIX_SPARE_FUSE_SPARE_FUSE_SHIFT (0U)
/*! Spare_fuse - Read-only bit for Spare fuse */
#define BLK_CTRL_NS_AONMIX_AOMIX_SPARE_FUSE_SPARE_FUSE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AOMIX_SPARE_FUSE_SPARE_FUSE_SHIFT)) & BLK_CTRL_NS_AONMIX_AOMIX_SPARE_FUSE_SPARE_FUSE_MASK)
/*! @} */

/*! @name IPG_STOP_CTL - IPG_STOP control */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_CAN1_STOP_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_CAN1_STOP_SHIFT (0U)
/*! can1_stop - can1 ipg_stop control */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_CAN1_STOP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_CAN1_STOP_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_CAN1_STOP_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_EDMA1_STOP_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_EDMA1_STOP_SHIFT (1U)
/*! edma1_stop - edma1 ipg_stop control */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_EDMA1_STOP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_EDMA1_STOP_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_EDMA1_STOP_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_PDM_STOP_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_PDM_STOP_SHIFT (9U)
/*! pdm_stop - pdm ipg_stop control */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_PDM_STOP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_PDM_STOP_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_PDM_STOP_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM1_STOP_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM1_STOP_SHIFT (11U)
/*! tpm1_stop - tpm1 ipg_stop control */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM1_STOP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM1_STOP_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM1_STOP_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM2_STOP_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM2_STOP_SHIFT (12U)
/*! tpm2_stop - tpm2 ipg_stop control */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM2_STOP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM2_STOP_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_CTL_TPM2_STOP_MASK)
/*! @} */

/*! @name IPG_STOP_ACK_STATUS - IPG_STOP_ACK status */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_CAN1_STOP_ACK_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_CAN1_STOP_ACK_SHIFT (0U)
/*! can1_stop_ack - can1 ipg_stop_ack status */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_CAN1_STOP_ACK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_CAN1_STOP_ACK_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_CAN1_STOP_ACK_MASK)

#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_PDM_STOP_ACK_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_PDM_STOP_ACK_SHIFT (9U)
/*! pdm_stop_ack - pdm ipg_stop_ack status */
#define BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_PDM_STOP_ACK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_PDM_STOP_ACK_SHIFT)) & BLK_CTRL_NS_AONMIX_IPG_STOP_ACK_STATUS_PDM_STOP_ACK_MASK)
/*! @} */

/*! @name AONMIX_MISC - AONMIX_MISC */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_CA55_IDLE_MASK_NON_COOPERATIVE_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_CA55_IDLE_MASK_NON_COOPERATIVE_SHIFT (0U)
/*! CA55_Idle_mask_non_cooperative - Control bit for Non-cooperative A55 reset to mask idle and Quiescing signals */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_CA55_IDLE_MASK_NON_COOPERATIVE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_CA55_IDLE_MASK_NON_COOPERATIVE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_CA55_IDLE_MASK_NON_COOPERATIVE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C1_DOZE_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C1_DOZE_SHIFT (2U)
/*! lpi2c1_doze - lpi2c1 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C1_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C1_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C1_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C2_DOZE_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C2_DOZE_SHIFT (3U)
/*! lpi2c2_doze - lpi2c2 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C2_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C2_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPI2C2_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPIT1_DOZE_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPIT1_DOZE_SHIFT (4U)
/*! lpit1_doze - lpit1 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPIT1_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPIT1_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPIT1_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI1_DOZE_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI1_DOZE_SHIFT (5U)
/*! lpspi1_doze - lpspi1 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI1_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI1_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI1_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI2_DOZE_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI2_DOZE_SHIFT (6U)
/*! lpspi2_doze - lpspi2 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI2_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI2_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPSPI2_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART1_DOZE_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART1_DOZE_SHIFT (7U)
/*! lpuart1_doze - lpuart1 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART1_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART1_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART1_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART2_DOZE_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART2_DOZE_SHIFT (8U)
/*! lpuart2_doze - lpuart2 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART2_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART2_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_LPUART2_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_PDM_DOZE_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_PDM_DOZE_SHIFT (9U)
/*! pdm_doze - pdm doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_PDM_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_PDM_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_PDM_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM1_DOZE_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM1_DOZE_SHIFT (11U)
/*! tpm1_doze - tpm1 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM1_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM1_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM1_DOZE_MASK)

#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM2_DOZE_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM2_DOZE_SHIFT (12U)
/*! tpm2_doze - tpm2 doze control */
#define BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM2_DOZE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM2_DOZE_SHIFT)) & BLK_CTRL_NS_AONMIX_AONMIX_MISC_TPM2_DOZE_MASK)
/*! @} */

/*! @name QREQ_N - QREQ_N control */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C1_SHIFT (1U)
/*! lpi2c1 - lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C1(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C2_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C2_SHIFT (2U)
/*! lpi2c2 - lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C2(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI1_SHIFT (4U)
/*! lpspi1 - lpspi1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI1(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI2_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI2_SHIFT (5U)
/*! lpspi2 - lpspi2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI2(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART1_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART1_SHIFT (6U)
/*! lpuart1 - lpuart1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART2_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART2_SHIFT (7U)
/*! lpuart2 - lpuart2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C1_SHIFT (8U)
/*! ips_lpi2c1 - ips_lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C2_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C2_SHIFT (9U)
/*! ips_lpi2c2 - ips_lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_AHB_GPIO_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_AHB_GPIO_SHIFT (10U)
/*! ahb_gpio - ahb_gpio */
#define BLK_CTRL_NS_AONMIX_QREQ_N_AHB_GPIO(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_AHB_GPIO_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_AHB_GPIO_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI1_SHIFT (11U)
/*! ips_lpspi1 - ips_lpspi1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI2_SHIFT (12U)
/*! ips_lpspi2 - ips_lpspi2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_IPS_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART1_SHIFT (13U)
/*! apb_lpuart1 - apb_lpuart1 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART2_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART2_SHIFT (14U)
/*! apb_lpuart2 - apb_lpuart2 */
#define BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_APB_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_SAI_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_SAI_SHIFT (15U)
/*! ips_sai - ips_sai */
#define BLK_CTRL_NS_AONMIX_QREQ_N_IPS_SAI(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QREQ_N_IPS_SAI_SHIFT)) & BLK_CTRL_NS_AONMIX_QREQ_N_IPS_SAI_MASK)
/*! @} */

/*! @name SAI_MCLK - SAI1 MCLK control register */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_REQ_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_REQ_SHIFT (0U)
/*! sai_mclk_req - sai mclk request */
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_REQ(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_REQ_SHIFT)) & BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_REQ_MASK)

#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_ACK_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_ACK_SHIFT (1U)
/*! sai_mclk_ack - sai mclk acknowledge */
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_ACK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_ACK_SHIFT)) & BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_MCLK_ACK_MASK)

#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_QACTIVE_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_QACTIVE_SHIFT (2U)
/*! sai_qactive - sai qactive */
#define BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_QACTIVE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_QACTIVE_SHIFT)) & BLK_CTRL_NS_AONMIX_SAI_MCLK_SAI_QACTIVE_MASK)
/*! @} */

/*! @name QACTIVE - QACTIVE status */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C1_SHIFT (1U)
/*! lpi2c1 - lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C2_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C2_SHIFT (2U)
/*! lpi2c2 - lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI1_SHIFT (4U)
/*! lpspi1 - lpspi1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI2_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI2_SHIFT (5U)
/*! lpspi2 - lpspi2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART1_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART1_SHIFT (6U)
/*! lpuart1 - lpuart1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART2_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART2_SHIFT (7U)
/*! lpuart2 - lpuart2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C1_SHIFT (8U)
/*! ips_lpi2c1 - ips_lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C2_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C2_SHIFT (9U)
/*! ips_lpi2c2 - ips_lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_AHB_GPIO_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_AHB_GPIO_SHIFT (10U)
/*! ahb_gpio - ahb_gpio */
#define BLK_CTRL_NS_AONMIX_QACTIVE_AHB_GPIO(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_AHB_GPIO_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_AHB_GPIO_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI1_SHIFT (11U)
/*! ips_lpspi1 - ips_lpspi1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI2_SHIFT (12U)
/*! ips_lpspi2 - ips_lpspi2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_IPS_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART1_SHIFT (13U)
/*! apb_lpuart1 - apb_lpuart1 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART2_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART2_SHIFT (14U)
/*! apb_lpuart2 - apb_lpuart2 */
#define BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_APB_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_SAI_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_SAI_SHIFT (15U)
/*! ips_sai - ips_sai */
#define BLK_CTRL_NS_AONMIX_QACTIVE_IPS_SAI(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACTIVE_IPS_SAI_SHIFT)) & BLK_CTRL_NS_AONMIX_QACTIVE_IPS_SAI_MASK)
/*! @} */

/*! @name QDENY - QDENY status */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C1_SHIFT (1U)
/*! lpi2c1 - lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C1(x)   (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C2_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C2_SHIFT (2U)
/*! lpi2c2 - lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPI2C2(x)   (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI1_SHIFT (4U)
/*! lpspi1 - lpspi1 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI1(x)   (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI2_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI2_SHIFT (5U)
/*! lpspi2 - lpspi2 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPSPI2(x)   (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QDENY_LPUART1_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPUART1_SHIFT (6U)
/*! lpuart1 - lpuart1 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPUART1(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QDENY_LPUART2_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_QDENY_LPUART2_SHIFT (7U)
/*! lpuart2 - lpuart2 */
#define BLK_CTRL_NS_AONMIX_QDENY_LPUART2(x)  (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QDENY_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QDENY_LPUART2_MASK)
/*! @} */

/*! @name QACCEPT_N - QACCEPT_N status */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C1_SHIFT (1U)
/*! lpi2c1 - lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C2_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C2_SHIFT (2U)
/*! lpi2c2 - lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI1_SHIFT (4U)
/*! lpspi1 - lpspi1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI2_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI2_SHIFT (5U)
/*! lpspi2 - lpspi2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART1_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART1_SHIFT (6U)
/*! lpuart1 - lpuart1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART2_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART2_SHIFT (7U)
/*! lpuart2 - lpuart2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C1_SHIFT (8U)
/*! ips_lpi2c1 - ips_lpi2c1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C2_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C2_SHIFT (9U)
/*! ips_lpi2c2 - ips_lpi2c2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_AHB_GPIO_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_AHB_GPIO_SHIFT (10U)
/*! ahb_gpio - ahb_gpio */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_AHB_GPIO(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_AHB_GPIO_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_AHB_GPIO_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI1_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI1_SHIFT (11U)
/*! ips_lpspi1 - ips_lpspi1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI2_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI2_SHIFT (12U)
/*! ips_lpspi2 - ips_lpspi2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART1_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART1_SHIFT (13U)
/*! apb_lpuart1 - apb_lpuart1 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART2_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART2_SHIFT (14U)
/*! apb_lpuart2 - apb_lpuart2 */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_APB_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_SAI_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_SAI_SHIFT (15U)
/*! ips_sai - ips_sai */
#define BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_SAI(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_SAI_SHIFT)) & BLK_CTRL_NS_AONMIX_QACCEPT_N_IPS_SAI_MASK)
/*! @} */

/*! @name ADC_TRIG - ADC trigger */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_ENABLE_MASK (0x3U)
#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_ENABLE_SHIFT (0U)
/*! trg_enable - trg_enable */
#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_ENABLE_SHIFT)) & BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_ENABLE_MASK)

#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_NEG_SEL_MASK (0xCU)
#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_NEG_SEL_SHIFT (2U)
/*! trg_neg_sel - trg_neg_sel */
#define BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_NEG_SEL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_NEG_SEL_SHIFT)) & BLK_CTRL_NS_AONMIX_ADC_TRIG_TRG_NEG_SEL_MASK)
/*! @} */

/*! @name FORCE_ON_OFF - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_SHIFT (0U)
/*! imx95_ipc_clk_SYSDOM_m33_clk - imx95_ipc_clk_SYSDOM_m33_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SHIFT (1U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk - sel_imx95_ipc_clk_SYSDOM_m33_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_SHIFT (2U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch - imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_SHIFT (3U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch - sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_SHIFT (4U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_gpio_qch - imx95_ipc_clk_SYSDOM_m33_clk_gpio_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_SHIFT (5U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_gpio_qch - sel_imx95_ipc_clk_SYSDOM_m33_clk_gpio_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_GPIO_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_SHIFT (6U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch_cm33_reset - imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch_cm33_reset */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_SHIFT (7U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch_cm33_reset - sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_qch_cm33_reset */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_QCH_CM33_RESET_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_SHIFT (10U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_cm33_mcm - imx95_ipc_clk_SYSDOM_m33_clk_cm33_mcm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_SHIFT (11U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_mcm - sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_mcm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_MCM_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SHIFT (12U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk - imx95_ipc_clk_SYSDOM_bus_aon_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SHIFT (13U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_SHIFT (14U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_pdm - imx95_ipc_clk_SYSDOM_bus_aon_clk_pdm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_SHIFT (15U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_pdm - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_pdm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_PDM_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_SHIFT (16U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_SHIFT (17U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_SHIFT (18U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart2 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_SHIFT (19U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart2 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpuart2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPUART2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_SHIFT (20U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_SHIFT (21U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_SHIFT (22U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi2 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_SHIFT (23U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi2 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpspi2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPSPI2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_MASK (0x1000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_SHIFT (24U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_MASK (0x2000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_SHIFT (25U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_MASK (0x4000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_SHIFT (26U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c2 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_MASK (0x8000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_SHIFT (27U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c2 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpi2c2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPI2C2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_SHIFT (28U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lpit1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lpit1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_SHIFT (29U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpit1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lpit1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPIT1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_SHIFT (30U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_SHIFT (31U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM1_MASK)
/*! @} */

/*! @name FORCE_ON_OFF_1 - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_SHIFT (0U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm2 - imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_SHIFT (1U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm2 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptpm2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTPM2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_SHIFT (4U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_can1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_can1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_SHIFT (5U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_can1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_can1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_CAN1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_SHIFT (6U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_SHIFT (7U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_SHIFT (8U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog2 - imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_SHIFT (9U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog2 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_SHIFT (10U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_sai - imx95_ipc_clk_SYSDOM_bus_aon_clk_sai */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_SHIFT (11U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sai - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sai */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAI_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_SHIFT (16U)
/*! imx95_ipc_clk_ASYNCDOM_lpi2c1_clk_qch - imx95_ipc_clk_ASYNCDOM_lpi2c1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_SHIFT (17U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpi2c1_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpi2c1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_SHIFT (18U)
/*! imx95_ipc_clk_ASYNCDOM_lpi2c2_clk_qch - imx95_ipc_clk_ASYNCDOM_lpi2c2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_SHIFT (19U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpi2c2_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpi2c2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPI2C2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_SHIFT (20U)
/*! imx95_ipc_clk_ASYNCDOM_lpspi1_clk_qch - imx95_ipc_clk_ASYNCDOM_lpspi1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_SHIFT (21U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpspi1_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpspi1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_SHIFT (22U)
/*! imx95_ipc_clk_ASYNCDOM_lpspi2_clk_qch - imx95_ipc_clk_ASYNCDOM_lpspi2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_SHIFT (23U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpspi2_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpspi2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPSPI2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_MASK (0x1000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_SHIFT (24U)
/*! imx95_ipc_clk_ASYNCDOM_lpuart2_clk_qch - imx95_ipc_clk_ASYNCDOM_lpuart2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_MASK (0x2000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_SHIFT (25U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpuart2_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpuart2_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART2_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_MASK (0x4000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_SHIFT (26U)
/*! imx95_ipc_clk_ASYNCDOM_lpuart1_clk_qch - imx95_ipc_clk_ASYNCDOM_lpuart1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_MASK (0x8000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_SHIFT (27U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lpuart1_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_lpuart1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_LPUART1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_SHIFT (28U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_qch - imx95_ipc_clk_ASYNCDOM_pdm_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_SHIFT (29U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_SHIFT (30U)
/*! imx95_ipc_clk_ASYNCDOM_can1_clk_qch - imx95_ipc_clk_ASYNCDOM_can1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_SHIFT (31U)
/*! sel_imx95_ipc_clk_ASYNCDOM_can1_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_can1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_1_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_QCH_MASK)
/*! @} */

/*! @name FORCE_ON_OFF_2 - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_SHIFT (0U)
/*! imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm1 - imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_SHIFT (1U)
/*! sel_imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm1 - sel_imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_SHIFT (2U)
/*! imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm2 - imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_SHIFT (3U)
/*! sel_imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm2 - sel_imx95_ipc_clk_ASYNCDOM_tpm2_clk_qch_tpm2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TPM2_CLK_QCH_TPM2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_SHIFT (4U)
/*! imx94_ipc_clk_ASYNCDOM_gpt1_clk_qch - imx94_ipc_clk_ASYNCDOM_gpt1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_SHIFT (5U)
/*! sel_imx94_ipc_clk_ASYNCDOM_gpt1_clk_qch - sel_imx94_ipc_clk_ASYNCDOM_gpt1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GPT1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_SHIFT (6U)
/*! imx94_ipc_clk_ASYNCDOM_glitch_filter_clk_qch - imx94_ipc_clk_ASYNCDOM_glitch_filter_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_SHIFT (7U)
/*! sel_imx94_ipc_clk_ASYNCDOM_glitch_filter_clk_qch - sel_imx94_ipc_clk_ASYNCDOM_glitch_filter_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX94_IPC_CLK_ASYNCDOM_GLITCH_FILTER_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_LPCG_NPUMIX_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_LPCG_NPUMIX_SHIFT (8U)
/*! lpcg_npumix - lpcg_npumix */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_LPCG_NPUMIX(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_LPCG_NPUMIX_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_LPCG_NPUMIX_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_LPCG_NPUMIX_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_LPCG_NPUMIX_SHIFT (9U)
/*! sel_lpcg_npumix - sel_lpcg_npumix */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_LPCG_NPUMIX(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_LPCG_NPUMIX_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_LPCG_NPUMIX_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_SHIFT (10U)
/*! imx95_ipc_clk_ASYNCDOM_sai1_clk_qch - imx95_ipc_clk_ASYNCDOM_sai1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_SHIFT (11U)
/*! sel_imx95_ipc_clk_ASYNCDOM_sai1_clk_qch - sel_imx95_ipc_clk_ASYNCDOM_sai1_clk_qch */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_SAI1_CLK_QCH_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_MST_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_MST_SHIFT (12U)
/*! imx95_ipc_clk_ssi_SSIQCH_mst - imx95_ipc_clk_ssi_SSIQCH_mst */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_MST(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_MST_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_MST_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_MST_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_MST_SHIFT (13U)
/*! sel_imx95_ipc_clk_ssi_SSIQCH_mst - sel_imx95_ipc_clk_ssi_SSIQCH_mst */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_MST(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_MST_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_MST_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_SLV_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_SLV_SHIFT (14U)
/*! imx95_ipc_clk_ssi_SSIQCH_slv - imx95_ipc_clk_ssi_SSIQCH_slv */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_SLV(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_SLV_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SSI_SSIQCH_SLV_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_SLV_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_SLV_SHIFT (15U)
/*! sel_imx95_ipc_clk_ssi_SSIQCH_slv - sel_imx95_ipc_clk_ssi_SSIQCH_slv */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_SLV(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_SLV_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SSI_SSIQCH_SLV_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_EDMA1_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_EDMA1_SHIFT (16U)
/*! imx95_ipc_clk_edma1 - imx95_ipc_clk_edma1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_EDMA1_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_EDMA1_SHIFT (17U)
/*! sel_imx95_ipc_clk_edma1 - sel_imx95_ipc_clk_edma1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_EDMA1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_EDMA1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_EDMA1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_SHIFT (18U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_aips1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_aips1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_SHIFT (19U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_aips1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_aips1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_AIPS1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_SHIFT (20U)
/*! imx95_ipc_clk_ASYNCDOM_tstmr1_clk - imx95_ipc_clk_ASYNCDOM_tstmr1_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_SHIFT (21U)
/*! sel_imx95_ipc_clk_ASYNCDOM_tstmr1_clk - sel_imx95_ipc_clk_ASYNCDOM_tstmr1_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_ASYNCDOM_TSTMR1_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_SHIFT (22U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_aips1 - imx95_ipc_clk_SYSDOM_m33_clk_aips1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_SHIFT (23U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_aips1 - sel_imx95_ipc_clk_SYSDOM_m33_clk_aips1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_AIPS1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_SHIFT (28U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_infra - imx95_ipc_clk_SYSDOM_m33_clk_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_SHIFT (29U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_infra - sel_imx95_ipc_clk_SYSDOM_m33_clk_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_INFRA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_SHIFT (30U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_m33_infra - imx95_ipc_clk_SYSDOM_m33_clk_m33_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_SHIFT (31U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_m33_infra - sel_imx95_ipc_clk_SYSDOM_m33_clk_m33_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_2_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_M33_INFRA_MASK)
/*! @} */

/*! @name ECC_ERROR - ECC error clear and enable */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_CLR_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_CLR_SHIFT (0U)
/*! cm33_tcm_code_single_error_clr - cm33_tcm_code_single_error_clr */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_CLR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_CLR_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_CLR_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_EN_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_EN_SHIFT (1U)
/*! cm33_tcm_code_single_error_en - cm33_tcm_code_single_error_en */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_EN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_EN_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_SINGLE_ERROR_EN_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_CLR_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_CLR_SHIFT (2U)
/*! cm33_tcm_code_multi_error_clr - cm33_tcm_code_multi_error_clr */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_CLR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_CLR_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_CLR_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_EN_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_EN_SHIFT (3U)
/*! cm33_tcm_code_multi_error_en - cm33_tcm_code_multi_error_en */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_EN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_EN_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_CODE_MULTI_ERROR_EN_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_CLR_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_CLR_SHIFT (4U)
/*! cm33_tcm_sys_single_error_clr - cm33_tcm_sys_single_error_clr */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_CLR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_CLR_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_CLR_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_EN_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_EN_SHIFT (5U)
/*! cm33_tcm_sys_single_error_en - cm33_tcm_sys_single_error_en */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_EN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_EN_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_SINGLE_ERROR_EN_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_CLR_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_CLR_SHIFT (6U)
/*! cm33_tcm_sys_multi_error_clr - cm33_tcm_sys_multi_error_clr */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_CLR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_CLR_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_CLR_MASK)

#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_EN_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_EN_SHIFT (7U)
/*! cm33_tcm_sys_multi_error_en - cm33_tcm_sys_multi_error_en */
#define BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_EN(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_EN_SHIFT)) & BLK_CTRL_NS_AONMIX_ECC_ERROR_CM33_TCM_SYS_MULTI_ERROR_EN_MASK)
/*! @} */

/*! @name FORCE_ON_OFF_3 - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_SHIFT (0U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_mtr - imx95_ipc_clk_ASYNCDOM_pdm_clk_mtr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_SHIFT (1U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_mtr - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_mtr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_MTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_SHIFT (2U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_1 - imx95_ipc_clk_SYSDOM_bus_aon_clk_1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_SHIFT (3U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_1 - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_SHIFT (4U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_edma - imx95_ipc_clk_SYSDOM_bus_aon_clk_edma */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_SHIFT (5U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_edma - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_edma */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_EDMA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_SHIFT (6U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_fccu - imx95_ipc_clk_SYSDOM_bus_aon_clk_fccu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_SHIFT (7U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_fccu - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_fccu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_FCCU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_SHIFT (8U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_gpt - imx95_ipc_clk_SYSDOM_bus_aon_clk_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_SHIFT (9U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_gpt - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GPT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_SHIFT (10U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_gf - imx95_ipc_clk_SYSDOM_bus_aon_clk_gf */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_SHIFT (11U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_gf - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_gf */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_GF_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_SHIFT (12U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_i3c - imx95_ipc_clk_SYSDOM_bus_aon_clk_i3c */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_SHIFT (13U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_i3c - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_i3c */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_I3C_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_SHIFT (14U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_infra - imx95_ipc_clk_SYSDOM_bus_aon_clk_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_SHIFT (15U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_infra - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_infra */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_INFRA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_SHIFT (16U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_iomux - imx95_ipc_clk_SYSDOM_bus_aon_clk_iomux */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_SHIFT (17U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_iomux - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_iomux */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_IOMUX_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_SHIFT (18U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_lptmr - imx95_ipc_clk_SYSDOM_bus_aon_clk_lptmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_SHIFT (19U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptmr - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_lptmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_LPTMR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_SHIFT (20U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_romcp - imx95_ipc_clk_SYSDOM_bus_aon_clk_romcp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_SHIFT (21U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_romcp - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_romcp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_ROMCP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_SHIFT (22U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_safety - imx95_ipc_clk_SYSDOM_bus_aon_clk_safety */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_SHIFT (23U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_safety - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_safety */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SAFETY_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_MASK (0x1000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_SHIFT (24U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_sema - imx95_ipc_clk_SYSDOM_bus_aon_clk_sema */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_MASK (0x2000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_SHIFT (25U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sema - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sema */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SEMA_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_MASK (0x4000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_SHIFT (26U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_stcu - imx95_ipc_clk_SYSDOM_bus_aon_clk_stcu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_MASK (0x8000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_SHIFT (27U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_stcu - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_stcu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_STCU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_SHIFT (28U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_sys_ctr - imx95_ipc_clk_SYSDOM_bus_aon_clk_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_SHIFT (29U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sys_ctr - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_SHIFT (30U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_tstmr - imx95_ipc_clk_SYSDOM_bus_aon_clk_tstmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_SHIFT (31U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_tstmr - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_tstmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_3_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_TSTMR_MASK)
/*! @} */

/*! @name FORCE_ON_OFF_4 - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_SHIFT (0U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_romcp - imx95_ipc_clk_SYSDOM_m33_clk_romcp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_SHIFT (1U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_romcp - sel_imx95_ipc_clk_SYSDOM_m33_clk_romcp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_ROMCP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_MASK (0x4U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_SHIFT (2U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_safety - imx95_ipc_clk_SYSDOM_m33_clk_safety */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_MASK (0x8U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_SHIFT (3U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_safety - sel_imx95_ipc_clk_SYSDOM_m33_clk_safety */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_SAFETY_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_SHIFT (4U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_cm33_1 - imx95_ipc_clk_SYSDOM_m33_clk_cm33_1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_SHIFT (5U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_1 - sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_SHIFT (6U)
/*! imx95_ipc_clk_ASYNCDOM_32k_gpt - imx95_ipc_clk_ASYNCDOM_32k_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_SHIFT (7U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_gpt - sel_imx95_ipc_clk_ASYNCDOM_32k_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_GPT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_SHIFT (8U)
/*! imx95_ipc_clk_ASYNCDOM_32k_lptmr - imx95_ipc_clk_ASYNCDOM_32k_lptmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_SHIFT (9U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_lptmr - sel_imx95_ipc_clk_ASYNCDOM_32k_lptmr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_LPTMR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_SHIFT (10U)
/*! imx95_ipc_clk_ASYNCDOM_32k_ele - imx95_ipc_clk_ASYNCDOM_32k_ele */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_ELE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_SHIFT (11U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_ele - sel_imx95_ipc_clk_ASYNCDOM_32k_ele */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_ELE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_ELE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_SHIFT (12U)
/*! imx95_ipc_clk_ASYNCDOM_32k_sys_ctr - imx95_ipc_clk_ASYNCDOM_32k_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_SHIFT (13U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_sys_ctr - sel_imx95_ipc_clk_ASYNCDOM_32k_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_SHIFT (14U)
/*! imx95_ipc_clk_ASYNCDOM_32k_wdog1 - imx95_ipc_clk_ASYNCDOM_32k_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_SHIFT (15U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_wdog1 - sel_imx95_ipc_clk_ASYNCDOM_32k_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_SHIFT (16U)
/*! imx95_ipc_clk_ASYNCDOM_32k_wdog2 - imx95_ipc_clk_ASYNCDOM_32k_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_SHIFT (17U)
/*! sel_imx95_ipc_clk_ASYNCDOM_32k_wdog2 - sel_imx95_ipc_clk_ASYNCDOM_32k_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_32K_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_SHIFT (18U)
/*! imx95_ipc_clk_ASYNCDOM_can1_clk_osc_clk - imx95_ipc_clk_ASYNCDOM_can1_clk_osc_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_SHIFT (19U)
/*! sel_imx95_ipc_clk_ASYNCDOM_can1_clk_osc_clk - sel_imx95_ipc_clk_ASYNCDOM_can1_clk_osc_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_CAN1_CLK_OSC_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_SHIFT (20U)
/*! imx95_ipc_clk_ASYNCDOM_i3c1_slow - imx95_ipc_clk_ASYNCDOM_i3c1_slow */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_SHIFT (21U)
/*! sel_imx95_ipc_clk_ASYNCDOM_i3c1_slow - sel_imx95_ipc_clk_ASYNCDOM_i3c1_slow */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_I3C1_SLOW_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_SHIFT (22U)
/*! imx95_ipc_clk_ASYNCDOM_lptmr1_clk - imx95_ipc_clk_ASYNCDOM_lptmr1_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_SHIFT (23U)
/*! sel_imx95_ipc_clk_ASYNCDOM_lptmr1_clk - sel_imx95_ipc_clk_ASYNCDOM_lptmr1_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_LPTMR1_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_MASK (0x1000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_SHIFT (24U)
/*! imx95_ipc_clk_ASYNCDOM_m33_systick_clk - imx95_ipc_clk_ASYNCDOM_m33_systick_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_MASK (0x2000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_SHIFT (25U)
/*! sel_imx95_ipc_clk_ASYNCDOM_m33_systick_clk - sel_imx95_ipc_clk_ASYNCDOM_m33_systick_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_M33_SYSTICK_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_MASK (0x4000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SHIFT (26U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz - imx95_ipc_clk_ASYNCDOM_osc24mhz */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_MASK (0x8000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SHIFT (27U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_SHIFT (28U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_cmu - imx95_ipc_clk_ASYNCDOM_osc24mhz_cmu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_SHIFT (29U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_cmu - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_cmu */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_CMU_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_SHIFT (30U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_gpt - imx95_ipc_clk_ASYNCDOM_osc24mhz_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_SHIFT (31U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_gpt - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_gpt */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_4_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_GPT_MASK)
/*! @} */

/*! @name FORCE_ON_OFF_5 - force_on_off and force_on_off_sel for IPCs */
/*! @{ */

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_MASK (0x1U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_SHIFT (0U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_lp_hdsk - imx95_ipc_clk_ASYNCDOM_osc24mhz_lp_hdsk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_MASK (0x2U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_SHIFT (1U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_lp_hdsk - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_lp_hdsk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_LP_HDSK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_MASK (0x10U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_SHIFT (4U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_sys_ctr - imx95_ipc_clk_ASYNCDOM_osc24mhz_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_MASK (0x20U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_SHIFT (5U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_sys_ctr - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_sys_ctr */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_SYS_CTR_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_MASK (0x40U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_SHIFT (6U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_trout - imx95_ipc_clk_ASYNCDOM_osc24mhz_trout */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_MASK (0x80U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_SHIFT (7U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_trout - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_trout */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_TROUT_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_MASK (0x100U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_SHIFT (8U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog1 - imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_MASK (0x200U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_SHIFT (9U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog1 - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog1 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG1_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_MASK (0x400U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_SHIFT (10U)
/*! imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog2 - imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_MASK (0x800U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_SHIFT (11U)
/*! sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog2 - sel_imx95_ipc_clk_ASYNCDOM_osc24mhz_wdog2 */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_OSC24MHZ_WDOG2_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_MASK (0x1000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_SHIFT (12U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_app - imx95_ipc_clk_ASYNCDOM_pdm_clk_app */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_MASK (0x2000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_SHIFT (13U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_app - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_app */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_MASK (0x4000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_SHIFT (14U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_app_free - imx95_ipc_clk_ASYNCDOM_pdm_clk_app_free */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_MASK (0x8000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_SHIFT (15U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_app_free - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_app_free */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_APP_FREE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_MASK (0x10000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_SHIFT (16U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil - imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_MASK (0x20000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_SHIFT (17U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_MASK (0x40000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_SHIFT (18U)
/*! imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil_free - imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil_free */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_MASK (0x80000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_SHIFT (19U)
/*! sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil_free - sel_imx95_ipc_clk_ASYNCDOM_pdm_clk_decfil_free */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_ASYNCDOM_PDM_CLK_DECFIL_FREE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_MASK (0x100000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_SHIFT (20U)
/*! imx95_ipc_clk_BUSDOM_pdm_clk_cg - imx95_ipc_clk_BUSDOM_pdm_clk_cg */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_MASK (0x200000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_SHIFT (21U)
/*! sel_imx95_ipc_clk_BUSDOM_pdm_clk_cg - sel_imx95_ipc_clk_BUSDOM_pdm_clk_cg */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_BUSDOM_PDM_CLK_CG_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SAFEDOM_SAFE_MASK (0x400000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SAFEDOM_SAFE_SHIFT (22U)
/*! imx95_ipc_clk_SAFEDOM_SAFE - imx95_ipc_clk_SAFEDOM_SAFE */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SAFEDOM_SAFE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SAFEDOM_SAFE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SAFEDOM_SAFE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SAFEDOM_SAFE_MASK (0x800000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SAFEDOM_SAFE_SHIFT (23U)
/*! sel_imx95_ipc_clk_SAFEDOM_SAFE - sel_imx95_ipc_clk_SAFEDOM_SAFE */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SAFEDOM_SAFE(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SAFEDOM_SAFE_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SAFEDOM_SAFE_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_MASK (0x1000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_SHIFT (24U)
/*! imx95_ipc_clk_SYSDOM_bus_aon_clk_blk_ctrl - imx95_ipc_clk_SYSDOM_bus_aon_clk_blk_ctrl */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_MASK (0x2000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_SHIFT (25U)
/*! sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_blk_ctrl - sel_imx95_ipc_clk_SYSDOM_bus_aon_clk_blk_ctrl */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_BUS_AON_CLK_BLK_CTRL_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_MASK (0x4000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_SHIFT (26U)
/*! imx95_ipc_clk_SYSDOM_m33_gated_clk - imx95_ipc_clk_SYSDOM_m33_gated_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_MASK (0x8000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_SHIFT (27U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_gated_clk - sel_imx95_ipc_clk_SYSDOM_m33_gated_clk */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_MASK (0x10000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_SHIFT (28U)
/*! imx95_ipc_clk_SYSDOM_m33_gated_clk_lp - imx95_ipc_clk_SYSDOM_m33_gated_clk_lp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_MASK (0x20000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_SHIFT (29U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_gated_clk_lp - sel_imx95_ipc_clk_SYSDOM_m33_gated_clk_lp */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_GATED_CLK_LP_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_MASK (0x40000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_SHIFT (30U)
/*! imx95_ipc_clk_SYSDOM_m33_clk_cm33_tcm - imx95_ipc_clk_SYSDOM_m33_clk_cm33_tcm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_MASK)

#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_MASK (0x80000000U)
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_SHIFT (31U)
/*! sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_tcm - sel_imx95_ipc_clk_SYSDOM_m33_clk_cm33_tcm */
#define BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM(x) (((uint32_t)(((uint32_t)(x)) << BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_SHIFT)) & BLK_CTRL_NS_AONMIX_FORCE_ON_OFF_5_SEL_IMX95_IPC_CLK_SYSDOM_M33_CLK_CM33_TCM_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group BLK_CTRL_NS_AONMIX_Register_Masks */


/* BLK_CTRL_NS_AONMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BLK_CTRL_NS_AONMIX base address */
  #define BLK_CTRL_NS_AONMIX_BASE                  (0x54210000u)
  /** Peripheral BLK_CTRL_NS_AONMIX base address */
  #define BLK_CTRL_NS_AONMIX_BASE_NS               (0x44210000u)
  /** Peripheral BLK_CTRL_NS_AONMIX base pointer */
  #define BLK_CTRL_NS_AONMIX                       ((BLK_CTRL_NS_AONMIX_Type *)BLK_CTRL_NS_AONMIX_BASE)
  /** Peripheral BLK_CTRL_NS_AONMIX base pointer */
  #define BLK_CTRL_NS_AONMIX_NS                    ((BLK_CTRL_NS_AONMIX_Type *)BLK_CTRL_NS_AONMIX_BASE_NS)
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define BLK_CTRL_NS_AONMIX_BASE_ADDRS            { BLK_CTRL_NS_AONMIX_BASE }
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define BLK_CTRL_NS_AONMIX_BASE_PTRS             { BLK_CTRL_NS_AONMIX }
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define BLK_CTRL_NS_AONMIX_BASE_ADDRS_NS         { BLK_CTRL_NS_AONMIX_BASE_NS }
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define BLK_CTRL_NS_AONMIX_BASE_PTRS_NS          { BLK_CTRL_NS_AONMIX_NS }
#else
  /** Peripheral BLK_CTRL_NS_AONMIX base address */
  #define BLK_CTRL_NS_AONMIX_BASE                  (0x44210000u)
  /** Peripheral BLK_CTRL_NS_AONMIX base pointer */
  #define BLK_CTRL_NS_AONMIX                       ((BLK_CTRL_NS_AONMIX_Type *)BLK_CTRL_NS_AONMIX_BASE)
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define BLK_CTRL_NS_AONMIX_BASE_ADDRS            { BLK_CTRL_NS_AONMIX_BASE }
  /** Array initializer of BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define BLK_CTRL_NS_AONMIX_BASE_PTRS             { BLK_CTRL_NS_AONMIX }
#endif

/*!
 * @}
 */ /* end of group BLK_CTRL_NS_AONMIX_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX9494_BLK_CTRL_NS_AONMIX_H_) */
