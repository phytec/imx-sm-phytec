/**************************************************************************
 * FILE NAME: SafetyBase_MIMX95XX_SAF.h                                   *
 * REVISION:  1.0                                                         *
 *                                                                        *
 * DESCRIPTION:                                                           *
 * This file contains all of the register and bit field definitions for   *
 * the ip_params_top.                                                     *
 *========================================================================*
 * UPDATE HISTORY                                                         *
 * REV      AUTHOR      DATE       DESCRIPTION OF CHANGE                  *
 * ---   -----------  ---------    ---------------------                  *
 * 0       nxf85805   01-Sep-2023  Initial revision                       *
 * 1       nxf85804   09-Jan-2024  Changes for EAR 0.8.0 release          *
 * 2       nxa16961   16-Feb-2024  Added SCB module section               *
 * 3       nxa16961   22-Feb-2024  Added SysTick core registers           *
 * 4       nxf84805   13-Mar-2024  Added EIM, SRAM, DDR registers         *
 * 5       nxf84805   13-Mar-2024  Added ERM registers                    *
 * 6       nxf84805   08-Apr-2024  Added LSCTU registers                  *
 * 7       nxa16961   14-Jun-2024  Added remaining CMU_FC instances       *
 * 8       nxf85804   19-Jun-2024  Added manually created structure       *
 *                                 SAFETYBASE_VFCCU_tag                   *
 * 9       nxa16961   27-Jun-2024  Added FlexNOC registers                *
 * 10      nxf94087   22-Jul-2024  Added NVIC registers                   *
 * 11      nxg02984   01-Oct-2024  Added MPU FEENV registers              *
 * 12      nxa16961   09-Oct-2024  Added TRDC registers                   *
 * 13      nxg08785   11-Oct-2024  Added WAKEUP_ERM registers             *
 *                                 Added WAKEUP_EDMA5_TCD registers       *
 * 14      nxg02984   15-Oct-2024  Added MPU SEENV registers              *
 * 15      nxf85804   24-Oct-2024  Added general structure for all CMU    *
 *                                 instances                              *
 * 16      nxg02984   28-Nov-2024  Added new macros for CMU instances     *
 * 17      nxa16961   04-Dec-2024  Added new TRDC structure               *
 * 18      nxg08785   25-Nov-2024  Added NPU_ERM registers                *
 * 19      nxf49771   11-Feb-2025  Clean up structure usage for each env  *
 * 20      nxa16961   18-Feb-2025  Update TRDC structure                  *
 * 21      nxf49771   03-Mar-2025  Update AON and M7 ERM structure        *
 *========================================================================*
 * Copyright 2023-2025 NXP                                                *
 * Detailed license terms of software usage can be found in the           *
 * license.txt file located in the root folder of this package.           *
 *                                                                        *
 **************************************************************************/
/*>>>>>>> NOTE! this file is auto-generated please do not edit it! <<<<<<<*/

/**************************************************************************
 * Example register & bit field write:                                    *
 *                                                                        *
 *  <MODULE>.<REGISTER>.B.<BIT> = 1;                                      *
 *  <MODULE>.<REGISTER>.R       = 0x10000000;                             *
 *                                                                        *
 **************************************************************************/

#ifndef _SafetyBase_MIMX95XX_SAF_H_
#define _SafetyBase_MIMX95XX_SAF_H_
#include "Std_Types.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif
#ifdef __ghs__
#pragma ghs nowarning 618
#endif
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma pack(push,1)
#endif

#include "SafetyBase_Cfg.h"

/*=============================================================================
*                               DEFINES AND MACROS
===============================================================================*/
#if SAFETY_BASE_MIMX95XX

/* SCB */
#define SCB_BFSR_PRECISERR_MASK     (0x02U)
#define SCB_BFSR_IMPRECISERR_MASK   (0x04U)
#define SCB_BFSR_BFARVALID_MASK     (0x80U)

/* EIM */
#define EIM_EICHD_WORDS_PER_CHANNEL (9U)                /* Maximum number ofWords per Error Injection Channel */
#define EIM_CHANNELS_COUNT          (32U)               /* Number of Error Injection Channels */

/* NVIC */
#define NVIC_BASEADDR                          (0xE000E100UL)
#define NVIC_ISER_OFFSET(id)                   ((uint8)((id >> 5) << 2))
#define NVIC_ICER_OFFSET(id)                   ((0x80UL + (uint8)((id >> 5) << 2)))
#define NVIC_FCCU_IRQ0                         (210UL)
#define NVIC_FCCU_IRQ1                         (211UL)
#define NVIC_FCCU_IRQ2                         (212UL)
#define NVIC_FCCU_IRQ0_MASK                    (1UL << (NVIC_FCCU_IRQ0 % 32UL))
#define NVIC_FCCU_IRQ1_MASK                    (1UL << (NVIC_FCCU_IRQ1 % 32UL))
#define NVIC_FCCU_IRQ2_MASK                    (1UL << (NVIC_FCCU_IRQ2 % 32UL))
#define NVIC_FCCU_IRQ_MASKS                    (NVIC_FCCU_IRQ0_MASK |\
                                                NVIC_FCCU_IRQ1_MASK |\
                                                NVIC_FCCU_IRQ2_MASK)
#define NVIC_ISER_FCCU_IRQ_ADDR                (NVIC_BASEADDR + NVIC_ISER_OFFSET(NVIC_FCCU_IRQ0))
#define NVIC_ICER_FCCU_IRQ_ADDR                (NVIC_BASEADDR + NVIC_ICER_OFFSET(NVIC_FCCU_IRQ0))

#define TRDC_MASTERS_MAX_NUM            (64U)
#define TRDC_MDA_MAX_NUM                (8U)
#define TRDC_MRC_MAX_NUM                (3U)
#define TRDC_MBC_MAX_NUM                (5U)
#define TRDC_DOMAINS_MAX_NUM            (16U)
#define TRDC_DERR_MAX_NUM               (16U)

/* ============================================================================
   =============================== Module: CMU ================================
   ============================================================================ */

typedef union CMU_GCR_union_tag {  /* Global Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 FCE:1;                   /* Frequency Check Enable */
    volatile uint32 _unused_0:31;
  } B;
} CMU_GCR_tag;

typedef union CMU_RCCR_union_tag { /* Reference Count Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 REF_CNT:16;              /* Reference clock count */
    volatile uint32 _unused_0:16;
  } B;
} CMU_RCCR_tag;

typedef union CMU_HTCR_union_tag { /* High Threshold Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 HFREF:24;                /* High frequency reference threshold */
    volatile uint32 _unused_0:8;
  } B;
} CMU_HTCR_tag;

typedef union CMU_LTCR_union_tag { /* Low Threshold Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 LFREF:24;                /* Low Frequency Reference Threshold */
    volatile uint32 _unused_0:8;
  } B;
} CMU_LTCR_tag;

typedef union CMU_SR_union_tag {   /* Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 FLL:1;                   /* Frequency lower than low frequency reference threshold event status */
    volatile uint32 FHH:1;                   /* Frequency higher than high frequency reference threshold event status */
    volatile uint32 _unused_28:2;
    volatile uint32 RS:1;                    /* Run Status */
    volatile uint32 _unused_0:27;
  } B;
} CMU_SR_tag;

typedef union CMU_IER_union_tag {  /* Interrupt Enable Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_31:1;
    volatile uint32 _unused_30:1;
    volatile uint32 FLLAIE:1;                /* Frequency Lower than Low Frequency Reference Threshold Asynchronous Interrupt Enable */
    volatile uint32 FHHAIE:1;                /* Frequency Higher than High Frequency Reference Threshold Asynchronous Interrupt Enable */
    volatile uint32 _unused_16:12;
    volatile uint32 _unused_14:2;
    volatile uint32 _unused_12:2;
    volatile uint32 _unused_10:2;
    volatile uint32 _unused_9:1;
    volatile uint32 _unused_8:1;
    volatile uint32 _unused_0:8;
  } B;
} CMU_IER_tag;

struct CMU_tag {
  CMU_GCR_tag GCR;                 /* Global Configuration Register */
  CMU_RCCR_tag RCCR;               /* Reference Count Configuration Register */
  CMU_HTCR_tag HTCR;               /* High Threshold Configuration Register */
  CMU_LTCR_tag LTCR;               /* Low Threshold Configuration Register */
  CMU_SR_tag SR;                   /* Status Register */
  CMU_IER_tag IER;                 /* Interrupt Enable Register */
};

/* ============================================================================
   =============================== Module: EIM ================================
   ============================================================================ */
typedef union EIM_EIMCR_union_tag { /* Error Injection Module Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 GEIEN:1;                 /* Global Error Injection Enable */
    volatile uint32 _unused_0:31;            /* Reserved */
  } B;
} EIM_EIMCR_tag;

typedef union EIM_EICHEN_union_tag { /* Error Injection Channel Enable register */
  volatile uint32 R;
  struct {
    volatile uint32 EICH31EN:1;              /* Error Injection Channel 31 Enable */
    volatile uint32 EICH30EN:1;              /* Error Injection Channel 30 Enable */
    volatile uint32 EICH29EN:1;              /* Error Injection Channel 29 Enable */
    volatile uint32 EICH28EN:1;              /* Error Injection Channel 28 Enable */
    volatile uint32 EICH27EN:1;              /* Error Injection Channel 27 Enable */
    volatile uint32 EICH26EN:1;              /* Error Injection Channel 26 Enable */
    volatile uint32 EICH25EN:1;              /* Error Injection Channel 25 Enable */
    volatile uint32 EICH24EN:1;              /* Error Injection Channel 24 Enable */
    volatile uint32 EICH23EN:1;              /* Error Injection Channel 23 Enable */
    volatile uint32 EICH22EN:1;              /* Error Injection Channel 22 Enable */
    volatile uint32 EICH21EN:1;              /* Error Injection Channel 21 Enable */
    volatile uint32 EICH20EN:1;              /* Error Injection Channel 20 Enable */
    volatile uint32 EICH19EN:1;              /* Error Injection Channel 19 Enable */
    volatile uint32 EICH18EN:1;              /* Error Injection Channel 18 Enable */
    volatile uint32 EICH17EN:1;              /* Error Injection Channel 17 Enable */
    volatile uint32 EICH16EN:1;              /* Error Injection Channel 16 Enable */
    volatile uint32 EICH15EN:1;              /* Error Injection Channel 15 Enable */
    volatile uint32 EICH14EN:1;              /* Error Injection Channel 14 Enable */
    volatile uint32 EICH13EN:1;              /* Error Injection Channel 13 Enable */
    volatile uint32 EICH12EN:1;              /* Error Injection Channel 12 Enable */
    volatile uint32 EICH11EN:1;              /* Error Injection Channel 11 Enable */
    volatile uint32 EICH10EN:1;              /* Error Injection Channel 10 Enable */
    volatile uint32 EICH9EN:1;               /* Error Injection Channel 9 Enable */
    volatile uint32 EICH8EN:1;               /* Error Injection Channel 8 Enable */
    volatile uint32 EICH7EN:1;               /* Error Injection Channel 7 Enable */
    volatile uint32 EICH6EN:1;               /* Error Injection Channel 6 Enable */
    volatile uint32 EICH5EN:1;               /* Error Injection Channel 5 Enable */
    volatile uint32 EICH4EN:1;               /* Error Injection Channel 4 Enable */
    volatile uint32 EICH3EN:1;               /* Error Injection Channel 3 Enable */
    volatile uint32 EICH2EN:1;               /* Error Injection Channel 2 Enable */
    volatile uint32 EICH1EN:1;               /* Error Injection Channel 1 Enable */
    volatile uint32 EICH0EN:1;               /* Error Injection Channel 0 Enable */
  } B;
} EIM_EICHEN_tag;

typedef struct EIM_EICHD_union_tag {
  volatile uint32 WORD[EIM_EICHD_WORDS_PER_CHANNEL];    /* Error Injection Words */
  volatile uint8  EICHD_reserved0[28];
} EIM_EICHD_tag;

struct EIM_tag {
  EIM_EIMCR_tag EIMCR;             /* Error Injection Module Configuration Register */
  EIM_EICHEN_tag EICHEN;           /* Error Injection Channel Enable register */
  volatile uint8 EIM_reserved0[248];
  EIM_EICHD_tag EICHD[EIM_CHANNELS_COUNT];
};

/* ============================================================================
   ============================ Module: AON ERM ===============================
   ============================================================================ */
typedef union ERM_CR0_union_tag {      /* ERM Configuration Register 0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_0:2;             /* Reserved */
    volatile uint32 ENCIE7:1;                /* ENCIE7 */
    volatile uint32 ESCIE7:1;                /* ESCIE7 */
    volatile uint32 _unused_4:2;             /* Reserved */
    volatile uint32 ENCIE6:1;                /* ENCIE6 */
    volatile uint32 ESCIE6:1;                /* ESCIE6 */
    volatile uint32 _unused_8:2;             /* Reserved */
    volatile uint32 ENCIE5:1;                /* ENCIE5 */
    volatile uint32 ESCIE5:1;                /* ESCIE5 */
    volatile uint32 _unused_12:2;            /* Reserved */
    volatile uint32 ENCIE4:1;                /* ENCIE4 */
    volatile uint32 ESCIE4:1;                /* ESCIE4 */
    volatile uint32 _unused_16:2;            /* Reserved */
    volatile uint32 ENCIE3:1;                /* ENCIE3 */
    volatile uint32 ESCIE3:1;                /* ESCIE3 */
    volatile uint32 _unused_20:2;            /* Reserved */
    volatile uint32 ENCIE2:1;                /* ENCIE2 */
    volatile uint32 ESCIE2:1;                /* ESCIE2 */
    volatile uint32 _unused_24:2;            /* Reserved */
    volatile uint32 ENCIE1:1;                /* ENCIE1 */
    volatile uint32 ESCIE1:1;                /* ESCIE1 */
    volatile uint32 _unused_28:2;            /* Reserved */
    volatile uint32 ENCIE0:1;                /* ENCIE0 */
    volatile uint32 ESCIE0:1;                /* ESCIE0 */
  } B;
} ERM_CR0_tag;

typedef union ERM_CR1_union_tag {      /* ERM Configuration Register 1 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_0:26;            /* Reserved */
    volatile uint32 ENCIE9:1;                /* ENCIE9 */
    volatile uint32 ESCIE9:1;                /* ESCIE9 */
    volatile uint32 _unused_28:2;            /* Reserved */
    volatile uint32 ENCIE8:1;                /* ENCIE8 */
    volatile uint32 ESCIE8:1;                /* ESCIE8 */
  } B;
} ERM_CR1_tag;

typedef union ERM_SR0_union_tag {      /* ERM Status Register 0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_0:2;             /* Reserved */
    volatile uint32 NCE7:1;                  /* NCE7 */
    volatile uint32 SBC7:1;                  /* SBC7 */
    volatile uint32 _unused_4:2;             /* Reserved */
    volatile uint32 NCE6:1;                  /* NCE6 */
    volatile uint32 SBC6:1;                  /* SBC6 */
    volatile uint32 _unused_8:2;             /* Reserved */
    volatile uint32 NCE5:1;                  /* NCE5 */
    volatile uint32 SBC5:1;                  /* SBC5 */
    volatile uint32 _unused_12:2;            /* Reserved */
    volatile uint32 NCE4:1;                  /* NCE4 */
    volatile uint32 SBC4:1;                  /* SBC4 */
    volatile uint32 _unused_16:2;            /* Reserved */
    volatile uint32 NCE3:1;                  /* NCE3 */
    volatile uint32 SBC3:1;                  /* SBC3 */
    volatile uint32 _unused_20:2;            /* Reserved */
    volatile uint32 NCE2:1;                  /* NCE2 */
    volatile uint32 SBC2:1;                  /* SBC2 */
    volatile uint32 _unused_24:2;            /* Reserved */
    volatile uint32 NCE1:1;                  /* NCE1 */
    volatile uint32 SBC1:1;                  /* SBC1 */
    volatile uint32 _unused_28:2;            /* Reserved */
    volatile uint32 NCE0:1;                  /* NCE0 */
    volatile uint32 SBC0:1;                  /* SBC0 */
  } B;
} ERM_SR0_tag;

typedef union ERM_SR1_union_tag {      /* ERM Status Register 1 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_0:26;            /* Reserved */
    volatile uint32 NCE9:1;                  /* NCE9 */
    volatile uint32 SBC9:1;                  /* SBC9 */
    volatile uint32 _unused_28:2;            /* Reserved */
    volatile uint32 NCE8:1;                  /* NCE8 */
    volatile uint32 SBC8:1;                  /* SBC8 */
  } B;
} ERM_SR1_tag;

typedef union ERM_EAR_union_tag {     /* ERM Memory Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 EAR:32;                  /* EAR */
  } B;
} ERM_EAR_tag;

typedef union ERM_SYN_union_tag {     /* ERM Memory Syndrome Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_0:24;            /* Reserved */
    volatile uint32 SYNDROME:8;              /* SYNDROME */
  } B;
} ERM_SYN_tag;

typedef union ERM_CORR_ERR_CNT_union_tag { /* ERM Memory Correctable Error Count Register */
  volatile uint32 R;
  struct {
    volatile uint32 COUNT:8;                 /* Memory Correctable Error Count */
    volatile uint32 _unused_8:24;            /* Reserved */
  } B;
} ERM_CORR_ERR_CNT_tag;

typedef struct ERM_MEM_struct_tag {
  ERM_EAR_tag EAR;                    /* ERM Memory Error Address Register */
  ERM_SYN_tag SYN;                    /* ERM Memory Syndrome Register */
  ERM_CORR_ERR_CNT_tag CORR_ERR_CNT;  /* ERM Memory Correctable Error Count Register */
  uint8 ERM_MEM_Reserved[4];          /* Reserved */
} ERM_MEM_tag;

struct AON_ERMA_tag {
  ERM_CR0_tag CR0;                     /* ERM Configuration Register 0 */
  ERM_CR1_tag CR1;                     /* ERM Configuration Register 1 */
  uint8 ERM_reserved0[8];
  ERM_SR0_tag SR0;                     /* ERM Status Register 0 */
  ERM_SR1_tag SR1;                     /* ERM Status Register 1 */
  uint8 ERM_reserved1[232];             /* Reserved */
  ERM_MEM_tag MEM[24];                  /* ERM Memory Error Registers */
};

/* ============================================================================
   =============================== Module: M7_A7_MCM ==========================
   ============================================================================ */
typedef union M7_A7_MCM_ERR_INFO_EN_union_tag { /* Error Info Enable */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;            /* Reserved */
    volatile uint32 ITCM_ERRM_INFO_EN:1;     /* ITCM Access multi bit ECC Error Info Status Enable */
    volatile uint32 ITCM_ERRS_INFO_EN:1;     /* ITCM Access single bit ECC Error Info Status Enable */
    volatile uint32 D0TCM_ERRM_INFO_EN:1;    /* D0TCM Access multi bit ECC Error Info Status Enable */
    volatile uint32 D0TCM_ERRS_INFO_EN:1;    /* D0TCM Access single bit ECC Error Info Status Enable */
    volatile uint32 D1TCM_ERRM_INFO_EN:1;    /* D1TCM Access multi bit ECC Error Info Status Enable */
    volatile uint32 D1TCM_ERRS_INFO_EN:1;    /* D1TCM Access single bit ECC Error Info Status Enable */
    volatile uint32 _unused_0:18;            /* Reserved */
  } B;
} M7_A7_MCM_ERR_INFO_EN_tag;

typedef union M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_INFO_union_tag { /* ITCM single-bit ECC Error Information */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCS_EFW:1;         /* Read or write of the access */
    volatile uint32 ITCM_ECCS_EFSIZ:3;       /* Size of the access */
    volatile uint32 ITCM_ECCS_EFMST:4;       /* Encodes the requestor of the access */
    volatile uint32 ITCM_ECCS_EFPRT:4;       /* Privilege level of access */
    volatile uint32 _unused_12:8;
    volatile uint32 RESERVED:12;             /* Reserved */
  } B;
} M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* ITCM single-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCS_ERRED_ADDR:32; /* ITCM single-bit ECC error address */
  } B;
} M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_union_tag { /* ITCM single-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCS_ERRED_DATA_LSB:32; /* ITCM single-bit ECC error data [31:0] */
  } B;
} M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_tag;

typedef union M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_union_tag { /* ITCM single-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCS_ERRED_DATA_MSB:32; /* ITCM single-bit ECC error data [63:32] */
  } B;
} M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_tag;

typedef union M7_A7_MCM_ITCM_ECC_MULTI_ERROR_INFO_union_tag { /* ITCM multi-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCM_EFW:1;         /* ITCM multi-bit ECC error corresponding tcm_wr value */
    volatile uint32 ITCM_ECCM_EFSIZ:3;       /* ITCM multi-bit ECC error corresponding tcm access size */
    volatile uint32 ITCM_ECCM_EFMST:4;       /* ITCM multi-bit ECC error corresponding tcm_master */
    volatile uint32 ITCM_ECCM_EFPRT:4;       /* ITCM multi-bit ECC error corresponding tcm_priv */
    volatile uint32 _unused_12:8;
    volatile uint32 RESERVED:12;             /* Reserved */
  } B;
} M7_A7_MCM_ITCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_MCM_ITCM_ECC_MULTI_ERROR_ADDR_union_tag { /* ITCM multi-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCM_ERRED_ADDR:32; /* ITCM multi-bit ECC error address */
  } B;
} M7_A7_MCM_ITCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_union_tag { /* ITCM multi-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCM_ERRED_DATA_LSB:32; /* ITCM multi-bit ECC error data [31:0] */
  } B;
} M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_tag;

typedef union M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_union_tag { /* ITCM multi-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 ITCM_ECCM_ERRED_DATA_MSB:32; /* ITCM multi-bit ECC error data [63:32] */
  } B;
} M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_tag;

typedef union M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_union_tag { /* D0TCM single-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCS_EFW:1;        /* D0TCM single-bit ECC error corresponding tcm_wr value */
    volatile uint32 D0TCM_ECCS_EFSIZ:3;      /* D0TCM single-bit ECC error corresponding tcm access size */
    volatile uint32 D0TCM_ECCS_EFMST:4;      /* D0TCM single-bit ECC error corresponding tcm_master */
    volatile uint32 D0TCM_ECCS_EFPRT:4;      /* D0TCM single-bit ECC error corresponding tcm_priv */
    volatile uint32 _unused_13:7;
    volatile uint32 RESERVED:13;             /* Reserved */
  } B;
} M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* D0TCM single-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCS_ERRED_ADDR:32; /* D0TCM single-bit ECC error address */
  } B;
} M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_union_tag { /* D0TCM single-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCS_ERRED_DATA:32; /* D0TCM single-bit ECC error data */
  } B;
} M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_tag;

typedef union M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_INFO_union_tag { /* D0TCM multi-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCM_EFW:1;        /* D0TCM multi-bit ECC error corresponding tcm_wr value */
    volatile uint32 D0TCM_ECCM_EFSIZ:3;      /* D0TCM multi-bit ECC error corresponding tcm access size */
    volatile uint32 D0TCM_ECCM_EFMST:4;      /* D0TCM multi-bit ECC error corresponding tcm_master */
    volatile uint32 D0TCM_ECCM_EFPRT:4;      /* D0TCM multi-bit ECC error corresponding tcm_priv */
    volatile uint32 _unused_13:7;
    volatile uint32 RESERVED:13;             /* Reserved */
  } B;
} M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_union_tag { /* D0TCM multi-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCM_ERRED_ADDR:32; /* D0TCM multi-bit ECC error address */
  } B;
} M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_DATA_union_tag { /* D0TCM multi-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 D0TCM_ECCM_ERRED_DATA:32; /* D0TCM multi-bit ECC error data */
  } B;
} M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_DATA_tag;

typedef union M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_union_tag { /* D1TCM single-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCS_EFW:1;        /* D1TCM single-bit ECC error corresponding tcm_wr value */
    volatile uint32 D1TCM_ECCS_EFSIZ:3;      /* D1TCM single-bit ECC error corresponding tcm access size */
    volatile uint32 D1TCM_ECCS_EFMST:4;      /* D1TCM single-bit ECC error corresponding tcm_master */
    volatile uint32 D1TCM_ECCS_EFPRT:4;      /* D1TCM single-bit ECC error corresponding tcm_priv */
    volatile uint32 _unused_13:7;
    volatile uint32 RESERVED:13;             /* Reserved */
  } B;
} M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* D1TCM single-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCS_ERRED_ADDR:32; /* D1TCM single-bit ECC error address */
  } B;
} M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_union_tag { /* D1TCM single-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCS_ERRED_DATA:32; /* D1TCM single-bit ECC error data */
  } B;
} M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_tag;

typedef union M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_INFO_union_tag { /* D1TCM multi-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCM_EFW:1;        /* D1TCM multi-bit ECC error corresponding tcm_wr value */
    volatile uint32 D1TCM_ECCM_EFSIZ:3;      /* D1TCM multi-bit ECC error corresponding tcm access size */
    volatile uint32 D1TCM_ECCM_EFMST:4;      /* D1TCM multi-bit ECC error corresponding tcm_master */
    volatile uint32 D1TCM_ECCM_EFPRT:4;      /* D1TCM multi-bit ECC error corresponding tcm_priv */
    volatile uint32 _unused_13:7;
    volatile uint32 RESERVED:13;             /* Reserved */
  } B;
} M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_union_tag { /* D1TCM multi-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCM_ERRED_ADDR:32; /* D1TCM multi-bit ECC error address */
  } B;
} M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_DATA_union_tag { /* D1TCM multi-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 D1TCM_ECCM_ERRED_DATA:32; /* D1TCM multi-bit ECC error data */
  } B;
} M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_DATA_tag;

typedef union M7_A7_MCM_FCCU_SW_FAULTS_union_tag { /* FCCU Software Faults */
  volatile uint32 R;
  struct {
    volatile uint32 FCCU_SW_FAULTS:6;        /* FCCU Software Faults */
    volatile uint32 _unused_0:26;
  } B;
} M7_A7_MCM_FCCU_SW_FAULTS_tag;

struct M7_A7_MCM_tag {
  uint8 M7_A7_MCM_reserved0[36];
  M7_A7_MCM_ERR_INFO_EN_tag ERR_INFO_EN; /* Error Info Enable */
  uint8 M7_A7_MCM_reserved1[20];
  M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_INFO_tag ITCM_ECC_SINGLE_ERROR_INFO; /* ITCM single-bit ECC Error Information */
  M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_tag ITCM_ECC_SINGLE_ERROR_ADDR; /* ITCM single-bit ECC Error Address Register */
  M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_tag ITCM_ECC_SINGLE_ERROR_DATA_LSB; /* ITCM single-bit ECC Error Data Register */
  M7_A7_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_tag ITCM_ECC_SINGLE_ERROR_DATA_MSB; /* ITCM single-bit ECC Error Data Register */
  M7_A7_MCM_ITCM_ECC_MULTI_ERROR_INFO_tag ITCM_ECC_MULTI_ERROR_INFO; /* ITCM multi-bit ECC Error Information Register */
  M7_A7_MCM_ITCM_ECC_MULTI_ERROR_ADDR_tag ITCM_ECC_MULTI_ERROR_ADDR; /* ITCM multi-bit ECC Error Address Register */
  M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_tag ITCM_ECC_MULTI_ERROR_DATA_LSB; /* ITCM multi-bit ECC Error Data Register */
  M7_A7_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_tag ITCM_ECC_MULTI_ERROR_DATA_MSB; /* ITCM multi-bit ECC Error Data Register */
  M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_tag D0TCM_ECC_SINGLE_ERROR_INFO; /* D0TCM single-bit ECC Error Information Register */
  M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_tag D0TCM_ECC_SINGLE_ERROR_ADDR; /* D0TCM single-bit ECC Error Address Register */
  M7_A7_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_tag D0TCM_ECC_SINGLE_ERROR_DATA; /* D0TCM single-bit ECC Error Data Register */
  M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_INFO_tag D0TCM_ECC_MULTI_ERROR_INFO; /* D0TCM multi-bit ECC Error Information Register */
  M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_tag D0TCM_ECC_MULTI_ERROR_ADDR; /* D0TCM multi-bit ECC Error Address Register */
  M7_A7_MCM_D0TCM_ECC_MULTI_ERROR_DATA_tag D0TCM_ECC_MULTI_ERROR_DATA; /* D0TCM multi-bit ECC Error Data Register */
  M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_tag D1TCM_ECC_SINGLE_ERROR_INFO; /* D1TCM single-bit ECC Error Information Register */
  M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_tag D1TCM_ECC_SINGLE_ERROR_ADDR; /* D1TCM single-bit ECC Error Address Register */
  M7_A7_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_tag D1TCM_ECC_SINGLE_ERROR_DATA; /* D1TCM single-bit ECC Error Data Register */
  M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_INFO_tag D1TCM_ECC_MULTI_ERROR_INFO; /* D1TCM multi-bit ECC Error Information Register */
  M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_tag D1TCM_ECC_MULTI_ERROR_ADDR; /* D1TCM multi-bit ECC Error Address Register */
  M7_A7_MCM_D1TCM_ECC_MULTI_ERROR_DATA_tag D1TCM_ECC_MULTI_ERROR_DATA; /* D1TCM multi-bit ECC Error Data Register */
  uint8 M7_A7_MCM_reserved2[16];
  M7_A7_MCM_FCCU_SW_FAULTS_tag FCCU_SW_FAULTS; /* FCCU Software Faults */
};

/* ============================================================================
   =============================== Module: NPU_ERM ============================
   ============================================================================ */
struct NPU_ERM_tag { /** NPU_ERM - Register Layout Typedef */
  volatile uint32 CR0;                               /**< ERM Configuration Register 0, offset: 0x0 */
  uint8 RESERVED_0[12];
  volatile uint32 SR0;                               /**< ERM Status Register 0, offset: 0x10 */
  uint8 RESERVED_1[236];
  volatile  uint32 EAR0;                              /**< ERM Memory 0 Error Address Register, offset: 0x100 */
  volatile  uint32 SYN0;                              /**< ERM Memory 0 Syndrome Register, offset: 0x104 */
  volatile uint32 CORR_ERR_CNT0;                     /**< ERM Memory 0 Correctable Error Count Register, offset: 0x108 */
};

/* ============================================================================
   =============================== Module: SYS_TICK ===========================
   ============================================================================ */
typedef union SYS_TICK_CSR_union_tag { /* SysTick control and status register */
  volatile uint32 R;
  struct {
    volatile uint32 ENABLE:1;                /* Enable Counting */
    volatile uint32 TICKINT:1;               /* Enable Debug Halt */
    volatile uint32 CLKSOURCE:1;             /* Frequency Change Request, ID 0 */
    volatile uint32 _unused_24:13;           /* Reserved */
    volatile uint32 COUNTFLAG:1;             /* Frequency Change Request, ID 0 */
    volatile uint32 _unused_0:15;            /* Reserved */
  } B;
} SYS_TICK_CSR_tag;

typedef union SYS_TICK_RVR_union_tag { /* SysTick reload value register */
  volatile uint32 R;
  struct {
    volatile uint32 RELOAD:24;               /* Value to load into SYST_CVR */
    volatile uint32 _unused_0:8;             /* Reserved */
  } B;
} SYS_TICK_RVR_tag;

typedef union SYS_TICK_CVR_union_tag { /* SysTick current value register */
  volatile uint32 R;
  struct {
    volatile uint32 CURRENT:24;              /* Reads the current value of SysTick */
    volatile uint32 _unused_0:8;             /* Reserved */
  } B;
} SYS_TICK_CVR_tag;

typedef union SYS_TICK_CALIB_union_tag { /* SysTick calibration value register */
  volatile uint32 R;
  struct {
    volatile uint32 TENMS:24;                /* Reload value for 10ms timing */
    volatile uint32 _unused_24:6;            /* Reserved */
    volatile uint32 SKEW:1;                  /* Indicates if TENMS is exact */
    volatile uint32 NOREF:1;                 /* Indicates whether the device provides a refclk to the CPU */
  } B;
} SYS_TICK_CALIB_tag;

struct SYS_TICK_tag {
  SYS_TICK_CSR_tag SYST_CSR;           /* SysTick control and status register */
  SYS_TICK_RVR_tag SYST_RVR;           /* SysTick reload value register */
  SYS_TICK_CVR_tag SYST_CVR;           /* SysTick current value register */
  SYS_TICK_CALIB_tag SYST_CALIB;       /* SysTick calibration value register */
};

/* ============================================================================
   =============================== Module: AON_INTM ===========================
   ============================================================================ */
typedef union AON_INTM_INTM_MM_union_tag { /* Monitor Mode */
  volatile uint32 R;
  struct {
    volatile uint32 MM:1;                    /* Monitor Mode */
    volatile uint32 _unused_0:31;
  } B;
} AON_INTM_INTM_MM_tag;

typedef union AON_INTM_INTM_IACK_union_tag { /* Interrupt Acknowledge */
  volatile uint32 R;
  struct {
    volatile uint32 IRQ:10;                  /* Interrupt Request */
    volatile uint32 _unused_0:22;
  } B;
} AON_INTM_INTM_IACK_tag;

typedef union AON_INTM_MON_INTM_IRQSEL_union_tag { /* Interrupt Request Select for Monitor 0 */
  volatile uint32 R;
  struct {
    volatile uint32 IRQ:10;                  /* Interrupt Request */
    volatile uint32 _unused_0:22;
  } B;
} AON_INTM_MON_INTM_IRQSEL_tag;

typedef union AON_INTM_MON_INTM_LATENCY_union_tag { /* Interrupt Latency for Monitor 0 */
  volatile uint32 R;
  struct {
    volatile uint32 LAT:24;                  /* Latency */
    volatile uint32 _unused_0:8;
  } B;
} AON_INTM_MON_INTM_LATENCY_tag;

typedef union AON_INTM_MON_INTM_TIMER_union_tag { /* Timer for Monitor 0 */
  volatile uint32 R;
  struct {
    volatile uint32 TIMER:24;                /* Timer */
    volatile uint32 _unused_0:8;
  } B;
} AON_INTM_MON_INTM_TIMER_tag;

typedef union AON_INTM_MON_INTM_STATUS_union_tag { /* Status for Monitor 0 */
  volatile uint32 R;
  struct {
    volatile uint32 STATUS:1;                /* Monitor status */
    volatile uint32 _unused_0:31;
  } B;
} AON_INTM_MON_INTM_STATUS_tag;

typedef struct AON_INTM_MON_struct_tag {
  AON_INTM_MON_INTM_IRQSEL_tag INTM_IRQSEL; /* Interrupt Request Select for Monitor 0 */
  AON_INTM_MON_INTM_LATENCY_tag INTM_LATENCY; /* Interrupt Latency for Monitor 0 */
  AON_INTM_MON_INTM_TIMER_tag INTM_TIMER; /* Timer for Monitor 0 */
  AON_INTM_MON_INTM_STATUS_tag INTM_STATUS; /* Status for Monitor 0 */
} AON_INTM_MON_tag;

struct AON_INTM_tag {
  AON_INTM_INTM_MM_tag INTM_MM;        /* Monitor Mode */
  AON_INTM_INTM_IACK_tag INTM_IACK;    /* Interrupt Acknowledge */
  AON_INTM_MON_tag MON[4];
};

/* ============================================================================
   =============================== Module: AON_M33_CACHE_CTRL =================
   ============================================================================ */
typedef union AON_M33_CACHE_CTRL_CCR_union_tag { /* Cache Control */
  volatile uint32 R;
  struct {
    volatile uint32 ENCACHE:1;               /* Cache Enable */
    volatile uint32 _unused_30:1;            /* Reserved Always write 0 to this field to maintain compatibility. */
    volatile uint32 FRCWT:1;                 /* Force Write Through Mode */
    volatile uint32 FRCNOALLC:1;             /* Forces No Allocation on Cache Misses */
    volatile uint32 _unused_8:20;            /* Reserved */
    volatile uint32 INVW0:1;                 /* Invalidate Way 0 */
    volatile uint32 PUSHW0:1;                /* Push Way 0 */
    volatile uint32 INVW1:1;                 /* Invalidate Way 1 */
    volatile uint32 PUSHW1:1;                /* Push Way 1 */
    volatile uint32 _unused_1:3;             /* Reserved */
    volatile uint32 GO:1;                    /* Initiate Cache Command */
  } B;
} AON_M33_CACHE_CTRL_CCR_tag;

typedef union AON_M33_CACHE_CTRL_CLCR_union_tag { /* Cache Line Control */
  volatile uint32 R;
  struct {
    volatile uint32 LGO:1;                   /* Initiate Cache Line Command */
    volatile uint32 _unused_30:1;            /* Reserved */
    volatile uint32 CACHEADDR:12;            /* Cache Address */
    volatile uint32 WSEL:1;                  /* Way Select */
    volatile uint32 _unused_16:1;            /* Reserved */
    volatile uint32 TDSEL:1;                 /* Tag or Data Select */
    volatile uint32 _unused_12:3;            /* Reserved */
    volatile uint32 LCIVB:1;                 /* Line Command Initial Valid */
    volatile uint32 LCIMB:1;                 /* Line Command Initial Modified */
    volatile uint32 LCWAY:1;                 /* Line Command Way */
    volatile uint32 _unused_8:1;             /* Reserved */
    volatile uint32 LCMD:2;                  /* Line Command */
    volatile uint32 LADSEL:1;                /* Line Address Select */
    volatile uint32 LACC:1;                  /* Line Access Type */
    volatile uint32 _unused_0:4;             /* Reserved */
  } B;
} AON_M33_CACHE_CTRL_CLCR_tag;

typedef union AON_M33_CACHE_CTRL_CSAR_union_tag { /* Cache Search Address */
  volatile uint32 R;
  struct {
    volatile uint32 LGO:1;                   /* Initiate Cache Line Command */
    volatile uint32 _unused_30:1;            /* Reserved */
    volatile uint32 PHYADDR:30;              /* Physical Address */
  } B;
} AON_M33_CACHE_CTRL_CSAR_tag;

typedef union AON_M33_CACHE_CTRL_CCVR_union_tag { /* Cache Read/Write Value */
  volatile uint32 R;
  struct {
    volatile uint32 DATA:32;                 /* Cache Read/Write Data */
  } B;
} AON_M33_CACHE_CTRL_CCVR_tag;

struct AON_M33_CACHE_CTRL_tag {
  AON_M33_CACHE_CTRL_CCR_tag CCR;      /* Cache Control */
  AON_M33_CACHE_CTRL_CLCR_tag CLCR;    /* Cache Line Control */
  AON_M33_CACHE_CTRL_CSAR_tag CSAR;    /* Cache Search Address */
  AON_M33_CACHE_CTRL_CCVR_tag CCVR;    /* Cache Read/Write Value */
};

/* ============================================================================
   =============================== Module: AON_MCM ============================
   ============================================================================ */
typedef union AON_MCM_ISCR_union_tag { /* Interrupt Status and Control */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_31:1;
    volatile uint32 IRQ:1;                   /* ETB-Related Interrupt Pending */
    volatile uint32 NMI:1;                   /* Nonmaskable Interrupt Pending */
    volatile uint32 DHREQ:1;                 /* Debug Halt Request Indicator */
    volatile uint32 CWBER:1;                 /* Cache Write Buffer Error Status */
    volatile uint32 _unused_26:1;
    volatile uint32 _unused_24:2;
    volatile uint32 FIOC:1;                  /* FPU Invalid Operation Interrupt Status */
    volatile uint32 FDZC:1;                  /* FPU Divide-by-Zero Interrupt Status */
    volatile uint32 FOFC:1;                  /* FPU Overflow Interrupt Status */
    volatile uint32 FUFC:1;                  /* FPU Underflow Interrupt status */
    volatile uint32 FIXC:1;                  /* FPU Inexact Interrupt Status */
    volatile uint32 _unused_17:2;
    volatile uint32 FIDC:1;                  /* FPU Input Denormal Interrupt Status */
    volatile uint32 _unused_12:4;
    volatile uint32 CWBEE:1;                 /* Cache Write Buffer Error Enable */
    volatile uint32 _unused_10:1;
    volatile uint32 _unused_8:2;
    volatile uint32 FIOCE:1;                 /* FPU Invalid Operation Interrupt Enable */
    volatile uint32 FDZCE:1;                 /* FPU Divide-by-Zero Interrupt Enable */
    volatile uint32 FOFCE:1;                 /* FPU Overflow Interrupt Enable */
    volatile uint32 FUFCE:1;                 /* FPU Underflow Interrupt Enable */
    volatile uint32 FIXCE:1;                 /* FPU Inexact Interrupt Enable */
    volatile uint32 _unused_1:2;
    volatile uint32 FIDCE:1;                 /* FPU Input Denormal Interrupt Enable */
  } B;
} AON_MCM_ISCR_tag;

typedef union AON_MCM_ETBCC_union_tag { /* ETB Counter Control */
  volatile uint32 R;
  struct {
    volatile uint32 CNTEN:1;                 /* Counter Enable */
    volatile uint32 RSPT:2;                  /* Response Type */
    volatile uint32 RLRQ:1;                  /* Reload Request */
    volatile uint32 _unused_0:28;
  } B;
} AON_MCM_ETBCC_tag;

typedef union AON_MCM_ETBRR_union_tag { /* ETB Reload */
  volatile uint32 R;
  struct {
    volatile uint32 RELOAD:11;               /* Byte Count Reload Value */
    volatile uint32 _unused_0:21;            /* Reserved */
  } B;
} AON_MCM_ETBRR_tag;

typedef union AON_MCM_ETBCV_union_tag { /* ETB Counter Value */
  volatile uint32 R;
  struct {
    volatile uint32 COUNTER:11;              /* Byte Count Counter Value */
    volatile uint32 _unused_0:21;
  } B;
} AON_MCM_ETBCV_tag;

typedef union AON_MCM_FADR_union_tag { /* Write Buffer Fault Address */
  volatile uint32 R;
  struct {
    volatile uint32 ADDRESS:32;              /* Fault Address */
  } B;
} AON_MCM_FADR_tag;

typedef union AON_MCM_FATR_union_tag { /* Store Buffer Fault Attributes */
  volatile uint32 R;
  struct {
    volatile uint32 BEDA:1;                  /* Bus Error Data Access Type */
    volatile uint32 BEMD:1;                  /* Bus Error Privilege Level */
    volatile uint32 _unused_28:2;
    volatile uint32 BESZ:2;                  /* Bus Error Size */
    volatile uint32 _unused_25:1;
    volatile uint32 BEWT:1;                  /* Bus Error Write */
    volatile uint32 BEMN:4;                  /* Bus Error Master Number */
    volatile uint32 _unused_1:19;
    volatile uint32 BEOVR:1;                 /* Bus Error Overrun */
  } B;
} AON_MCM_FATR_tag;

typedef union AON_MCM_FDR_union_tag {  /* Store Buffer Fault Data */
  volatile uint32 R;
  struct {
    volatile uint32 DATA:32;                 /* Fault Data */
  } B;
} AON_MCM_FDR_tag;

struct AON_MCM_tag {
  uint8 AON_MCM_reserved0[16];
  AON_MCM_ISCR_tag ISCR;               /* Interrupt Status and Control */
  AON_MCM_ETBCC_tag ETBCC;             /* ETB Counter Control */
  AON_MCM_ETBRR_tag ETBRR;             /* ETB Reload */
  AON_MCM_ETBCV_tag ETBCV;             /* ETB Counter Value */
  AON_MCM_FADR_tag FADR;               /* Write Buffer Fault Address */
  AON_MCM_FATR_tag FATR;               /* Store Buffer Fault Attributes */
  AON_MCM_FDR_tag FDR;                 /* Store Buffer Fault Data */
};

/* ============================================================================
   =============================== Module: CACHE_ECC_MCM ======================
   ============================================================================ */
typedef union CACHE_ECC_MCM_CACHE_ECCR_union_tag { /* CACHE ECC Control Register */
  volatile uint32 R;
  struct {
    volatile uint32 WECC_DIS:1;              /* Disable CACHE ECC Write Generation */
    volatile uint32 RECC_DIS:1;              /* Disable Cache ECC Read Check */
    volatile uint32 _unused_0:30;
  } B;
} CACHE_ECC_MCM_CACHE_ECCR_tag;

typedef union CACHE_ECC_MCM_INT_STATUS_union_tag { /* Interrupt Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 CODE_CACHE_ECC_ERRM_INT:1; /* CODE CACHE Access multi-bit ECC Error Interrupt Status */
    volatile uint32 CODE_CACHE_ECC_ERRS_INT:1; /* CODE CACHE access single-bit ECC Error Interrupt Status */
    volatile uint32 CODE_CACHE_ECC_ERRM_OVER_INT:1; /* CODE CACHE access more than one multi-bit ECC Error Interrupt Status */
    volatile uint32 CODE_CACHE_ECC_ERRS_OVER_INT:1; /* CODE CACHE access more than one single-bit ECC Error Interrupt Status */
    volatile uint32 SYSTEM_CACHE_ECC_ERRM_INT:1; /* SYSTEM CACHE access multi-bit ECC Error Interrupt Status */
    volatile uint32 SYSTEM_CACHE_ECC_ERRS_INT:1; /* SYSTEM CACHE access single-bit ECC Error Interrupt Status */
    volatile uint32 SYSTEM_CACHE_ECC_ERRM_OVER_INT:1; /* SYSTEM CACHE access more than one multi-bit ECC Error Interrupt Status */
    volatile uint32 SYSTEM_CACHE_ECC_ERRS_OVER_INT:1; /* SYSTEM CACHE access more than one multi-bit ECC Error Interrupt Status */
    volatile uint32 _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_STATUS_tag;

typedef union CACHE_ECC_MCM_INT_STAT_EN_union_tag { /* Interrupt Status Enable Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 CODE_CACHE_ERRM_INT_EN:1; /* CODE CACHE Access multi bit ECC Error Interrupt Status Enable */
    volatile uint32 CODE_CACHE_ERRS_INT_EN:1; /* CODE CACHE Access single bit ECC Error Interrupt Status Enable */
    volatile uint32 CODE_CACHE_ERRM_OVER_INT_EN:1; /* CODE CACHE Access more than multi bit ECC Error Interrupt Status Enable */
    volatile uint32 CODE_CACHE_ERRS_OVER_INT_EN:1; /* CODE CACHE Access more than single bit ECC Error Interrupt Status Enable */
    volatile uint32 SYSTEM_CACHE_ECC_ERRM_INT_EN:1; /* SYSTEM CACHE Access multi bit ECC Error Interrupt Status Enable */
    volatile uint32 SYSTEM_CACHE_ECC_ERRS_INT_EN:1; /* SYSTEM CACHE Access single bit ECC Error Interrupt Status Enable */
    volatile uint32 SYSTEM_CACHE_ECC_ERRM_OVER_INT_EN:1; /* SYSTEM CACHE Access more than one multi bit ECC Error Interrupt Status Enable */
    volatile uint32 SYSTEM_CACHE_ECC_ERRS_OVER_INT_EN:1; /* SYSTEM CACHE Access more than one single bit ECC Error Interrupt Status Enable */
    volatile uint32 _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_STAT_EN_tag;

typedef union CACHE_ECC_MCM_INT_SIG_EN_union_tag { /* Interrupt Enable Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 CODE_CACHE_ERRM_INT_SIG_EN:1; /* CODE CACHE Access multi bit ECC Error Interrupt Signal Enable */
    volatile uint32 CODE_CACHE_ERRS_INT_SIG_EN:1; /* CODE CACHE Access single bit ECC Error Interrupt Signal Enable */
    volatile uint32 CODE_CACHE_ERRM_OVER_INT_SIG_EN:1; /* CODE CACHE Access more than one multi bit ECC Error Interrupt Signal Enable */
    volatile uint32 CODE_CACHE_ERRS_OVER_INT_SIG_EN:1; /* CODE CACHE Access more than one single bit ECC Error Interrupt Signal Enable */
    volatile uint32 SYSTEM_CACHE_ERRM_INT_SIG_EN:1; /* SYSTEM CACHE Access multi bit ECC Error Interrupt Signal Enable */
    volatile uint32 SYSTEM_CACHE_ERRS_INT_SIG_EN:1; /* SYSTEM CACHE Access single bit ECC Error Interrupt Signal Enable */
    volatile uint32 SYSTEM_CACHE_ERRM_OVER_INT_SIG_EN:1; /* SYSTEM CACHE Access more than one multi bit ECC Error Interrupt Signal Enable */
    volatile uint32 SYSTEM_CACHE_ERRS_OVER_INT_SIG_EN:1; /* SYSTEM CACHE Access single bit ECC Error Interrupt Signal Enable */
    volatile uint32 _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_SIG_EN_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_union_tag { /* CODE CACHE single bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_ECCS_TAG:1;   /* CODE CACHE single bit ECC error */
    volatile uint32 CODE_CACHE_ECCS_CMD:1;   /* CODE CACHE single bit ECC error on cache command */
    volatile uint32 _unused_28:2;
    volatile uint32 CODE_CACHE_ECCS_EFMST:4; /* CODE CACHE single bit ECC error master number */
    volatile uint32 CODE_CACHE_ECCS_EFPRT:6; /* CODE CACHE single bit ECC error protection field */
    volatile uint32 _unused_16:2;
    volatile uint32 CODE_CACHE_ECCS_EFSYN:7; /* CODE CACHE single bit ECC error corresponding syndrome */
    volatile uint32 _unused_0:9;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_union_tag { /* CODE_CACHE single-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_ECCS_ERRED_ADDR:32; /* CODE CACHE single-bit ECC error address */
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_union_tag { /* CODE CACHE multi-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_ECCM_TAG:1;   /* CODE CACHE multiple bit ECC error */
    volatile uint32 CODE_CACHE_ECCM_CMD:1;   /* CODE CACHE multiple bit ECC error on code cache command */
    volatile uint32 _unused_28:2;
    volatile uint32 CODE_CACHE_ECCM_EFMST:4; /* CODE CACHE multi-bit ECC error master number */
    volatile uint32 CODE_CACHE_ECCM_EFPRT:6; /* CODE CACHE multi-bit ECC error protection field */
    volatile uint32 _unused_16:2;
    volatile uint32 CODE_CACHE_ECCM_EFSYN:7; /* CODE CACHE multi-bit ECC error corresponding syndrome */
    volatile uint32 _unused_0:9;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_union_tag { /* SYSTEM CACHE single bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_ECCS_TAG:1; /* SYSTEM CACHE single bit ECC error */
    volatile uint32 SYSTEM_CACHE_ECCS_CMD:1; /* SYSTEM CACHE single bit ECC error on cache command */
    volatile uint32 _unused_28:2;
    volatile uint32 SYSTEM_CACHE_ECCS_EFMST:4; /* SYSTEM CACHE single bit ECC error master number */
    volatile uint32 SYSTEM_CACHE_ECCS_EFPRT:6; /* SYSTEM CACHE single bit ECC error protection field */
    volatile uint32 _unused_16:2;
    volatile uint32 SYSTEM_CACHE_ECCS_EFSYN:7; /* SYSTEM CACHE single bit ECC error corresponding syndrome */
    volatile uint32 _unused_0:9;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_union_tag { /* SYSTEM_CACHE single-bit ECC Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_ECCS_ERRED_ADDR:32; /* SYSTEM CACHE single-bit ECC error address */
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_union_tag { /* SYSTEM CACHE multi-bit ECC Error Information Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_ECCM_TAG:1; /* SYSTEM CACHE multiple bit ECC error */
    volatile uint32 SYSTEM_CACHE_ECCM_CMD:1; /* SYSTEM CACHE multiple bit ECC error on SYSTEM CACHE command */
    volatile uint32 _unused_28:2;
    volatile uint32 SYSTEM_CACHE_ECCM_EFMST:4; /* SYSTEM CACHE multi-bit ECC error master number */
    volatile uint32 SYSTEM_CACHE_ECCM_EFPRT:6; /* SYSTEM CACHE multi-bit ECC error protection field */
    volatile uint32 _unused_16:2;
    volatile uint32 SYSTEM_CACHE_ECCM_EFSYN:7; /* SYSTEM CACHE multi-bit ECC error corresponding syndrome */
    volatile uint32 _unused_0:9;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_union_tag { /* SYSTEM CACHE multi-bit ECC Error Data Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_ECCM_ERRED_DATA:32; /* SYSTEM CACHE multi-bit ECC error data */
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_union_tag { /* CODE CACHE TAG0 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_TAG0_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 CODE_CACHE_TAG0_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error. */
    volatile uint32 _unused_16:1;
    volatile uint32 CODE_CACHE_TAG0_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 CODE_CACHE_TAG0_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 CODE_CACHE_TAG0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 CODE_CACHE_TAG0_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_union_tag { /* CODE CACHE TAG1 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_TAG1_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 CODE_CACHE_TAG1_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error. */
    volatile uint32 _unused_16:1;
    volatile uint32 CODE_CACHE_TAG1_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on CODE CACHE TAG1 write access */
    volatile uint32 CODE_CACHE_TAG1_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on CODE CACHE TAG1 write access */
    volatile uint32 CODE_CACHE_TAG1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on CODE_CACHE_TAG1 write access */
    volatile uint32 CODE_CACHE_TAG1_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on CODE CACHE TAG1 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_union_tag { /* CODE CACHE DATA0 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_DATA0_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 CODE_CACHE_DATA0_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error */
    volatile uint32 _unused_16:1;
    volatile uint32 CODE_CACHE_DATA0_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on CODE CACHE DATA0 write access */
    volatile uint32 CODE_CACHE_DATA0_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on CODE CACHE DATA0 write access */
    volatile uint32 CODE_CACHE_DATA0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on CODE CACHE DATA0 write access */
    volatile uint32 CODE_CACHE_DATA0_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on CODE_CACHE_DATA0 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_union_tag { /* CODE CACHE DATA1 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 CODE_CACHE_DATA1_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection */
    volatile uint32 _unused_24:1;
    volatile uint32 CODE_CACHE_DATA1_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error */
    volatile uint32 _unused_16:1;
    volatile uint32 CODE_CACHE_DATA1_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on CODE CACHE DATA1 write access */
    volatile uint32 CODE_CACHE_DATA1_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on CODE CACHE DATA1 write access */
    volatile uint32 CODE_CACHE_DATA1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on CODE CACHE DATA1 write access */
    volatile uint32 CODE_CACHE_DATA1_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on CODE CACHE DATA1 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_union_tag { /* SYSTEM CACHE TAG0 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_TAG0_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 SYSTEM_CACHE_TAG0_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error. */
    volatile uint32 _unused_16:1;
    volatile uint32 SYSTEM_CACHE_TAG0_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on SYSTEM CACHE TAG0 write access */
    volatile uint32 SYSTEM_CACHE_TAG0_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on SYSTEM CACHE TAG0 write access */
    volatile uint32 SYSTEM_CACHE_TAG0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 SYSTEM_CACHE_TAG0_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on CODE CACHE TAG0 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_union_tag { /* SYSTEM CACHE TAG1 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_TAG1_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 SYSTEMCACHE_TAG1_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error. */
    volatile uint32 _unused_16:1;
    volatile uint32 SYSTEM_CACHE_TAG1_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on SYSTEM CACHE TAG1 write access */
    volatile uint32 SYSTEM_CACHE_TAG1_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on SYSTEM CACHE TAG1 write access */
    volatile uint32 SYSTEM_CACHE_TAG1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on SYSTEM_CACHE_TAG1 write access */
    volatile uint32 SYSTEM_CACHE_TAG1_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on SYSTEM CACHE TAG1 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_union_tag { /* SYSTEM CACHE DATA0 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_DATA0_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection. */
    volatile uint32 _unused_24:1;
    volatile uint32 SYSTEM_CACHE_DATA0_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error */
    volatile uint32 _unused_16:1;
    volatile uint32 SYSTEM_CACHE_DATA0_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on SYSTEM CACHE DATA0 write access */
    volatile uint32 SYSTEM_CACHE_DATA0_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on SYSTEM CACHE DATA0 write access */
    volatile uint32 SYSTEM_CACHE_DATA0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on SYSTEM CACHE DATA0 write access */
    volatile uint32 SYSTEM_CACHE_DATA0_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on SYSTEM CACHE DATA0 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_union_tag { /* SYSTEM CACHE DATA1 ECC Error Injection Register */
  volatile uint32 R;
  struct {
    volatile uint32 SYSTEM_CACHE_DATA1_ERR1BIT:7; /* Bit position of the bit to inject ECC Error. Can be used for single-bit and multi-bit ECC Error injection */
    volatile uint32 _unused_24:1;
    volatile uint32 SYSTEM_CACHE_DATA1_ERR2BIT:7; /* Bit position of the second bit to inject multi-bit ECC Error */
    volatile uint32 _unused_16:1;
    volatile uint32 SYSTEM_CACHE_DATA1_FR11BI:1; /* Force One 1-Bit Data Inversion(single-bit ECC error) on SYSTEM CACHE DATA1 write access */
    volatile uint32 SYSTEM_CACHE_DATA1_FR1NCI:1; /* Force One Non-correctable Data Inversion(multi-bit ECC error) on SYSTEM CACHE DATA1 write access */
    volatile uint32 SYSTEM_CACHE_DATA1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions (single-bit ECC error) on SYSTEM CACHE DATA1 write access */
    volatile uint32 SYSTEM_CACHE_DATA1_FRCNCI:1; /* Force Continuous Non-correctable Data Inversions (multi-bit ECC error) on SYSTEM CACHE DATA1 write access */
    volatile uint32 _unused_0:12;
  } B;
} CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_FCCU_SW_FAULTS_union_tag { /* FCCU Software Faults */
  volatile uint32 R;
  struct {
    volatile uint32 FCCU_SW_FAULTS:6;        /* The software can write these bits when it encounters an internal software error. Whenever software writes to this register, FCCU alarm is generated. The value of this bitfield is retained until reset or software writes to this register. */
    volatile uint32 _unused_0:26;
  } B;
} CACHE_ECC_MCM_FCCU_SW_FAULTS_tag;

struct CACHE_ECC_MCM_tag {
  CACHE_ECC_MCM_CACHE_ECCR_tag CACHE_ECCR; /* CACHE ECC Control Register */
  uint8 CACHE_ECC_MCM_reserved0[28];
  CACHE_ECC_MCM_INT_STATUS_tag INT_STATUS; /* Interrupt Status Register */
  CACHE_ECC_MCM_INT_STAT_EN_tag INT_STAT_EN; /* Interrupt Status Enable Register */
  CACHE_ECC_MCM_INT_SIG_EN_tag INT_SIG_EN; /* Interrupt Enable Register */
  uint8 CACHE_ECC_MCM_reserved1[48];
  CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_tag CODE_CACHE_ECC_SINGLE_ERROR_INFO; /* CODE CACHE single bit ECC Error Information Register */
  CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_tag CODE_CACHE_ECC_SINGLE_ERROR_ADDR; /* CODE_CACHE single-bit ECC Error Address Register */
  uint8 CACHE_ECC_MCM_reserved2[4];
  CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_tag CODE_CACHE_ECC_MULTI_ERROR_INFO; /* CODE CACHE multi-bit ECC Error Information Register */
  uint8 CACHE_ECC_MCM_reserved3[8];
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_tag SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO; /* SYSTEM CACHE single bit ECC Error Information Register */
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_tag SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR; /* SYSTEM_CACHE single-bit ECC Error Address Register */
  uint8 CACHE_ECC_MCM_reserved4[4];
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_tag SYSTEM_CACHE_ECC_MULTI_ERROR_INFO; /* SYSTEM CACHE multi-bit ECC Error Information Register */
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_tag SYSTEM_CACHE_ECC_MULTI_ERROR_DATA; /* SYSTEM CACHE multi-bit ECC Error Data Register */
  uint8 CACHE_ECC_MCM_reserved5[4];
  CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_tag CODE_CACHE_TAG0_ECC_ERROR_INJEC; /* CODE CACHE TAG0 ECC Error Injection Register */
  CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_tag CODE_CACHE_TAG1_ECC_ERROR_INJEC; /* CODE CACHE TAG1 ECC Error Injection Register */
  CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_tag CODE_CACHE_DATA0_ECC_ERROR_INJEC; /* CODE CACHE DATA0 ECC Error Injection Register */
  CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_tag CODE_CACHE_DATA1_ECC_ERROR_INJEC; /* CODE CACHE DATA1 ECC Error Injection Register */
  CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_tag SYTEM_CACHE_TAG0_ECC_ERROR_INJEC; /* SYSTEM CACHE TAG0 ECC Error Injection Register */
  CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_tag SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC; /* SYSTEM CACHE TAG1 ECC Error Injection Register */
  CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_tag SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC; /* SYSTEM CACHE DATA0 ECC Error Injection Register */
  CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_tag STSTEM_CACHE_DATA1_ECC_ERROR_INJEC; /* SYSTEM CACHE DATA1 ECC Error Injection Register */
  CACHE_ECC_MCM_FCCU_SW_FAULTS_tag FCCU_SW_FAULTS; /* FCCU Software Faults */
};

/* ============================================================================
   ============================= Module: NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER
   ============================================================================ */
typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_COREID_union_tag { /* Core ID */
  volatile uint32 R;
  struct {
    volatile uint32 CORETYPEID:8;
    volatile uint32 CORECHECKSUM:24;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_COREID_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_REVISIONID_union_tag { /* Revision ID */
  volatile uint32 R;
  struct {
    volatile uint32 USERID:8;
    volatile uint32 NOCID:24;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_REVISIONID_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_MISSIONFAULT_union_tag { /* Mission Fault n */
  volatile uint32 R;
  struct {
    volatile uint32 MISSIONFAULT:32;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_MISSIONFAULT_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_LATENTFAULT_union_tag { /* Latent Fault n */
  volatile uint32 R;
  struct {
    volatile uint32 LATENTFAULT:32;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_LATENTFAULT_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_FAULTS_union_tag { /* Faults */
  volatile uint32 R;
  struct {
    volatile uint32 LATENTFAULT:1;
    volatile uint32 MISSIONFAULT:1;
    volatile uint32 _unused_0:30;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_FAULTS_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTEN_union_tag { /* Interrupt Enable */
  volatile uint32 R;
  struct {
    volatile uint32 BISTDONEEN:1;
    volatile uint32 MISSIONFAULTEN:1;
    volatile uint32 _unused_0:30;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTEN_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTCLR_union_tag { /* InterruptClear */
  volatile uint32 R;
  struct {
    volatile uint32 LATENTFAULTCLR:1;
    volatile uint32 MISSIONFAULTCLR:1;
    volatile uint32 _unused_0:30;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTCLR_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTCTL_union_tag { /* BistControl */
  volatile uint32 R;
  struct {
    volatile uint32 BISTSTART:1;
    volatile uint32 BISTDONECLR:1;
    volatile uint32 _unused_0:30;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTCTL_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTDONE_union_tag { /* BistDone */
  volatile uint32 R;
  struct {
    volatile uint32 BISTDONE:1;
    volatile uint32 MISSIONMODE:1;
    volatile uint32 _unused_0:30;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTDONE_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO1_union_tag { /* Bist T01 */
  volatile uint32 R;
  struct {
    volatile uint32 BISTTO1:16;
    volatile uint32 _unused_0:16;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO1_tag;

typedef union NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO2_union_tag { /* Bist T02 */
  volatile uint32 R;
  struct {
    volatile uint32 BISTTO2:8;
    volatile uint32 _unused_0:24;
  } B;
} NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO2_tag;

struct FLEXNOC_RSLNC_tag {
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_COREID_tag ID_COREID; /* Core ID */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_ID_REVISIONID_tag ID_REVISIONID; /* Revision ID */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_MISSIONFAULT_tag MISSIONFAULT[4]; /* Mission Fault n */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_LATENTFAULT_tag LATENTFAULT[4]; /* Latent Fault n */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_FAULTS_tag FAULTS; /* Faults */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTEN_tag INTEN; /* Interrupt Enable */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_INTCLR_tag INTCLR; /* InterruptClear */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTCTL_tag BISTCTL; /* BistControl */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTDONE_tag BISTDONE; /* BistDone */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO1_tag BISTTO1; /* Bist T01 */
  NOC_AON_MAIN_RESILIENCEFAULTCONTROLLER_BISTTO2_tag BISTTO2; /* Bist T02 */
};

/* ============================================================================
   =============================== Module: WAKEUP_EDMA5_MP ====================
   ============================================================================ */
typedef union WAKEUP_EDMA5_MP_MP_CSR_union_tag { /* Management Page Control Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_31:1;
    volatile uint32 EDBG:1;                  /* Enable Debug */
    volatile uint32 ERCA:1;                  /* Enable Round Robin Channel Arbitration */
    volatile uint32 GCPC:1;                  /* Global Channel Preemption Control */
    volatile uint32 HAE:1;                   /* Halt After Error */
    volatile uint32 HALT:1;                  /* Halt DMA Operations */
    volatile uint32 GCLC:1;                  /* Global Channel Linking Control */
    volatile uint32 GMRC:1;                  /* Global Master ID Replication Control */
    volatile uint32 _unused_16:8;            /* Reserved */
    volatile uint32 VER:8;                   /* eDMA version */
    volatile uint32 ACTIVE_ID:6;             /* Active channel ID */
    volatile uint32 _unused_1:1;             /* Reserved */
    volatile uint32 ACTIVE:1;                /* DMA Active Status */
  } B;
} WAKEUP_EDMA5_MP_MP_CSR_tag;

typedef union WAKEUP_EDMA5_MP_MP_ES_union_tag { /* Management Page Error Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 DBE:1;                   /* Destination Bus Error */
    volatile uint32 SBE:1;                   /* Source Bus Error */
    volatile uint32 SGE:1;                   /* Scatter/Gather Configuration Error */
    volatile uint32 NCE:1;                   /* NBYTES/CITER Configuration Error */
    volatile uint32 DOE:1;                   /* Destination Offset Error */
    volatile uint32 DAE:1;                   /* Destination Address Error */
    volatile uint32 SOE:1;                   /* Source Offset Error */
    volatile uint32 SAE:1;                   /* Source Address Error */
    volatile uint32 ECX:1;                   /* Transfer Canceled */
    volatile uint32 UCE:1;                   /* Uncorrectable TCD error during channel execution. */
    volatile uint32 _unused_21:1;
    volatile uint32 _unused_8:13;            /* Reserved */
    volatile uint32 ERRCHN:6;                /* Error Channel Number or Canceled Channel Number */
    volatile uint32 _unused_1:1;             /* Reserved */
    volatile uint32 VLD:1;                   /* Valid */
  } B;
} WAKEUP_EDMA5_MP_MP_ES_tag;

typedef union WAKEUP_EDMA5_MP_MP_INT_LOW_union_tag { /* Management Page Interrupt Request Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 INT:32;                  /* Interrupt Request Status */
  } B;
} WAKEUP_EDMA5_MP_MP_INT_LOW_tag;

typedef union WAKEUP_EDMA5_MP_MP_INT_HIGH_union_tag { /* Management Page Interrupt Request Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 INT:32;                  /* Interrupt Request Status */
  } B;
} WAKEUP_EDMA5_MP_MP_INT_HIGH_tag;

typedef union WAKEUP_EDMA5_MP_MP_HRS_LOW_union_tag { /* Hardware Request Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 HRS:32;                  /* Hardware Request Status */
  } B;
} WAKEUP_EDMA5_MP_MP_HRS_LOW_tag;

typedef union WAKEUP_EDMA5_MP_MP_HRS_HIGH_union_tag { /* Hardware Request Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 HRS:32;                  /* Hardware Request Status */
  } B;
} WAKEUP_EDMA5_MP_MP_HRS_HIGH_tag;

typedef union WAKEUP_EDMA5_MP_MP_STOPCH_union_tag { /* Stop Channel Register */
  volatile uint32 R;
  struct {
    volatile uint32 STOPCH:6;                /* Stop Channel */
    volatile uint32 _unused_25:1;
    volatile uint32 ERR:1;                   /* Stop channel with error exit */
    volatile uint32 _unused_0:24;
  } B;
} WAKEUP_EDMA5_MP_MP_STOPCH_tag;

typedef union WAKEUP_EDMA5_MP_MP_SSR_LOW_union_tag { /* Stop Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 CSS:32;                  /* Channel Stop Status */
  } B;
} WAKEUP_EDMA5_MP_MP_SSR_LOW_tag;

typedef union WAKEUP_EDMA5_MP_MP_SSR_HIGH_union_tag { /* Stop Status Register */
  volatile uint32 R;
  struct {
    volatile uint32 CSS:32;                  /* Channel Stop Status */
  } B;
} WAKEUP_EDMA5_MP_MP_SSR_HIGH_tag;

typedef union WAKEUP_EDMA5_MP_CH_GRPRI_union_tag { /* Channel Arbitration Group Register */
  volatile uint32 R;
  struct {
    volatile uint32 GRPRI:6;                 /* Arbitration group per channel. */
    volatile uint32 _unused_0:26;
  } B;
} WAKEUP_EDMA5_MP_CH_GRPRI_tag;

typedef union WAKEUP_EDMA5_MP_CH_MUX_union_tag { /* Channel Multiplexor Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 SRC:7;                   /* Service Request Source */
    volatile uint32 _unused_0:25;            /* Reserved */
  } B;
} WAKEUP_EDMA5_MP_CH_MUX_tag;

typedef union WAKEUP_EDMA5_MP_CH_PROT_union_tag { /* Channel Protection Register */
  volatile uint32 R;
  struct {
    volatile uint32 MID:4;                   /* Master ID */
    volatile uint32 _unused_19:9;
    volatile uint32 INSTR:1;                 /* Instruction/Data Access */
    volatile uint32 SEC:1;                   /* Security Level */
    volatile uint32 PAL:1;                   /* Privileged Access Level */
    volatile uint32 EMI:1;                   /* Enable Master ID replication */
    volatile uint32 _unused_0:15;
  } B;
} WAKEUP_EDMA5_MP_CH_PROT_tag;

struct WAKEUP_EDMA5_MP_tag {
  WAKEUP_EDMA5_MP_MP_CSR_tag MP_CSR;   /* Management Page Control Register */
  WAKEUP_EDMA5_MP_MP_ES_tag MP_ES;     /* Management Page Error Status Register */
  WAKEUP_EDMA5_MP_MP_INT_LOW_tag MP_INT_LOW; /* Management Page Interrupt Request Status Register */
  WAKEUP_EDMA5_MP_MP_INT_HIGH_tag MP_INT_HIGH; /* Management Page Interrupt Request Status Register */
  WAKEUP_EDMA5_MP_MP_HRS_LOW_tag MP_HRS_LOW; /* Hardware Request Status Register */
  WAKEUP_EDMA5_MP_MP_HRS_HIGH_tag MP_HRS_HIGH; /* Hardware Request Status Register */
  uint8 WAKEUP_EDMA5_MP_reserved0[8];
  WAKEUP_EDMA5_MP_MP_STOPCH_tag MP_STOPCH; /* Stop Channel Register */
  uint8 WAKEUP_EDMA5_MP_reserved1[12];
  WAKEUP_EDMA5_MP_MP_SSR_LOW_tag MP_SSR_LOW; /* Stop Status Register */
  WAKEUP_EDMA5_MP_MP_SSR_HIGH_tag MP_SSR_HIGH; /* Stop Status Register */
  uint8 WAKEUP_EDMA5_MP_reserved2[200];
  WAKEUP_EDMA5_MP_CH_GRPRI_tag CH_GRPRI[64]; /* Channel Arbitration Group Register */
  WAKEUP_EDMA5_MP_CH_MUX_tag CH_MUX[64]; /* Channel Multiplexor Configuration */
  uint8 WAKEUP_EDMA5_MP_reserved3[256];
  WAKEUP_EDMA5_MP_CH_PROT_tag CH_PROT[64]; /* Channel Protection Register */
};

/* ============================================================================
   =============================== Module: WAKEUP_ERM =========================
   ============================================================================ */
typedef union WAKEUP_ERM_CR0_union_tag { /* ERM Configuration Register 0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;            /* Reserved */
    volatile uint32 _unused_28:2;            /* Reserved */
    volatile uint32 _unused_26:2;            /* Reserved */
    volatile uint32 _unused_24:2;            /* Reserved */
    volatile uint32 _unused_22:2;            /* Reserved */
    volatile uint32 _unused_20:2;            /* Reserved */
    volatile uint32 _unused_18:2;            /* Reserved */
    volatile uint32 _unused_16:2;            /* Reserved */
    volatile uint32 _unused_14:2;            /* Reserved */
    volatile uint32 _unused_12:2;            /* Reserved */
    volatile uint32 _unused_10:2;            /* Reserved */
    volatile uint32 _unused_8:2;             /* Reserved */
    volatile uint32 _unused_6:2;             /* Reserved */
    volatile uint32 _unused_4:2;             /* Reserved */
    volatile uint32 _unused_2:2;             /* Reserved */
    volatile uint32 ENCIE0:1;                /* ENCIE0 */
    volatile uint32 ESCIE0:1;                /* ESCIE0 */
  } B;
} WAKEUP_ERM_CR0_tag;

typedef union WAKEUP_ERM_SR0_union_tag { /* ERM Status Register 0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_28:4;            /* Reserved */
    volatile uint32 _unused_24:4;            /* Reserved */
    volatile uint32 _unused_20:4;            /* Reserved */
    volatile uint32 _unused_16:4;            /* Reserved */
    volatile uint32 _unused_12:4;            /* Reserved */
    volatile uint32 _unused_8:4;             /* Reserved */
    volatile uint32 _unused_4:4;             /* Reserved */
    volatile uint32 _unused_2:2;             /* Reserved */
    volatile uint32 NCE0:1;                  /* NCE0 */
    volatile uint32 SBC0:1;                  /* SBC0 */
  } B;
} WAKEUP_ERM_SR0_tag;

typedef union WAKEUP_ERM_EAR0_union_tag { /* ERM Memory 0 Error Address Register */
  volatile uint32 R;
  struct {
    volatile uint32 EAR:32;                  /* EAR */
  } B;
} WAKEUP_ERM_EAR0_tag;

typedef union WAKEUP_ERM_SYN0_union_tag { /* ERM Memory 0 Syndrome Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_8:24;            /* Reserved */
    volatile uint32 SYNDROME:8;              /* SYNDROME */
  } B;
} WAKEUP_ERM_SYN0_tag;

typedef union WAKEUP_ERM_CORR_ERR_CNT0_union_tag { /* ERM Memory 0 Correctable Error Count Register */
  volatile uint32 R;
  struct {
    volatile uint32 COUNT:8;                 /* Memory n Correctable Error Count */
    volatile uint32 _unused_0:24;            /* Reserved */
  } B;
} WAKEUP_ERM_CORR_ERR_CNT0_tag;

struct WAKEUP_ERM_tag {
  WAKEUP_ERM_CR0_tag CR0;              /* ERM Configuration Register 0 */
  uint8 WAKEUP_ERM_reserved0[12];
  WAKEUP_ERM_SR0_tag SR0;              /* ERM Status Register 0 */
  uint8 WAKEUP_ERM_reserved1[236];
  WAKEUP_ERM_EAR0_tag EAR0;            /* ERM Memory 0 Error Address Register */
  WAKEUP_ERM_SYN0_tag SYN0;            /* ERM Memory 0 Syndrome Register */
  WAKEUP_ERM_CORR_ERR_CNT0_tag CORR_ERR_CNT0; /* ERM Memory 0 Correctable Error Count Register */
};

/* ============================================================================
   =============================== Module: WAKEUP_EDMA5_TCD ===================
   ============================================================================ */
typedef union WAKEUP_EDMA5_TCD_TCD_CH_CSR_union_tag { /* Channel Control and Status */
  volatile uint32 R;
  struct {
    volatile uint32 ERQ:1;                   /* Enable DMA Request */
    volatile uint32 EARQ:1;                  /* Enable Asynchronous DMA Request in Stop Mode for Channel */
    volatile uint32 EEI:1;                   /* Enable Error Interrupt */
    volatile uint32 _unused_26:3;
    volatile uint32 CX:1;                    /* Stop Transferring Data */
    volatile uint32 ECX:1;                   /* Stop Transferring Data and Set an Error */
    volatile uint32 _unused_20:4;
    volatile uint32 SWAP:4;                  /* Swap Size */
    volatile uint32 SIGNEXT:7;               /* Sign Extension, merged from more bitFields with different positions or sizes */
    volatile uint32 _unused_2:7;
    volatile uint32 DONE:1;                  /* Channel Done Flag */
    volatile uint32 ACTIVE:1;                /* Channel Active */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_CSR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CH_ES_union_tag { /* Channel Error Status */
  volatile uint32 R;
  struct {
    volatile uint32 DBE:1;                   /* Destination Bus Error */
    volatile uint32 SBE:1;                   /* Source Bus Error */
    volatile uint32 SGE:1;                   /* Scatter/Gather Configuration Error */
    volatile uint32 NCE:1;                   /* NBYTES or CITER Configuration Error */
    volatile uint32 DOE:1;                   /* Destination Offset Error */
    volatile uint32 DAE:1;                   /* Destination Address Error */
    volatile uint32 SOE:1;                   /* Source Offset Error */
    volatile uint32 SAE:1;                   /* Source Address Error */
    volatile uint32 ECX:1;                   /* Transfer Canceled */
    volatile uint32 UCE:1;                   /* Uncorrectable TCD Error During Channel Execution */
    volatile uint32 _unused_21:1;
    volatile uint32 _unused_1:20;            /* Reserved */
    volatile uint32 ERR:1;                   /* Error in Channel Flag */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_ES_tag;

typedef WAKEUP_EDMA5_TCD_TCD_CH_ES_tag eDMA_TCD_TCD_CH_ES_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CH_INT_union_tag { /* Channel Interrupt Status */
  volatile uint32 R;
  struct {
    volatile uint32 INT:1;                   /* Interrupt Request Flag */
    volatile uint32 _unused_0:31;            /* Reserved */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_INT_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CH_SBR_union_tag { /* Channel System Bus */
  volatile uint32 R;
  struct {
    volatile uint32 MID:4;                   /* Master ID */
    volatile uint32 _unused_19:9;
    volatile uint32 INSTR:1;                 /* Instruction or Data Access */
    volatile uint32 _unused_17:1;
    volatile uint32 PAL:1;                   /* Privileged Access Level */
    volatile uint32 EMI:1;                   /* Enable Master ID Replication */
    volatile uint32 ATTR:6;                  /* Attribute Output */
    volatile uint32 _unused_0:9;             /* Reserved */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_SBR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CH_PRI_union_tag { /* Channel Priority */
  volatile uint32 R;
  struct {
    volatile uint32 APL:3;                   /* Arbitration Priority Level */
    volatile uint32 _unused_2:27;            /* Reserved */
    volatile uint32 DPA:1;                   /* Disable Preempt Ability */
    volatile uint32 ECP:1;                   /* Enable Channel Preemption */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_PRI_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CH_MATTR_union_tag { /* Memory Attributes */
  volatile uint32 R;
  struct {
    volatile uint32 RCACHE:4;                /* Read Cache Attributes */
    volatile uint32 WCACHE:4;                /* Write Cache Attributes */
    volatile uint32 RDOMAINS:2;              /* Read Domain */
    volatile uint32 WDOMAINS:2;              /* Write Domain */
    volatile uint32 WSNOOPS:4;               /* Write Snoop Transaction Type */
    volatile uint32 WSENB:1;                 /* Stash Local Processor Enable */
    volatile uint32 WSTHRD:1;                /* Stash Local Processor Thread */
    volatile uint32 WSCORE:4;                /* Stash Local Processor ID */
    volatile uint32 _unused_0:10;            /* Reserved */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CH_MATTR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_SADDR_union_tag { /* TCD Source Address */
  volatile uint32 R;
  struct {
    volatile uint32 SADDR:32;                /* Source Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_SADDR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_SADDR_HIGH_union_tag { /* TCD Source Address */
  volatile uint32 R;
  struct {
    volatile uint32 SADDR:32;                /* Source Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_SADDR_HIGH_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_SOFF_union_tag { /* TCD Signed Source Address Offset */
  volatile uint16 R;
  struct {
    volatile uint16 SOFF:16;                 /* Source Address Signed Offset */
  } B;
} WAKEUP_EDMA5_TCD_TCD_SOFF_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_ATTR_union_tag { /* TCD Transfer Attributes */
  volatile uint16 R;
  struct {
    volatile uint16 DSIZE:3;                 /* Destination Data Transfer Size */
    volatile uint16 DMOD:5;                  /* Destination Address Modulo */
    volatile uint16 SSIZE:3;                 /* Source Data Transfer Size */
    volatile uint16 SMOD:5;                  /* Source Address Modulo */
  } B;
} WAKEUP_EDMA5_TCD_TCD_ATTR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFNO_union_tag { /* TCD Transfer Size Without Minor Loop Offsets */
  volatile uint32 R;
  struct {
    volatile uint32 NBYTES:30;               /* Number of Bytes to Transfer Per Service Request */
    volatile uint32 DMLOE:1;                 /* Destination Minor Loop Offset Enable */
    volatile uint32 SMLOE:1;                 /* Source Minor Loop Offset Enable */
  } B;
} WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFNO_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFYES_union_tag { /* TCD Transfer Size with Minor Loop Offsets */
  volatile uint32 R;
  struct {
    volatile uint32 NBYTES:10;               /* Number of Bytes to Transfer Per Service Request */
    volatile uint32 MLOFF:20;                /* Minor Loop Offset */
    volatile uint32 DMLOE:1;                 /* Destination Minor Loop Offset Enable */
    volatile uint32 SMLOE:1;                 /* Source Minor Loop Offset Enable */
  } B;
} WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFYES_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_NBYTES_union_tag {
  WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFNO_tag NBYTES_MLOFFNO; /* TCD Transfer Size Without Minor Loop Offsets */
  WAKEUP_EDMA5_TCD_TCD_NBYTES_NBYTES_MLOFFYES_tag NBYTES_MLOFFYES; /* TCD Transfer Size with Minor Loop Offsets */
} WAKEUP_EDMA5_TCD_TCD_NBYTES_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_union_tag { /* TCD Last Source Address Adjustment and Store DADDR Address */
  volatile uint32 R;
  struct {
    volatile uint32 SLAST_SDA:32;            /* Last Source Address Adjustment and Store DADDR Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_HIGH_union_tag { /* TCD Last Source Address Adjustment and Store DADDR Address */
  volatile uint32 R;
  struct {
    volatile uint32 SLAST_SDA:32;            /* Last Source Address Adjustment and Store DADDR Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_HIGH_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_DADDR_union_tag { /* TCD Destination Address */
  volatile uint32 R;
  struct {
    volatile uint32 DADDR:32;                /* Destination Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_DADDR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_DADDR_HIGH_union_tag { /* TCD Destination Address */
  volatile uint32 R;
  struct {
    volatile uint32 DADDR:32;                /* Destination Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_DADDR_HIGH_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_union_tag { /* TCD Last Destination Address Adjustment and Scatter/Gather Address */
  volatile uint32 R;
  struct {
    volatile uint32 DLAST_SGA:32;            /* Final Destination Address Adjustment and Scatter/Gather Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_HIGH_union_tag { /* TCD Last Destination Address Adjustment and Scatter/Gather Address */
  volatile uint32 R;
  struct {
    volatile uint32 DLAST_SGA:32;            /* Final Destination Address Adjustment and Scatter/Gather Address */
  } B;
} WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_HIGH_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_DOFF_union_tag { /* TCD Signed Destination Address Offset */
  volatile uint16 R;
  struct {
    volatile uint16 DOFF:16;                 /* Destination Address Signed Offset */
  } B;
} WAKEUP_EDMA5_TCD_TCD_DOFF_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKNO_union_tag { /* TCD Current Major Loop Count (Minor Loop Channel Linking Disabled) */
  volatile uint16 R;
  struct {
    volatile uint16 CITER:15;                /* Current Major Iteration Count */
    volatile uint16 ELINK:1;                 /* Enable Channel-to-Channel Linking on Minor-Loop Completion */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKNO_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKYES_union_tag { /* TCD Current Major Loop Count (Minor Loop Channel Linking Enabled) */
  volatile uint16 R;
  struct {
    volatile uint16 CITER:9;                 /* Current Major Iteration Count */
    volatile uint16 LINKCH:6;                /* Minor Loop Link Channel Number */
    volatile uint16 ELINK:1;                 /* Enable Channel-to-Channel Linking on Minor-Loop Complete */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKYES_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CITER_union_tag {
  WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKNO_tag CITER_ELINKNO; /* TCD Current Major Loop Count (Minor Loop Channel Linking Disabled) */
  WAKEUP_EDMA5_TCD_TCD_CITER_CITER_ELINKYES_tag CITER_ELINKYES; /* TCD Current Major Loop Count (Minor Loop Channel Linking Enabled) */
} WAKEUP_EDMA5_TCD_TCD_CITER_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_CSR_union_tag { /* TCD Control and Status */
  volatile uint16 R;
  struct {
    volatile uint16 START:1;                 /* Channel Start */
    volatile uint16 INTMAJOR:1;              /* Enable an Interrupt when Major Iteration Count Completes */
    volatile uint16 INTHALF:1;               /* Enable an Interrupt when Major Counter is Half Complete */
    volatile uint16 DREQ:1;                  /* Disable Request */
    volatile uint16 ESG:1;                   /* Enable Scatter/Gather Processing */
    volatile uint16 MAJORELINK:1;            /* Enable Channel-to-Channel Linking on Major Loop Complete */
    volatile uint16 EEOP:1;                  /* Enable End-of-Packet Processing */
    volatile uint16 ESDA:1;                  /* Enable Store Destination Address */
    volatile uint16 MAJORLINKCH:6;           /* Major Loop Link Channel Number */
    volatile uint16 TMC:2;                   /* Transfer Mode Control */
  } B;
} WAKEUP_EDMA5_TCD_TCD_CSR_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKNO_union_tag { /* TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled) */
  volatile uint16 R;
  struct {
    volatile uint16 BITER:15;                /* Starting Major Iteration Count */
    volatile uint16 ELINK:1;                 /* Enables Channel-to-Channel Linking on Minor Loop Complete */
  } B;
} WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKNO_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKYES_union_tag { /* TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled) */
  volatile uint16 R;
  struct {
    volatile uint16 BITER:9;                 /* Starting Major Iteration Count */
    volatile uint16 LINKCH:6;                /* Link Channel Number */
    volatile uint16 ELINK:1;                 /* Enables Channel-to-Channel Linking on Minor Loop Complete */
  } B;
} WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKYES_tag;

typedef union WAKEUP_EDMA5_TCD_TCD_BITER_union_tag {
  WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKNO_tag BITER_ELINKNO; /* TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled) */
  WAKEUP_EDMA5_TCD_TCD_BITER_BITER_ELINKYES_tag BITER_ELINKYES; /* TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled) */
} WAKEUP_EDMA5_TCD_TCD_BITER_tag;

typedef struct WAKEUP_EDMA5_TCD_TCD_struct_tag {
  WAKEUP_EDMA5_TCD_TCD_CH_CSR_tag CH_CSR; /* Channel Control and Status */
  WAKEUP_EDMA5_TCD_TCD_CH_ES_tag CH_ES; /* Channel Error Status */
  WAKEUP_EDMA5_TCD_TCD_CH_INT_tag CH_INT; /* Channel Interrupt Status */
  WAKEUP_EDMA5_TCD_TCD_CH_SBR_tag CH_SBR; /* Channel System Bus */
  WAKEUP_EDMA5_TCD_TCD_CH_PRI_tag CH_PRI; /* Channel Priority */
  uint8 TCD_reserved0[4];
  WAKEUP_EDMA5_TCD_TCD_CH_MATTR_tag CH_MATTR; /* Memory Attributes */
  uint8 TCD_reserved1[4];
  WAKEUP_EDMA5_TCD_TCD_SADDR_tag SADDR; /* TCD Source Address */
  WAKEUP_EDMA5_TCD_TCD_SADDR_HIGH_tag SADDR_HIGH; /* TCD Source Address */
  WAKEUP_EDMA5_TCD_TCD_SOFF_tag SOFF;  /* TCD Signed Source Address Offset */
  WAKEUP_EDMA5_TCD_TCD_ATTR_tag ATTR;  /* TCD Transfer Attributes */
  WAKEUP_EDMA5_TCD_TCD_NBYTES_tag NBYTES;
  WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_tag SLAST_SDA; /* TCD Last Source Address Adjustment and Store DADDR Address */
  WAKEUP_EDMA5_TCD_TCD_SLAST_SDA_HIGH_tag SLAST_SDA_HIGH; /* TCD Last Source Address Adjustment and Store DADDR Address */
  WAKEUP_EDMA5_TCD_TCD_DADDR_tag DADDR; /* TCD Destination Address */
  WAKEUP_EDMA5_TCD_TCD_DADDR_HIGH_tag DADDR_HIGH; /* TCD Destination Address */
  WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_tag DLAST_SGA; /* TCD Last Destination Address Adjustment and Scatter/Gather Address */
  WAKEUP_EDMA5_TCD_TCD_DLAST_SGA_HIGH_tag DLAST_SGA_HIGH; /* TCD Last Destination Address Adjustment and Scatter/Gather Address */
  WAKEUP_EDMA5_TCD_TCD_DOFF_tag DOFF;  /* TCD Signed Destination Address Offset */
  WAKEUP_EDMA5_TCD_TCD_CITER_tag CITER;
  WAKEUP_EDMA5_TCD_TCD_CSR_tag CSR;    /* TCD Control and Status */
  WAKEUP_EDMA5_TCD_TCD_BITER_tag BITER;
  uint8 TCD_reserved2[32688];
} WAKEUP_EDMA5_TCD_TCD_tag;
typedef WAKEUP_EDMA5_TCD_TCD_tag eDMA_TCD_TCD_tag;

struct WAKEUP_EDMA5_TCD_tag {
  WAKEUP_EDMA5_TCD_TCD_tag TCD[64];
};

/* ============================================================================
   =============================== Module: VFCCU ==============================
   ============================================================================ */
typedef union SAFETYBASE_VFCCU_GFLTRC_union_tag { /* Global Fault Recovery */
  volatile uint32 R;
  struct {
    volatile uint32 RHWSW0:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW1:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW2:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW3:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW4:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW5:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW6:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW7:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW8:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW9:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW10:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW11:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW12:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW13:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW14:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW15:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW16:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW17:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW18:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW19:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW20:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW21:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW22:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW23:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW24:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW25:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW26:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW27:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW28:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW29:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW30:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    volatile uint32 RHWSW31:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} SAFETYBASE_VFCCU_GFLTRC_tag;

typedef union SAFETYBASE_VFCCU_GFLTOVDC_union_tag { /* Global Fault Overflow Detection */
  volatile uint32 R;
  struct {
    volatile uint32 OVF_DIS0:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS1:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS2:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS3:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS4:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS5:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS6:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS7:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS8:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS9:1;              /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS10:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS11:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS12:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS13:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS14:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS15:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS16:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS17:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS18:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS19:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS20:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS21:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS22:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS23:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS24:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS25:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS26:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS27:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS28:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS29:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS30:1;             /* Fault Overflow Detection Disable */
    volatile uint32 OVF_DIS31:1;             /* Fault Overflow Detection Disable */
  } B;
} SAFETYBASE_VFCCU_GFLTOVDC_tag;

typedef union AON_FCCU_FHFLTENC_union_tag { /* Fault Enable */
  volatile uint32 R;
  struct {
    volatile uint32 EN0:1;                   /* Fault Enable */
    volatile uint32 EN1:1;                   /* Fault Enable */
    volatile uint32 EN2:1;                   /* Fault Enable */
    volatile uint32 EN3:1;                   /* Fault Enable */
    volatile uint32 EN4:1;                   /* Fault Enable */
    volatile uint32 EN5:1;                   /* Fault Enable */
    volatile uint32 EN6:1;                   /* Fault Enable */
    volatile uint32 EN7:1;                   /* Fault Enable */
    volatile uint32 EN8:1;                   /* Fault Enable */
    volatile uint32 EN9:1;                   /* Fault Enable */
    volatile uint32 EN10:1;                  /* Fault Enable */
    volatile uint32 EN11:1;                  /* Fault Enable */
    volatile uint32 EN12:1;                  /* Fault Enable */
    volatile uint32 EN13:1;                  /* Fault Enable */
    volatile uint32 EN14:1;                  /* Fault Enable */
    volatile uint32 EN15:1;                  /* Fault Enable */
    volatile uint32 EN16:1;                  /* Fault Enable */
    volatile uint32 EN17:1;                  /* Fault Enable */
    volatile uint32 EN18:1;                  /* Fault Enable */
    volatile uint32 EN19:1;                  /* Fault Enable */
    volatile uint32 EN20:1;                  /* Fault Enable */
    volatile uint32 EN21:1;                  /* Fault Enable */
    volatile uint32 EN22:1;                  /* Fault Enable */
    volatile uint32 EN23:1;                  /* Fault Enable */
    volatile uint32 EN24:1;                  /* Fault Enable */
    volatile uint32 EN25:1;                  /* Fault Enable */
    volatile uint32 EN26:1;                  /* Fault Enable */
    volatile uint32 EN27:1;                  /* Fault Enable */
    volatile uint32 EN28:1;                  /* Fault Enable */
    volatile uint32 EN29:1;                  /* Fault Enable */
    volatile uint32 EN30:1;                  /* Fault Enable */
    volatile uint32 EN31:1;                  /* Fault Enable */
  } B;
} SAFETYBASE_VFCCU_FHFLTENC_tag;

typedef union SAFETYBASE_VFCCU_FHFLTS_union_tag { /* Fault Status */
  volatile uint32 R;
  struct {
    volatile uint32 STAT0:1;                 /* Fault Status */
    volatile uint32 STAT1:1;                 /* Fault Status */
    volatile uint32 STAT2:1;                 /* Fault Status */
    volatile uint32 STAT3:1;                 /* Fault Status */
    volatile uint32 STAT4:1;                 /* Fault Status */
    volatile uint32 STAT5:1;                 /* Fault Status */
    volatile uint32 STAT6:1;                 /* Fault Status */
    volatile uint32 STAT7:1;                 /* Fault Status */
    volatile uint32 STAT8:1;                 /* Fault Status */
    volatile uint32 STAT9:1;                 /* Fault Status */
    volatile uint32 STAT10:1;                /* Fault Status */
    volatile uint32 STAT11:1;                /* Fault Status */
    volatile uint32 STAT12:1;                /* Fault Status */
    volatile uint32 STAT13:1;                /* Fault Status */
    volatile uint32 STAT14:1;                /* Fault Status */
    volatile uint32 STAT15:1;                /* Fault Status */
    volatile uint32 STAT16:1;                /* Fault Status */
    volatile uint32 STAT17:1;                /* Fault Status */
    volatile uint32 STAT18:1;                /* Fault Status */
    volatile uint32 STAT19:1;                /* Fault Status */
    volatile uint32 STAT20:1;                /* Fault Status */
    volatile uint32 STAT21:1;                /* Fault Status */
    volatile uint32 STAT22:1;                /* Fault Status */
    volatile uint32 STAT23:1;                /* Fault Status */
    volatile uint32 STAT24:1;                /* Fault Status */
    volatile uint32 STAT25:1;                /* Fault Status */
    volatile uint32 STAT26:1;                /* Fault Status */
    volatile uint32 STAT27:1;                /* Fault Status */
    volatile uint32 STAT28:1;                /* Fault Status */
    volatile uint32 STAT29:1;                /* Fault Status */
    volatile uint32 STAT30:1;                /* Fault Status */
    volatile uint32 STAT31:1;                /* Fault Status */
  } B;
} SAFETYBASE_VFCCU_FHFLTS_tag;

typedef union SAFETYBASE_VFCCU_FHFLTRKC_union_tag { /* Fault Reaction Set Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 RKNSEL0:3;               /* Reaction Selection */
    volatile uint32 _unused_24:5;
    volatile uint32 RKNSEL1:3;               /* Reaction Selection */
    volatile uint32 _unused_16:5;
    volatile uint32 RKNSEL2:3;               /* Reaction Selection */
    volatile uint32 _unused_8:5;
    volatile uint32 RKNSEL3:3;               /* Reaction Selection */
    volatile uint32 _unused_0:5;
  } B;
} SAFETYBASE_VFCCU_FHFLTRKC_tag;

typedef union SAFETYBASE_VFCCU_FHIMRKC_union_tag { /* Immediate Reaction Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTEN0:1;               /* EOUT Enable */
    volatile uint32 EOUTEN1:1;               /* EOUT Enable */
    volatile uint32 RKNEN0:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN1:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN2:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN3:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN4:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN5:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN6:1;                /* Reaction Line Enable */
    volatile uint32 _unused_0:23;
  } B;
} SAFETYBASE_VFCCU_FHIMRKC_tag;

typedef union SAFETYBASE_VFCCU_FHDLRKC_union_tag { /* Delayed Reaction Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTEN0:1;               /* EOUT Enable */
    volatile uint32 EOUTEN1:1;               /* EOUT Enable */
    volatile uint32 RKNEN0:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN1:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN2:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN3:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN4:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN5:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN6:1;                /* Reaction Line Enable */
    volatile uint32 _unused_0:23;
  } B;
} SAFETYBASE_VFCCU_FHDLRKC_tag;

typedef struct { /* Reaction Configuration */
    SAFETYBASE_VFCCU_FHIMRKC_tag FHIMRKC; /* Immediate Reaction Configuration */
    uint8 SAFETYBASE_VFCCU_reserved0[12];
    SAFETYBASE_VFCCU_FHDLRKC_tag FHDLRKC; /* Delayed Reaction Configuration */
    uint8 SAFETYBASE_VFCCU_reserved1[12];
} SAFETYBASE_VFCCU_FHRKC_tag;

typedef union AON_FCCU_GRKNTIMC_union_tag { /* Global Reaction Timer Period */
  volatile uint32 R;
  struct {
    volatile uint32 RKTIMCFG:32;             /* Reaction Timer Period */
  } B;
} AON_FCCU_GRKNTIMC_tag;

typedef union AON_FCCU_GRKNTIMS_union_tag { /* Global Reaction Timer Status */
  volatile uint32 R;
  struct {
    volatile uint32 RKTIMVAL:32;             /* Current Reaction Timer */
  } B;
} AON_FCCU_GRKNTIMS_tag;

typedef union AON_FCCU_GCTRL_union_tag { /* Global Space Control */
  volatile uint32 R;
  struct {
    volatile uint32 OVF_EN:1;                /* Overflow Enable */
    volatile uint32 _unused_0:31;
  } B;
} AON_FCCU_GCTRL_tag;

typedef union AON_FCCU_GINTOVFS_union_tag { /* Global DID FSM Status */
  volatile uint32 R;
  struct {
    volatile uint32 FSMSTATE:2;              /* FSM State */
    volatile uint32 _unused_25:5;
    volatile uint32 FLTSERV:1;               /* Fault Serve */
    volatile uint32 OVF_DET:1;               /* Overflow Detect */
    volatile uint32 _unused_21:2;
    volatile uint32 _unused_16:5;
    volatile uint32 SERV_DID:4;              /* Domain Being Serviced */
    volatile uint32 _unused_8:4;
    volatile uint32 OVF_DID:4;               /* Overflow DID */
    volatile uint32 _unused_0:4;
  } B;
} AON_FCCU_GINTOVFS_tag;

typedef union AON_FCCU_GOVFRKC_union_tag { /* Global Overflow Reaction */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTEN0:1;               /* EOUT Enable */
    volatile uint32 EOUTEN1:1;               /* EOUT Enable */
    volatile uint32 RKNEN0:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN1:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN2:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN3:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN4:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN5:1;                /* Reaction Line Enable */
    volatile uint32 RKNEN6:1;                /* Reaction Line Enable */
    volatile uint32 _unused_0:23;
  } B;
} AON_FCCU_GOVFRKC_tag;

typedef union AON_FCCU_GMEOUTDC_union_tag { /* Global Minimum EOUT Duration */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTMIND:32;             /* EOUT Minimum Duration */
  } B;
} AON_FCCU_GMEOUTDC_tag;

typedef union AON_FCCU_GEOUTTCT_union_tag { /* Global EOUT Timer Disable */
  volatile uint32 R;
  struct {
    volatile uint32 TMRDIS0:1;               /* Timer Disable */
    volatile uint32 TMRDIS1:1;               /* Timer Disable */
    volatile uint32 _unused_0:30;
  } B;
} AON_FCCU_GEOUTTCT_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTPNC_union_tag { /* Global EOUT Pin */
  volatile uint32 R;
  struct {
    volatile uint32 OBE_VALID:1;             /* Output Buffer Enable Valid */
    volatile uint32 OBE_STAT:1;              /* Output Buffer Enable Status */
    volatile uint32 _unused_29:1;
    volatile uint32 DO_STAT:1;               /* Data Output Status */
    volatile uint32 VAL_CTRL:2;              /* Invert Output */
    volatile uint32 _unused_24:2;
    volatile uint32 IBE:1;                   /* Input Buffer Enable */
    volatile uint32 IND_STAT:1;              /* Input Data From Pad */
    volatile uint32 INV_IP:1;                /* Invert Input */
    volatile uint32 _unused_16:5;
    volatile uint32 SOC_PAD_CTRL1:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL2:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL3:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL4:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL5:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL6:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL7:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL8:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL9:1;         /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL10:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL11:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL12:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL13:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL14:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL15:1;        /* SoC Pad Control */
    volatile uint32 SOC_PAD_CTRL16:1;        /* SoC Pad Control */
  } B;
} AON_FCCU_GLB_EOUT_GEOUTPNC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTPMC_union_tag { /* Global EOUT Pin Map */
  volatile uint32 R;
  struct {
    volatile uint32 SPLENB0:1;               /* Special Enable Pins */
    volatile uint32 SPLENB1:1;               /* Special Enable Pins */
    volatile uint32 SPLENB2:1;               /* Special Enable Pins */
    volatile uint32 SPLENB3:1;               /* Special Enable Pins */
    volatile uint32 _unused_0:28;
  } B;
} AON_FCCU_GLB_EOUT_GEOUTPMC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTMC_union_tag { /* Global EOUT Mode */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTM:3;                 /* EOUT Pin Mode */
    volatile uint32 INV:1;                   /* Invert EOUT */
    volatile uint32 _unused_0:28;
  } B;
} AON_FCCU_GLB_EOUT_GEOUTMC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTTMS_union_tag { /* Global EOUT Timer Status */
  volatile uint32 R;
  struct {
    volatile uint32 EOUTDVAL:32;             /* EOUT Timer Current Value */
  } B;
} AON_FCCU_GLB_EOUT_GEOUTTMS_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTDIC_union_tag { /* Global EOUT DID */
  volatile uint32 R;
  struct {
    volatile uint32 DID_EOUT:4;              /* DID for Fault on EOUT */
    volatile uint32 _unused_0:28;
  } B;
} AON_FCCU_GLB_EOUT_GEOUTDIC_tag;

typedef struct AON_FCCU_GLB_EOUT_struct_tag {
  AON_FCCU_GLB_EOUT_GEOUTPNC_tag GEOUTPNC; /* Global EOUT Pin */
  AON_FCCU_GLB_EOUT_GEOUTPMC_tag GEOUTPMC; /* Global EOUT Pin Map */
  AON_FCCU_GLB_EOUT_GEOUTMC_tag GEOUTMC; /* Global EOUT Mode */
  AON_FCCU_GLB_EOUT_GEOUTTMS_tag GEOUTTMS; /* Global EOUT Timer Status */
  AON_FCCU_GLB_EOUT_GEOUTDIC_tag GEOUTDIC; /* Global EOUT DID */
} AON_FCCU_GLB_EOUT_tag;

typedef union AON_FCCU_GDBGCFG_union_tag { /* Global Debug */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_16:16;
    volatile uint32 FRZ:1;                   /* Freeze On First Fault */
    volatile uint32 _unused_0:15;
  } B;
} AON_FCCU_GDBGCFG_tag;

typedef union AON_FCCU_GDBGSTAT_union_tag { /* Global Debug Status */
  volatile uint32 R;
  struct {
    volatile uint32 FLTIND:8;                /* Fault Index */
    volatile uint32 _unused_2:22;
    volatile uint32 _unused_0:2;
  } B;
} AON_FCCU_GDBGSTAT_tag;

typedef union AON_FCCU_GDPFSTAT_union_tag { /* Global Debug Pending Fault Status */
  volatile uint32 R;
  struct {
    volatile uint32 PENDFLT0:1;              /* Pending Fault Status for corresponding EOUT pin */
    volatile uint32 PENDFLT1:1;              /* Pending Fault Status for corresponding EOUT pin */
    volatile uint32 _unused_0:30;
  } B;
} AON_FCCU_GDPFSTAT_tag;

typedef union AON_FCCU_GDALTRLD_union_tag { /* Global Debug Alternate Reload Status */
  volatile uint32 R;
  struct {
    volatile uint32 ALTRLD0:1;               /* Alternate timer reload status for corresponding EOUT pin */
    volatile uint32 ALTRLD1:1;               /* Alternate timer reload status for corresponding EOUT pin */
    volatile uint32 _unused_0:30;
  } B;
} AON_FCCU_GDALTRLD_tag;

typedef union AON_FCCU_FHCFG0_union_tag { /* Fault Handler */
  volatile uint32 R;
  struct {
    volatile uint32 FHIDEN:1;                /* Fault Handler Enable */
    volatile uint32 _unused_0:31;
  } B;
} AON_FCCU_FHCFG0_tag;

typedef union AON_FCCU_FHSRVDS0_union_tag { /* Fault Handler Status */
  volatile uint32 R;
  struct {
    volatile uint32 SERV_DID:4;              /* DID Being Serviced */
    volatile uint32 _unused_24:4;
    volatile uint32 AGGFLTS:1;               /* Aggregated Fault Status */
    volatile uint32 _unused_0:23;
  } B;
} AON_FCCU_FHSRVDS0_tag;

struct SAFETYBASE_VFCCU_tag {
  uint8 AON_FCCU_reserved0[768];
  AON_FCCU_GRKNTIMC_tag GRKNTIMC[1];   /* Global Reaction Timer Period */
  uint8 AON_FCCU_reserved1[316];
  SAFETYBASE_VFCCU_GFLTRC_tag GFLTRC[3];    /* Global Fault Recovery */
  uint8 AON_FCCU_reserved2[2100];
  SAFETYBASE_VFCCU_GFLTOVDC_tag GFLTOVDC[3];    /* Global Fault Overflow Detection */
  uint8 AON_FCCU_reserved3[116];
  AON_FCCU_GRKNTIMS_tag GRKNTIMS;      /* Global Reaction Timer Status */
  AON_FCCU_GCTRL_tag GCTRL;            /* Global Space Control */
  AON_FCCU_GINTOVFS_tag GINTOVFS;      /* Global DID FSM Status */
  uint8 AON_FCCU_reserved4[4];
  AON_FCCU_GOVFRKC_tag GOVFRKC[1];     /* Global Overflow Reaction */
  uint8 AON_FCCU_reserved5[12];
  AON_FCCU_GMEOUTDC_tag GMEOUTDC;      /* Global Minimum EOUT Duration */
  AON_FCCU_GEOUTTCT_tag GEOUTTCT;      /* Global EOUT Timer Disable */
  uint8 AON_FCCU_reserved6[8];
  AON_FCCU_GLB_EOUT_tag GLB_EOUT[2];
  uint8 AON_FCCU_reserved7[600];
  AON_FCCU_GDBGCFG_tag GDBGCFG;        /* Global Debug */
  AON_FCCU_GDBGSTAT_tag GDBGSTAT;      /* Global Debug Status */
  AON_FCCU_GDPFSTAT_tag GDPFSTAT;      /* Global Debug Pending Fault Status */
  AON_FCCU_GDALTRLD_tag GDALTRLD;      /* Global Debug Alternate Reload Status */
  uint8 AON_FCCU_reserved8[1306688];
  AON_FCCU_FHCFG0_tag FHCFG0;          /* Fault Handler */
  AON_FCCU_FHSRVDS0_tag FHSRVDS0;      /* Fault Handler Status */
  uint8 AON_FCCU_reserved9[8];
  SAFETYBASE_VFCCU_FHFLTENC_tag FHFLTENC[3]; /* Fault Enable */
  uint8 AON_FCCU_reserved10[52];
  SAFETYBASE_VFCCU_FHFLTS_tag FHFLTS[3];    /* Fault Status */
  uint8 AON_FCCU_reserved11[52];
  SAFETYBASE_VFCCU_FHFLTRKC_tag FHFLTRKC[20]; /* Fault Reaction Set Configuration */
  uint8 AON_FCCU_reserved12[432];
  SAFETYBASE_VFCCU_FHRKC_tag FHRKC[8]; /* Reaction Configuration */
};

/* ============================================================================
   =============================== Module: TRDC ===============================
   ============================================================================ */
typedef union TRDC_CR_union_tag {    /* TRDC Register */
  volatile uint32 R;
  struct {
    volatile uint32 GVLDM:1;                 /* Global Valid for Domain Assignment Controllers */
    volatile uint32 HRL:4;                   /* Hardware Revision Level */
    volatile uint32 _unused_23:4;
    volatile uint32 _unused_18:5;
    volatile uint32 GVLDB:1;                 /* Global Valid for Memory Block Checkers */
    volatile uint32 GVLDR:1;                 /* Global Valid for Memory Region Checkers */
    volatile uint32 _unused_12:4;
    volatile uint32 _unused_2:10;
    volatile uint32 LK1:1;                   /* Lock Status */
    volatile uint32 _unused_0:1;
  } B;
} TRDC_CR_tag;

typedef union TRDC_HWCFG0_union_tag { /* TRDC Hardware Configuration Register 0 */
  volatile uint32 R;
  struct {
    volatile uint32 NDID:5;                  /* Number of domains */
    volatile uint32 _unused_24:3;
    volatile uint32 NMSTR:8;                 /* Number of bus masters */
    volatile uint32 NMBC:4;                  /* Number of MBCs */
    volatile uint32 _unused_8:4;
    volatile uint32 NMRC:5;                  /* Number of MRCs */
    volatile uint32 MID:3;                   /* Module ID */
  } B;
} TRDC_HWCFG0_tag;

typedef union TRDC_HWCFG1_union_tag { /* TRDC Hardware Configuration Register 1 */
  volatile uint32 R;
  struct {
    volatile uint32 DID:4;                   /* Domain identifier number */
    volatile uint32 _unused_0:28;
  } B;
} TRDC_HWCFG1_tag;

typedef union TRDC_HWCFG2_union_tag { /* TRDC Hardware Configuration Register 2 */
  volatile uint32 R;
  struct {
    volatile uint32 PIDPN:32;                /* Process identifier present */
  } B;
} TRDC_HWCFG2_tag;

typedef union TRDC_HWCFG3_union_tag { /* TRDC Hardware Configuration Register 3 */
  volatile uint32 R;
  struct {
    volatile uint32 PIDPN:32;                /* Process identifier present */
  } B;
} TRDC_HWCFG3_tag;

typedef union TRDC_DACFG_union_tag { /* Domain Assignment Configuration Register */
  volatile uint8 R;
  struct {
    volatile uint8 NMDAR:4;                  /* Number of master domain assignment registers for bus master m */
    volatile uint8 _unused_1:3;
    volatile uint8 NCM:1;                    /* Non-CPU Master */
  } B;
} TRDC_DACFG_tag;

typedef union TRDC_IDAU_CR_union_tag { /* TRDC IDAU Control Register */
  volatile uint32 R;
  struct {
    volatile uint32 VLD:1;                   /* Valid */
    volatile uint32 _unused_29:2;
    volatile uint32 CFGSECEXT:1;             /* Configure Security Extension */
    volatile uint32 MPUSDIS:1;               /* Secure Memory Protection Unit Disabled */
    volatile uint32 MPUNSDIS:1;              /* NonSecure Memory Protection Unit Disabled */
    volatile uint32 SAUDIS:1;                /* Security Attribution Unit Disable */
    volatile uint32 _unused_24:1;
    volatile uint32 LKSVTAIRCR:1;            /* Lock Secure VTOR, Application interrupt and Reset Control Registers */
    volatile uint32 LKNSVTOR:1;              /* Lock Nonsecure Vector Table Offset Register */
    volatile uint32 LKSMPU:1;                /* Lock Secure MPU */
    volatile uint32 LKNSMPU:1;               /* Lock Nonsecure MPU */
    volatile uint32 LKSAU:1;                 /* Lock SAU */
    volatile uint32 _unused_16:3;
    volatile uint32 _unused_13:3;
    volatile uint32 _unused_1:12;
    volatile uint32 PCURRNS:1;               /* Processor current security */
  } B;
} TRDC_IDAU_CR_tag;

typedef union TRDC_FLW_CTL_union_tag { /* TRDC FLW Control */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_2:30;
    volatile uint32 LK:1;                    /* Lock bit */
    volatile uint32 V:1;                     /* Valid bit */
  } B;
} TRDC_FLW_CTL_tag;

typedef union TRDC_FLW_PBASE_union_tag { /* TRDC FLW Physical Base */
  volatile uint32 R;
  struct {
    volatile uint32 PBASE:32;                /* Physical base address */
  } B;
} TRDC_FLW_PBASE_tag;

typedef union TRDC_FLW_ABASE_union_tag { /* TRDC FLW Array Base */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_17:15;
    volatile uint32 ABASE_L:7;               /* Array base address low */
    volatile uint32 ABASE_H:10;              /* Array base address high */
  } B;
} TRDC_FLW_ABASE_tag;

typedef union TRDC_FLW_BCNT_union_tag { /* TRDC FLW Block Count */
  volatile uint32 R;
  struct {
    volatile uint32 BCNT:15;                 /* Block Count */
    volatile uint32 _unused_0:17;
  } B;
} TRDC_FLW_BCNT_tag;

typedef union TRDC_FDID_union_tag { /* TRDC Fault Domain ID */
  volatile uint32 R;
  struct {
    volatile uint32 FDID:4;                  /* Domain ID of Faulted Access */
    volatile uint32 _unused_0:28;
  } B;
} TRDC_FDID_tag;

typedef union TRDC_DERRLOC_union_tag { /* TRDC Domain Error Location Register */
  volatile uint32 R;
  struct {
    volatile uint32 MBCINST:8;               /* MBC instance */
    volatile uint32 _unused_16:8;
    volatile uint32 MRCINST:16;              /* MRC instance */
  } B;
} TRDC_DERRLOC_tag;

typedef union TRDC_DERR_W0_union_tag { /* MBC/MRC Domain Error Word0 Register */
  volatile uint32 R;
  struct {
    volatile uint32 EADDR:32;                /* Error address (31:0-bits) */
  } B;
} TRDC_DERR_W0_tag;

typedef union TRDC_DERR_W1_W2_union_tag { /* MBC/MRC Domain Error Word1 or Word2 Registers */
  volatile uint32 R;

  struct {
    volatile uint32 EDID:4;                  /* Error domain identifier */
    volatile uint32 _unused_24:4;
    volatile uint32 EATR:3;                  /* Error attributes */
    volatile uint32 ERW:1;                   /* Error read/write */
    volatile uint32 _unused_8:12;
    volatile uint32 EPORT:3;                 /* Error port */
    volatile uint32 _unused_2:3;
    volatile uint32 EST:2;                   /* Error state */
  } B_FLAGS;

  struct {
    volatile uint32 EADDR:4;                /* Error address (35:32-bits for HSIO and NOC only) */
    volatile uint32 _unused_0:28;
  } B_ADDR_HI;
} TRDC_DERR_W1_W2_tag;

typedef union TRDC_DERR_W3_union_tag { /* MBC/MRC Domain Error Word3 Register */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_2:30;
    volatile uint32 RECR:2;                  /* Rearm Error Capture Registers */
  } B;
} TRDC_DERR_W3_tag;

typedef struct TRDC_MBC_DERR_struct_tag {
  TRDC_DERR_W0_tag W0;     /* MBC/MRC Domain Error Word0 Register */
  TRDC_DERR_W1_W2_tag W1;  /* MBC/MRC Domain Error Word1 Register */
  TRDC_DERR_W1_W2_tag W2;  /* MBC/MRC Domain Error Word2 Register (for HSIO and NOC domains only) */
  TRDC_DERR_W3_tag W3;     /* MBC/MRC Domain Error Word3 Register */
} TRDC_DERR_tag;

typedef union TRDC_PID16_union_tag { /* Process Identifier (for AON only) */
  volatile uint32 R;
  struct {
    volatile uint32 PID:6;                   /* Process identifier */
    volatile uint32 _unused_5:21;
    volatile uint32 _unused_4:1;
    volatile uint32 _unused_3:1;
    volatile uint32 LK2:2;                   /* Lock */
    volatile uint32 _unused_0:1;
  } B;
} TRDC_PID16_tag;

typedef union TRDC_MDA_DFMT_union_tag { /* Master Domain Assignment */
  volatile uint32 R;

  struct {
    volatile uint32 DID:4;                   /* Domain identifier */
    volatile uint32 PA:2;                    /* Privileged attribute */
    volatile uint32 SA:2;                    /* Secure attribute */
    volatile uint32 DIDB:1;                  /* DID Bypass */
    volatile uint32 _unused_18:5;
    volatile uint32 _unused_16:2;
    volatile uint32 _unused_10:6;
    volatile uint32 SID:6;                   /* Stream ID */
    volatile uint32 KPA:1;                   /* Known Physical Address */
    volatile uint32 DFMT:1;                  /* Domain format */
    volatile uint32 LK1:1;                   /* 1-bit Lock */
    volatile uint32 VLD:1;                   /* Valid */
  } B_DFMT1;

  struct {
    volatile uint32 DID:4;                   /* Domain identifier */
    volatile uint32 DIDS:2;                  /* DID Select */
    volatile uint32 PE:2;                    /* Process identifier enable */
    volatile uint32 PIDM:6;                  /* Process Identifier Mask */
    volatile uint32 SA:2;                    /* Secure attribute */
    volatile uint32 PID:6;                   /* Process Identifier */
    volatile uint32 SID:6;                   /* Stream ID */
    volatile uint32 KPA:1;                   /* Known Physical Address */
    volatile uint32 DFMT:1;                  /* Domain format */
    volatile uint32 LK1:1;                   /* 1-bit Lock */
    volatile uint32 VLD:1;                   /* Valid */
  } B_DFMT0;

  struct {
    volatile uint32 _reserved_dfmt:28;       /* DFMT data */
    volatile uint32 KPA:1;                   /* Known Physical Address */
    volatile uint32 DFMT:1;                  /* Domain format */
    volatile uint32 LK1:1;                   /* 1-bit Lock */
    volatile uint32 VLD:1;                   /* Valid */
  } B;
} TRDC_MDA_DFMT_tag;

typedef union TRDC_MBC_MEM_GLBCFG_union_tag { /* MBC Global Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 NBLKS:10;                /* Number of blocks in this memory */
    volatile uint32 _unused_16:6;
    volatile uint32 SIZE_LOG2:5;             /* Log2 size per block */
    volatile uint32 _unused_0:11;
  } B;
} TRDC_MBC_MEM_GLBCFG_tag;

typedef union TRDC_MBC_NSE_BLK_INDEX_union_tag { /* MBC NonSecure Enable Block Index */
  volatile uint32 R;
  struct {
    volatile uint32 AI:1;                    /* Auto Increment */
    volatile uint32 _unused_30:1;
    volatile uint32 WNDX:4;                  /* Word index into the block NSE bitmap. It selects the BLK_NSE_Wn register, where WNDX determines the value of n. */
    volatile uint32 _unused_24:2;
    volatile uint32 MEM_SEL:4;               /* Memory Select */
    volatile uint32 _unused_16:4;
    volatile uint32 DID_SEL0:1;              /* DID Select */
    volatile uint32 DID_SEL1:1;              /* DID Select */
    volatile uint32 DID_SEL2:1;              /* DID Select */
    volatile uint32 DID_SEL3:1;              /* DID Select */
    volatile uint32 DID_SEL4:1;              /* DID Select */
    volatile uint32 DID_SEL5:1;              /* DID Select */
    volatile uint32 DID_SEL6:1;              /* DID Select */
    volatile uint32 DID_SEL7:1;              /* DID Select */
    volatile uint32 DID_SEL8:1;              /* DID Select */
    volatile uint32 DID_SEL9:1;              /* DID Select */
    volatile uint32 DID_SEL10:1;             /* DID Select */
    volatile uint32 DID_SEL11:1;             /* DID Select */
    volatile uint32 DID_SEL12:1;             /* DID Select */
    volatile uint32 DID_SEL13:1;             /* DID Select */
    volatile uint32 DID_SEL14:1;             /* DID Select */
    volatile uint32 DID_SEL15:1;             /* DID Select */
  } B;
} TRDC_MBC_NSE_BLK_INDEX_tag;

typedef union TRDC_MBC0_NSE_BLK_SET_union_tag { /* MBC NonSecure Enable Block Set */
  volatile uint32 R;
  struct {
    volatile uint32 W1SET:32;                /* Write-1 Set */
  } B;
} TRDC_MBC_NSE_BLK_SET_tag;

typedef union TRDC_MBC0_NSE_BLK_CLR_union_tag { /* MBC NonSecure Enable Block Clear */
  volatile uint32 R;
  struct {
    volatile uint32 W1CLR:32;                /* Write-1 Clear */
  } B;
} TRDC_MBC_NSE_BLK_CLR_tag;

typedef union TRDC_MBC0_NSE_BLK_CLR_ALL_union_tag { /* MBC NonSecure Enable Block Clear All */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 MEMSEL:4;                /* Memory Select */
    volatile uint32 _unused_16:4;
    volatile uint32 DID_SEL0:1;              /* DID Select */
    volatile uint32 DID_SEL1:1;              /* DID Select */
    volatile uint32 DID_SEL2:1;              /* DID Select */
    volatile uint32 DID_SEL3:1;              /* DID Select */
    volatile uint32 DID_SEL4:1;              /* DID Select */
    volatile uint32 DID_SEL5:1;              /* DID Select */
    volatile uint32 DID_SEL6:1;              /* DID Select */
    volatile uint32 DID_SEL7:1;              /* DID Select */
    volatile uint32 DID_SEL8:1;              /* DID Select */
    volatile uint32 DID_SEL9:1;              /* DID Select */
    volatile uint32 DID_SEL10:1;             /* DID Select */
    volatile uint32 DID_SEL11:1;             /* DID Select */
    volatile uint32 DID_SEL12:1;             /* DID Select */
    volatile uint32 DID_SEL13:1;             /* DID Select */
    volatile uint32 DID_SEL14:1;             /* DID Select */
    volatile uint32 DID_SEL15:1;             /* DID Select */
  } B;
} TRDC_MBC_NSE_BLK_CLR_ALL_tag;

typedef union TRDC_GLBAC_union_tag { /* MBC Global Access Control */
  volatile uint32 R;
  struct {
    volatile uint32 NUX:1;                   /* NonsecureUser Execute */
    volatile uint32 NUW:1;                   /* NonsecureUser Write */
    volatile uint32 NUR:1;                   /* NonsecureUser Read */
    volatile uint32 _unused_28:1;
    volatile uint32 NPX:1;                   /* NonsecurePriv Execute */
    volatile uint32 NPW:1;                   /* NonsecurePriv Write */
    volatile uint32 NPR:1;                   /* NonsecurePriv Read */
    volatile uint32 _unused_24:1;
    volatile uint32 SUX:1;                   /* SecureUser Execute */
    volatile uint32 SUW:1;                   /* SecureUser Write */
    volatile uint32 SUR:1;                   /* SecureUser Read */
    volatile uint32 _unused_20:1;
    volatile uint32 SPX:1;                   /* SecurePriv Execute */
    volatile uint32 SPW:1;                   /* SecurePriv Write */
    volatile uint32 SPR:1;                   /* SecurePriv Read */
    volatile uint32 _unused_1:16;
    volatile uint32 LK:1;                    /* LOCK */
  } B;
} TRDC_GLBAC_tag;

typedef union TRDC_MBC_DOM_MEM_BLK_CFG_W_union_tag { /* MBC Memory Block Configuration Word */
  volatile uint32 R;
  struct {
    volatile uint32 MBACSEL0:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE0:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL1:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE1:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL2:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE2:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL3:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE3:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL4:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE4:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL5:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE5:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL6:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE6:1;                  /* NonSecure Enable for block B */
    volatile uint32 MBACSEL7:3;              /* Memory Block Access Control Select for block B */
    volatile uint32 NSE7:1;                  /* NonSecure Enable for block B */
  } B;
} TRDC_MBC_DOM_MEM_BLK_CFG_W_tag;

typedef union TRDC_MBC0_DOM_MEM_BLK_NSE_W_union_tag { /* MBC Memory Block NonSecure Enable Word */
  volatile uint32 R;
  struct {
    volatile uint32 BIT0:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT1:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT2:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT3:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT4:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT5:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT6:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT7:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT8:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT9:1;                  /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT10:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT11:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT12:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT13:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT14:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT15:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT16:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT17:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT18:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT19:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT20:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT21:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT22:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT23:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT24:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT25:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT26:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT27:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT28:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT29:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT30:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
    volatile uint32 BIT31:1;                 /* Bit b NonSecure Enable [b = 0 - 31] */
  } B;
} TRDC_MBC_DOM_MEM_BLK_NSE_W_tag;

typedef struct {
  TRDC_MBC_DOM_MEM_BLK_CFG_W_tag MEM0_BLK_CFG_W[64];   /* MBC Memory Block0 Configuration Word */
  TRDC_MBC_DOM_MEM_BLK_NSE_W_tag MEM0_BLK_NSE_W[16];   /* MBC Memory Block0 NonSecure Enable Word */
  TRDC_MBC_DOM_MEM_BLK_CFG_W_tag MEM1_BLK_CFG_W[8];    /* MBC Memory Block1 Configuration Word */
  TRDC_MBC_DOM_MEM_BLK_NSE_W_tag MEM1_BLK_NSE_W[2];    /* MBC Memory Block1 NonSecure Enable Word */
  TRDC_MBC_DOM_MEM_BLK_CFG_W_tag MEM2_BLK_CFG_W[8];    /* MBC Memory Block2 Configuration Word */
  TRDC_MBC_DOM_MEM_BLK_NSE_W_tag MEM2_BLK_NSE_W[2];    /* MBC Memory Block2 NonSecure Enable Word */
  TRDC_MBC_DOM_MEM_BLK_CFG_W_tag MEM3_BLK_CFG_W[8];    /* MBC Memory Block3 Configuration Word */
  TRDC_MBC_DOM_MEM_BLK_NSE_W_tag MEM3_BLK_NSE_W[2];    /* MBC Memory Block3 NonSecure Enable Word */
  uint8 TRDC_reserved10[72];
} TRDC_MBC_DOM_tag;

typedef struct {
  TRDC_MBC_MEM_GLBCFG_tag GLBCFG_MEM[4];               /* MBC Global Configuration Register */
  TRDC_MBC_NSE_BLK_INDEX_tag NSE_BLK_INDEX;            /* MBC NonSecure Enable Block Index */
  TRDC_MBC_NSE_BLK_SET_tag NSE_BLK_SET;                /* MBC NonSecure Enable Block Set */
  TRDC_MBC_NSE_BLK_CLR_tag NSE_BLK_CLR;                /* MBC NonSecure Enable Block Clear */
  TRDC_MBC_NSE_BLK_CLR_ALL_tag NSE_BLK_CLR_ALL;        /* MBC NonSecure Enable Block Clear All */
  TRDC_GLBAC_tag MEMN_GLBAC[8];                        /* MBC Global Access Control */
  TRDC_MBC_DOM_tag DOM[TRDC_DOMAINS_MAX_NUM - 1];      /* MBC Memory Block Config. Word */
  uint8 TRDC_reserved11[448];                          /* Reserved area for Peripheral Domain Access Control 15 */
} TRDC_MBC_regs_tag;

typedef union TRDC_MRC_GLBCFG_union_tag { /* MRC Global Configuration Register */
  volatile uint32 R;
  struct {
    volatile uint32 NRGNS:5;                 /* Number of regions [1-16] */
    volatile uint32 _unused_0:27;
  } B;
} TRDC_MRC_GLBCFG_tag;

typedef union TRDC_MRC_NSE_RGN_INDIRECT_union_tag { /* MRC NonSecure Enable Region Indirect */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_16:16;
    volatile uint32 DID_SEL:16;              /* DID Select */
  } B;
} TRDC_MRC_NSE_RGN_INDIRECT_tag;

typedef union TRDC_MRC_NSE_RGN_SET_union_tag { /* MRC NonSecure Enable Region Set */
  volatile uint32 R;
  struct {
    volatile uint32 W1SET:16;                /* Write-1 Set */
    volatile uint32 _unused_0:16;
  } B;
} TRDC_MRC_NSE_RGN_SET_tag;

typedef union TRDC_MRC_NSE_RGN_CLR_union_tag { /* MRC NonSecure Enable Region Clear */
  volatile uint32 R;
  struct {
    volatile uint32 W1CLR:16;                /* Write-1 Clear */
    volatile uint32 _unused_0:16;
  } B;
} TRDC_MRC_NSE_RGN_CLR_tag;

typedef union TRDC_MRC_NSE_RGN_CLR_ALL_union_tag { /* MRC NonSecure Enable Region Clear All */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_16:16;
    volatile uint32 DID_SEL:16;              /* DID Select */
  } B;
} TRDC_MRC_NSE_RGN_CLR_ALL_tag;

typedef union TRDC_MRC_DOM0_RGD_W0_union_tag { /* MRC Region Descriptor Word 0 */
  volatile uint32 R;
  struct {
    volatile uint32 MRACSEL:3;               /* Memory Region Access Control Select */
    volatile uint32 _unused_9:7;
    volatile uint32 STRT_ADDR:22;            /* Start Address */
  } B;
} TRDC_MRC_DOM_RGD_W0_tag;

typedef union TRDC_MRC_DOM_RGD_W1_union_tag { /* MRC Region Descriptor Word 1 */
  volatile uint32 R;
  struct {
    volatile uint32 VLD:1;                   /* Valid */
    volatile uint32 _unused_28:3;
    volatile uint32 NSE:1;                   /* NonSecure Enable */
    volatile uint32 _unused_9:5;
    volatile uint32 END_ADDR:22;             /* End Address */
  } B;
} TRDC_MRC_DOM_RGD_W1_tag;

typedef struct TRDC_MRC_DOM0_RGD_struct_tag {
  TRDC_MRC_DOM_RGD_W0_tag W0; /* MRC Region Descriptor Word 0 */
  TRDC_MRC_DOM_RGD_W1_tag W1; /* MRC Region Descriptor Word 1 */
} TRDC_MRC_DOM_RGD_W_tag;

typedef union TRDC_MRC_DOM_RGD_NSE_union_tag { /* MRC Region Descriptor NonSecure Enable */
  volatile uint32 R;
  struct {
    volatile uint32 BIT0:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT1:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT2:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT3:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT4:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT5:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT6:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 BIT7:1;                  /* Bit n NonSecure Enable [n = 0 - 15] */
    volatile uint32 _unused_0:24;
  } B;
} TRDC_MRC_DOM_RGD_NSE_tag;

typedef struct {
  TRDC_MRC_DOM_RGD_W_tag RGD[8];             /* MRC Region Descriptor Words */
  uint8 TRDC_reserved12[64];
  TRDC_MRC_DOM_RGD_NSE_tag RGD_NSE;          /* MRC Region Descriptor NonSecure Enable */
  uint8 TRDC_reserved13[124];
} TRDC_MRC_DOM_tag;

typedef struct {
  TRDC_MRC_GLBCFG_tag GLBCFG;                     /* MRC Global Configuration and Domain Access Control registers */
  uint8 TRDC_reserved8[12];
  TRDC_MRC_NSE_RGN_INDIRECT_tag NSE_RGN_INDIRECT; /* MRC NonSecure Enable Region Indirect */
  TRDC_MRC_NSE_RGN_SET_tag NSE_RGN_SET;           /* MRC NonSecure Enable Region Set */
  TRDC_MRC_NSE_RGN_CLR_tag NSE_RGN_CLR;           /* MRC NonSecure Enable Region Clear */
  TRDC_MRC_NSE_RGN_CLR_ALL_tag NSE_RGN_CLR_ALL;   /* MRC NonSecure Enable Region Clear All */
  TRDC_GLBAC_tag GLBAC[8];                        /* MRC Global Access Control */
  TRDC_MRC_DOM_tag DOM[TRDC_DOMAINS_MAX_NUM - 1]; /* MRC Memory Block Config. Word */
  uint8 TRDC_reserved9[192];                      /* Reserved area for the possible next MRC descriptor */
} TRDC_MRC_regs_tag;

struct TRDC_tag {
  TRDC_CR_tag TRDC_CR;                 /* TRDC Control Register */

  uint8 TRDC_reserved0[236];

  TRDC_HWCFG0_tag TRDC_HWCFG0;         /* TRDC Hardware Configuration Register 0 */
  TRDC_HWCFG1_tag TRDC_HWCFG1;         /* TRDC Hardware Configuration Register 1 */
  TRDC_HWCFG2_tag TRDC_HWCFG2;         /* TRDC Hardware Configuration Register 2 */
  TRDC_HWCFG3_tag TRDC_HWCFG3;         /* TRDC Hardware Configuration Register 3 */

  TRDC_DACFG_tag DACFG[TRDC_MASTERS_MAX_NUM]; /* Domain Assignment Configuration Register */

  uint8 TRDC_reserved1[128];

  TRDC_IDAU_CR_tag TRDC_IDAU_CR;     /* TRDC IDAU Control Register */
  uint8 TRDC_reserved2[28];

  TRDC_FLW_CTL_tag TRDC_FLW_CTL;     /* TRDC FLW Control */
  TRDC_FLW_PBASE_tag TRDC_FLW_PBASE; /* TRDC FLW Physical Base */
  TRDC_FLW_ABASE_tag TRDC_FLW_ABASE; /* TRDC FLW Array Base */
  TRDC_FLW_BCNT_tag TRDC_FLW_BCNT;   /* TRDC FLW Block Count */
  uint8 TRDC_reserved3[12];

  TRDC_FDID_tag TRDC_FDID;           /* TRDC Fault Domain ID */
  TRDC_DERRLOC_tag DERRLOC[TRDC_DERR_MAX_NUM]; /* TRDC Domain Error Location Register */
  uint8 TRDC_reserved4[448];

  TRDC_DERR_tag DERR[TRDC_DERR_MAX_NUM];            /* 8*MBC + 8*MRC Domain Error Words */
  uint8 TRDC_reserved5[576];

  TRDC_PID16_tag PID16;              /* Process Identifier (valid for AONMIX only!) */
  uint8 TRDC_reserved6[188];

  TRDC_MDA_DFMT_tag MDA_DFMT[TRDC_MASTERS_MAX_NUM][TRDC_MDA_MAX_NUM]; /* DAC Master Domain Assignment Register */
  uint8 TRDC_reserved7[61440];

  TRDC_MBC_regs_tag MBC[TRDC_MBC_MAX_NUM]; /* MBC configuration and domain registers */
};

struct TRDC_MRC_tag {
  TRDC_MRC_regs_tag MRC[TRDC_MRC_MAX_NUM]; /* MRC configuration and domain registers */
};

/* ============================================================================
   =============================== Module: SRAMCTL ============================
   ============================================================================ */
typedef union SRAMCTL_RAMCR_union_tag { /* RAM Control */
  volatile uint32 R;
  struct {
    volatile uint32 INIT:1;                  /* Initialization Request */
    volatile uint32 IWS:2;                   /* Initialization Wait States */
    volatile uint32 _unused_3:5;             /* Reserved */
    volatile uint32 INIT_SYSA:1;             /* Initialize With System Address */
    volatile uint32 _unused_9:23;            /* Reserved */
  } B;
} SRAMCTL_RAMCR_tag;

typedef union SRAMCTL_RAMIAS_union_tag { /* RAM Initialization Address Start */
  volatile uint32 R;
  struct {
    volatile uint32 IAS:32;                  /* Initialization Address Start */
  } B;
} SRAMCTL_RAMIAS_tag;

typedef union SRAMCTL_RAMIAE_union_tag { /* RAM Initialization Address End */
  volatile uint32 R;
  struct {
    volatile uint32 IAE:32;                  /* Initialization Address End */
  } B;
} SRAMCTL_RAMIAE_tag;

typedef union SRAMCTL_RAMSR_union_tag { /* RAM Status */
  volatile uint32 R;
  struct {
    volatile uint32 IDONE:1;                 /* Initialization Done */
    volatile uint32 BUSERR:1;                /* Bus Error */
    volatile uint32 IPEND:1;                 /* Initialization Pending */
    volatile uint32 AVALID:1;                /* Addresses Valid */
    volatile uint32 _unused_4:1;             /* Reserved */
    volatile uint32 AERR:1;                  /* ECC Address Error */
    volatile uint32 MLTERR:1;                /* ECC Multi-Bit Error */
    volatile uint32 SGLERR:1;                /* ECC Single-Bit Error */
    volatile uint32 SYND:8;                  /* ECC Syndrome Value */
    volatile uint32 EINFO:8;                 /* Event Information */
    volatile uint32 _unused_24:8;            /* Reserved */
  } B;
} SRAMCTL_RAMSR_tag;

typedef union SRAMCTL_RAMMEMA_union_tag { /* RAM ECC Address */
  volatile uint32 R;
  struct {
    volatile uint32 MEMA:17;                 /* RAM Bank Address */
    volatile uint32 _unused_17:3;            /* Reserved */
    volatile uint32 BANK:5;                  /* RAM Bank ID */
    volatile uint32 _unused_25:7;            /* Reserved */
  } B;
} SRAMCTL_RAMMEMA_tag;

typedef union SRAMCTL_RAMSYSA_union_tag { /* RAM System Address */
  volatile uint32 R;
  struct {
    volatile uint32 SYSA:32;                 /* System Address */
  } B;
} SRAMCTL_RAMSYSA_tag;

typedef union SRAMCTL_RAMECCNT_union_tag { /* RAM Correctable Error Count */
  volatile uint32 R;
  struct {
    volatile uint32 ECCNT:8;                 /* ECC Correctable Error Count */
    volatile uint32 _unused_8:24;            /* Reserved */
  } B;
} SRAMCTL_RAMECCNT_tag;

typedef union SRAMCTL_RAMEID0_union_tag { /* RAM Error Injection Data 0 */
  volatile uint32 R;
  struct {
    volatile uint32 EID_W0:32;               /* Error Injection Data Word 0 */
  } B;
} SRAMCTL_RAMEID0_tag;

typedef union SRAMCTL_RAMEID1_union_tag { /* RAM Error Injection Data 1 */
  volatile uint32 R;
  struct {
    volatile uint32 EID_W1:32;               /* Error Injection Data Word 1 */
  } B;
} SRAMCTL_RAMEID1_tag;

typedef union SRAMCTL_RAMEIDC_union_tag { /* RAM Error Injection Data Control */
  volatile uint32 R;
  struct {
    volatile uint32 EID_CKB:8;               /* Error Injection Data Checkbits */
    volatile uint32 _unused_8:16;            /* Reserved */
    volatile uint32 EIP_EN:1;                /* Error Injection Into Pipeline Enable */
    volatile uint32 _unused_25:5;            /* Reserved */
    volatile uint32 EIA_EN:1;                /* Error Injection Address Enable */
    volatile uint32 EID_EN:1;                /* Error Injection Data Enable */
  } B;
} SRAMCTL_RAMEIDC_tag;

typedef union SRAMCTL_RAMEIA_union_tag { /* RAM Error Injection Base Address */
  volatile uint32 R;
  struct {
    volatile uint32 EIA:32;                  /* Error Injection Base Address */
  } B;
} SRAMCTL_RAMEIA_tag;

typedef union SRAMCTL_RAMEIAM_union_tag { /* RAM Error Injection Address Mask */
  volatile uint32 R;
  struct {
    volatile uint32 EIAM:32;                 /* Error Injection Address Mask */
  } B;
} SRAMCTL_RAMEIAM_tag;

typedef union SRAMCTL_RAMMAXA_union_tag { /* RAM Maximum-Value Address */
  volatile uint32 R;
  struct {
    volatile uint32 MAXA:32;                 /* Maximum Address */
  } B;
} SRAMCTL_RAMMAXA_tag;

typedef union SRAMCTL_RAMCR2_union_tag { /* RAM Control 2 */
  volatile uint32 R;
  struct {
    volatile uint32 PREF:1;                  /* Prefetch for Read Bursts */
    volatile uint32 WBUF:2;                  /* Write Buffer Control */
    volatile uint32 DEM:1;                   /* Disable Exclusive Monitor */
    volatile uint32 _unused_4:28;            /* Reserved */
  } B;
} SRAMCTL_RAMCR2_tag;

struct SRAMCTL_tag {
  SRAMCTL_RAMCR_tag RAMCR;             /* RAM Control */
  SRAMCTL_RAMIAS_tag RAMIAS;           /* RAM Initialization Address Start */
  SRAMCTL_RAMIAE_tag RAMIAE;           /* RAM Initialization Address End */
  SRAMCTL_RAMSR_tag RAMSR;             /* RAM Status */
  SRAMCTL_RAMMEMA_tag RAMMEMA;         /* RAM ECC Address */
  uint8 SRAMCTL_reserved0[4];
  SRAMCTL_RAMSYSA_tag RAMSYSA;         /* RAM System Address */
  SRAMCTL_RAMECCNT_tag RAMECCNT;       /* RAM Correctable Error Count */
  SRAMCTL_RAMEID0_tag RAMEID0;         /* RAM Error Injection Data 0 */
  SRAMCTL_RAMEID1_tag RAMEID1;         /* RAM Error Injection Data 1 */
  SRAMCTL_RAMEIDC_tag RAMEIDC;         /* RAM Error Injection Data Control */
  uint8 SRAMCTL_reserved1[4];
  SRAMCTL_RAMEIA_tag RAMEIA;           /* RAM Error Injection Base Address */
  SRAMCTL_RAMEIAM_tag RAMEIAM;         /* RAM Error Injection Address Mask */
  uint8 SRAMCTL_reserved2[8];
  SRAMCTL_RAMMAXA_tag RAMMAXA;         /* RAM Maximum-Value Address */
  uint8 SRAMCTL_reserved3[60];
  SRAMCTL_RAMCR2_tag RAMCR2;           /* RAM Control 2 */
};

/* ============================================================================
   =============================== Module: DDR_DDRC ===========================
   ============================================================================ */
typedef union DDR_DDRC_CS_BNDS_CS_BNDS_union_tag { /* Rank 0 Memory Bounds */
  volatile uint32 R;
  struct {
    volatile uint32 EA:16;                   /* Ending Address */
    volatile uint32 SA:16;                   /* Starting Address */
  } B;
} DDR_DDRC_CS_BNDS_CS_BNDS_tag;

typedef struct DDR_DDRC_CS_BNDS_struct_tag {
  DDR_DDRC_CS_BNDS_CS_BNDS_tag CS_BNDS; /* Rank 0 Memory Bounds */
  uint8 CS_BNDS_reserved0[4];
} DDR_DDRC_CS_BNDS_tag;

typedef union DDR_DDRC_REMAP_EXT_0_union_tag { /* Remap Extended Region 0 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_0_EA:8;          /* Region 0 Extended Ending Address */
    volatile uint32 EXT_REG_0_SA:8;          /* Region 0 Extended Starting Address */
    volatile uint32 REG_0_EXT_REMAP_ADDR:8;  /* Region 0 Extended Remap Starting Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_0_tag;

typedef union DDR_DDRC_REMAP_EXT_1_union_tag { /* Remap Extended Region 1 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_1_EA:8;          /* Region 1 Extended Ending Address */
    volatile uint32 EXT_REG_1_SA:8;          /* Region 1 Extended Starting Address */
    volatile uint32 REG_1_EXT_REMAP_ADDR:8;  /* Region 1 Extended Remap Starting Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_1_tag;

typedef union DDR_DDRC_REMAP_EXT_2_union_tag { /* Remap Extended Region 2 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_2_EA:8;          /* Region 2 Extended Ending Address */
    volatile uint32 EXT_REG_2_SA:8;          /* Region 2 Extended Starting Address */
    volatile uint32 REG_2_EXT_REMAP_ADDR:8;  /* Region 2 Extended Remap Starting Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_2_tag;

typedef union DDR_DDRC_REMAP_EXT_3_union_tag { /* Remap Extended Region 3 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_3_EA:8;          /* Region 3 Extended Ending Address */
    volatile uint32 EXT_REG_3_SA:8;          /* Region 3 Extended Starting Address */
    volatile uint32 REG_3_EXT_REMAP_ADDR:8;  /* Region 3 Extended Remap Starting Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_3_tag;

typedef union DDR_DDRC_REMAP_0A_union_tag { /* Remap Region 0A Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_0_REMAP_ADDR:12;     /* Region 0 Remap Starting Address */
    volatile uint32 _unused_1:19;
    volatile uint32 REG_0_REMAP_EN:1;        /* Region 0 Remap Enable */
  } B;
} DDR_DDRC_REMAP_0A_tag;

typedef union DDR_DDRC_REMAP_0B_union_tag { /* Remap Region 0B Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_0_EA:12;             /* Region 0 Ending Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_0_SA:12;             /* Region 0 Starting Address */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_REMAP_0B_tag;

typedef union DDR_DDRC_REMAP_1A_union_tag { /* Remap Region 1A Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_1_REMAP_ADDR:12;     /* Region 1 Remap Starting Address */
    volatile uint32 _unused_1:19;
    volatile uint32 REG_1_REMAP_EN:1;        /* Region 1 Remap Enable */
  } B;
} DDR_DDRC_REMAP_1A_tag;

typedef union DDR_DDRC_REMAP_1B_union_tag { /* Remap Region 1B Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_1_EA:12;             /* Region 1 Ending Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_1_SA:12;             /* Region 1 Starting Address */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_REMAP_1B_tag;

typedef union DDR_DDRC_REMAP_2A_union_tag { /* Remap Region 2A Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_2_REMAP_ADDR:12;     /* Region 2 Remap Starting Address */
    volatile uint32 _unused_1:19;
    volatile uint32 REG_2_REMAP_EN:1;        /* Region 2 Remap Enable */
  } B;
} DDR_DDRC_REMAP_2A_tag;

typedef union DDR_DDRC_REMAP_2B_union_tag { /* Remap Region 2B Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_2_EA:12;             /* Region 2 Ending Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_2_SA:12;             /* Region 2 Starting Address */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_REMAP_2B_tag;

typedef union DDR_DDRC_REMAP_3A_union_tag { /* Remap Region 3A Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_3_REMAP_ADDR:12;     /* Region 3 Remap Starting Address */
    volatile uint32 _unused_1:19;
    volatile uint32 REG_3_REMAP_EN:1;        /* Region 3 Remap Enable */
  } B;
} DDR_DDRC_REMAP_3A_tag;

typedef union DDR_DDRC_REMAP_3B_union_tag { /* Remap Region 3B Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_3_EA:12;             /* Region 3 Ending Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_3_SA:12;             /* Region 3 Starting Address */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_REMAP_3B_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_0_union_tag { /* DDRC Address Decode 0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 ROW14_OVRD:6;            /* Row 14 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 ROW15_OVRD:6;            /* Row 15 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 ROW16_OVRD:6;            /* Row 16 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 ROW17_OVRD:6;            /* Row 17 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_0_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_1_union_tag { /* DDRC Address Decode 1 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 ROW10_OVRD:6;            /* Row 10 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 ROW11_OVRD:6;            /* Row 11 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 ROW12_OVRD:6;            /* Row 12 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 ROW13_OVRD:6;            /* Row 13 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_1_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_2_union_tag { /* DDRC Address Decode 2 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 ROW6_OVRD:6;             /* Row 6 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 ROW7_OVRD:6;             /* Row 7 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 ROW8_OVRD:6;             /* Row 8 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 ROW9_OVRD:6;             /* Row 9 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_2_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_3_union_tag { /* DDRC Address Decode 3 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 ROW2_OVRD:6;             /* Row 2 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 ROW3_OVRD:6;             /* Row 3 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 ROW4_OVRD:6;             /* Row 4 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 ROW5_OVRD:6;             /* Row 5 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_3_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_4_union_tag { /* DDRC Address Decode 4 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 COL9_OVRD:6;             /* Col 9 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 COL10_OVRD:6;            /* Col 10 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 ROW0_OVRD:6;             /* Row 0 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 ROW1_OVRD:6;             /* Row 1 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_4_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_5_union_tag { /* DDRC Address Decode 5 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 COL5_OVRD:6;             /* Col 5 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 COL6_OVRD:6;             /* Col 6 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 COL7_OVRD:6;             /* Col 7 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 COL8_OVRD:6;             /* Col 8 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_5_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_6_union_tag { /* DDRC Address Decode 6 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 COL1_OVRD:6;             /* Col 1 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 COL2_OVRD:6;             /* Col 2 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 COL3_OVRD:6;             /* Col 3 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 COL4_OVRD:6;             /* Col 4 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_6_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_7_union_tag { /* DDRC Address Decode 7 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 CID1_OVRD:6;             /* CID 1 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 BA0_OVRD:6;              /* Bank 0 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 BA1_OVRD:6;              /* Bank 1 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 COL0_OVRD:6;             /* Col 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_7_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_8_union_tag { /* DDRC Address Decode 8 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 BG1_OVRD:6;              /* Bank Group 1 Override */
    volatile uint32 _unused_22:2;
    volatile uint32 CS0_OVRD:6;              /* Interleaved Rank 0 Override */
    volatile uint32 _unused_14:2;
    volatile uint32 CS1_OVRD:6;              /* Interleaved Rank 1 Override */
    volatile uint32 _unused_6:2;
    volatile uint32 CID0_OVRD:6;             /* CID 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_8_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_9_union_tag { /* DDRC Address Decode 9 */
  volatile uint32 R;
  struct {
    volatile uint32 ADDR_DEC_OVRD:1;         /* Address Decode Override */
    volatile uint32 _unused_6:25;
    volatile uint32 BG0_OVRD:6;              /* Bank Group 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_9_tag;

typedef union DDR_DDRC_CS_CONFIG_union_tag { /* Rank 0 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 COL_BITS_CS:3;           /* Column Bits */
    volatile uint32 _unused_28:1;
    volatile uint32 BG_BITS_CS:2;            /* Bank Group Bits */
    volatile uint32 _unused_24:2;
    volatile uint32 ROW_BITS_CS:3;           /* Row Bits */
    volatile uint32 _unused_16:5;
    volatile uint32 ODT_WR_CFG:3;            /* ODT Write Configuration */
    volatile uint32 _unused_12:1;
    volatile uint32 ODT_RD_CFG:3;            /* ODT Read Configuration */
    volatile uint32 AP_EN:1;                 /* Auto-Precharge Enable */
    volatile uint32 INTLV_CTL:4;             /* Interleaving Control */
    volatile uint32 _unused_3:1;
    volatile uint32 INTLV_EN:2;              /* Interleaving Enable */
    volatile uint32 CS_EN:1;                 /* Rank Enable */
  } B;
} DDR_DDRC_CS_CONFIG_tag;

typedef union DDR_DDRC_TIMING_CFG_3_union_tag { /* DDR SDRAM Timing Configuration 3 */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_WRTORD:1;            /* Extended Write-To-Read Time */
    volatile uint32 EXT_ACTTOACT:1;          /* Extended Activate-To-Activate Time */
    volatile uint32 SPARE_CNFG:1;            /* Spare Config */
    volatile uint32 EXT_FOUR_ACT:1;          /* Extended Four Activate */
    volatile uint32 EXT_CKE_PLS:2;           /* Extended MCKE Pulse */
    volatile uint32 _unused_24:2;
    volatile uint32 EXT_WRREC:2;             /* Extended Write Recovery */
    volatile uint32 SPARE_CNFG2:1;           /* Spare Config */
    volatile uint32 EXT_WR_LAT_2:1;          /* Extended Write Latency 2 */
    volatile uint32 EXT_CASLAT:3;            /* Extended CAS Latency */
    volatile uint32 _unused_16:1;
    volatile uint32 EXT_REFREC:6;            /* Extended Refresh Recovery */
    volatile uint32 EXT_ACTTORW:2;           /* Extended Activate To Read Or Write Time */
    volatile uint32 EXT_ACTTOPRE:3;          /* Extended Activate-To-Precharge Time */
    volatile uint32 _unused_4:1;
    volatile uint32 EXT_PRETOACT:2;          /* Extended Precharge-To-Activate Time */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_3_tag;

typedef union DDR_DDRC_TIMING_CFG_0_union_tag { /* DDR SDRAM Timing Configuration 0 */
  volatile uint32 R;
  struct {
    volatile uint32 MRS_CYC:6;               /* MRW Cycle Time */
    volatile uint32 _unused_20:6;
    volatile uint32 EXT_ACT_PD_EXIT:1;       /* Extended Active Power-Down Exit */
    volatile uint32 _unused_18:1;
    volatile uint32 EXT_PRE_PD_EXIT:2;       /* Extended Precharge Power-Down Exit */
    volatile uint32 PRE_PD_EXIT:4;           /* Precharge Power-Down Exit */
    volatile uint32 ACT_PD_EXIT:4;           /* Active Powerdown Exit */
    volatile uint32 WWT:2;                   /* Write-To-Write Turnaround To Different Ranks */
    volatile uint32 RRT:2;                   /* Read-To-Read Turnaround To Different Ranks */
    volatile uint32 WRT:2;                   /* Write-To-Read Turnaround To Different Ranks */
    volatile uint32 RWT:2;                   /* Read-To-Write Turnaround To Different Ranks */
  } B;
} DDR_DDRC_TIMING_CFG_0_tag;

typedef union DDR_DDRC_TIMING_CFG_1_union_tag { /* DDR SDRAM Timing Configuration 1 */
  volatile uint32 R;
  struct {
    volatile uint32 WRTORD:4;                /* Write-To-Read Interval */
    volatile uint32 ACTTOACT:4;              /* Activate-To-Activate Interval */
    volatile uint32 WRREC:4;                 /* Write Recovery */
    volatile uint32 REFREC:4;                /* Refresh Recovery */
    volatile uint32 _unused_15:1;
    volatile uint32 CASLAT:3;                /* CAS Latency */
    volatile uint32 ACTTORW:4;               /* Activate To Read Or Write */
    volatile uint32 ACTTOPRE:4;              /* Activate-To-Precharge Time */
    volatile uint32 PRETOACT:4;              /* Precharge-To-Activate Time */
  } B;
} DDR_DDRC_TIMING_CFG_1_tag;

typedef union DDR_DDRC_TIMING_CFG_2_union_tag { /* DDR SDRAM Timing Configuration 2 */
  volatile uint32 R;
  struct {
    volatile uint32 FOUR_ACT:6;              /* Four Activate */
    volatile uint32 CKE_PLS:3;               /* MCKE Pulse */
    volatile uint32 _unused_19:4;
    volatile uint32 RD_TO_PRE:5;             /* Read-To-Precharge Time */
    volatile uint32 EXT_WR_LAT:1;            /* Extended Write Latency */
    volatile uint32 WR_LAT:4;                /* Write Latency */
    volatile uint32 _unused_4:5;
    volatile uint32 DERATE_VAL:4;            /* Derate Value */
  } B;
} DDR_DDRC_TIMING_CFG_2_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_union_tag { /* DDR SDRAM Control Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 BI:1;                    /* Bypass Initialization */
    volatile uint32 MEM_HALT:1;              /* DDRC Halt */
    volatile uint32 RSRVD:1;                 /* Reserved. Should be written to 0. */
    volatile uint32 _unused_28:1;
    volatile uint32 _unused_24:4;
    volatile uint32 BA_INTLV_CTL:7;          /* Rank interleaving control. */
    volatile uint32 _unused_16:1;
    volatile uint32 DC_EN:1;                 /* Dual Channel Enable */
    volatile uint32 _unused_14:1;
    volatile uint32 _unused_13:1;
    volatile uint32 DBW:2;                   /* DDR SDRAM Data Bus Width */
    volatile uint32 DYN_PWR:1;               /* Dynamic Power Management */
    volatile uint32 _unused_8:2;
    volatile uint32 SDRAM_TYPE:3;            /* DDR SDRAM Type */
    volatile uint32 _unused_4:1;
    volatile uint32 RD_EN:1;                 /* Registered DIMM Enable */
    volatile uint32 _unused_2:1;
    volatile uint32 SREN:1;                  /* Self-Refresh Enable */
    volatile uint32 MEM_EN:1;                /* DDRC Enable */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_2_union_tag { /* DDR SDRAM Control Configuration 2 */
  volatile uint32 R;
  struct {
    volatile uint32 SPARE_CNFG:1;            /* Spare Config */
    volatile uint32 _unused_30:1;
    volatile uint32 _unused_29:1;
    volatile uint32 SPARE_CNFG2:1;           /* Spare Config */
    volatile uint32 D_INIT:1;                /* DDR SDRAM Data Initialization */
    volatile uint32 SPARE_CNFG3:2;           /* Spare Config */
    volatile uint32 _unused_24:1;
    volatile uint32 RSRVD:1;                 /* Reserved. Must be written to 0. */
    volatile uint32 QD_EN:1;                 /* Quad-Rank Enable */
    volatile uint32 _unused_21:1;
    volatile uint32 _unused_20:1;
    volatile uint32 NUM_PR:4;                /* Number Of Posted Refreshes */
    volatile uint32 _unused_11:5;
    volatile uint32 _unused_10:1;
    volatile uint32 MT_RR_EN:1;              /* Memory Test Round-Robin Enable */
    volatile uint32 _unused_8:1;
    volatile uint32 MCK_DIS:4;               /* MCK Disable */
    volatile uint32 _unused_2:2;
    volatile uint32 _unused_1:1;
    volatile uint32 FRC_SR:1;                /* Force Self-Refresh */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_2_tag;

typedef union DDR_DDRC_DDR_SDRAM_MD_CNTL_union_tag { /* DDR SDRAM Mode Control */
  volatile uint32 R;
  struct {
    volatile uint32 MD_VALUE:18;             /* Mode Register Value */
    volatile uint32 _unused_13:1;
    volatile uint32 _unused_12:1;
    volatile uint32 CKE_CNTL:2;              /* Clock Enable Control */
    volatile uint32 START_OSC:1;             /* Start Oscillator */
    volatile uint32 START_OSC2:1;            /* Start Oscillator 2 */
    volatile uint32 MD_SEL:4;                /* Mode Register Select */
    volatile uint32 CS_SEL:3;                /* Select Rank */
    volatile uint32 MD_EN:1;                 /* Mode Enable */
  } B;
} DDR_DDRC_DDR_SDRAM_MD_CNTL_tag;

typedef union DDR_DDRC_DDR_SDRAM_INTERVAL_union_tag { /* DDR SDRAM Interval Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 BSTOPRE:14;              /* Precharge Interval */
    volatile uint32 _unused_16:2;
    volatile uint32 REFINT:16;               /* Refresh Interval */
  } B;
} DDR_DDRC_DDR_SDRAM_INTERVAL_tag;

typedef union DDR_DDRC_DDR_DATA_INIT_union_tag { /* DDR SDRAM Data Initialization */
  volatile uint32 R;
  struct {
    volatile uint32 INIT_VALUE:32;           /* Initialization Value */
  } B;
} DDR_DDRC_DDR_DATA_INIT_tag;

typedef union DDR_DDRC_TIMING_CFG_4_union_tag { /* DDR SDRAM Timing Configuration 4 */
  volatile uint32 R;
  struct {
    volatile uint32 DLL_LOCK:2;              /* DDR SDRAM DLL Lock Time */
    volatile uint32 _unused_28:2;
    volatile uint32 EXT_REFINT:1;            /* Extended Refresh Interval */
    volatile uint32 _unused_24:3;
    volatile uint32 EXT_WWT:2;               /* Extended Write-To-Write Turnaround */
    volatile uint32 EXT_RRT:2;               /* Extended Read-To-Read Turnaround */
    volatile uint32 EXT_WRT:2;               /* Extended Write-To-Read Turnaround */
    volatile uint32 EXT_RWT:2;               /* Extended Read-To-Write Turnaround */
    volatile uint32 WWT:4;                   /* Write-To-Write Turnaround For Same Rank */
    volatile uint32 RRT:4;                   /* Read-To-Read Turnaround For Same Rank */
    volatile uint32 WRT:4;                   /* Write-To-Read Turnaround For Same Rank */
    volatile uint32 RWT:4;                   /* Read-To-Write Turnaround For Same Rank */
  } B;
} DDR_DDRC_TIMING_CFG_4_tag;

typedef union DDR_DDRC_TIMING_CFG_5_union_tag { /* DDR SDRAM Timing Configuration 5 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 _unused_21:3;
    volatile uint32 _unused_20:1;
    volatile uint32 _unused_15:5;
    volatile uint32 _unused_12:3;
    volatile uint32 _unused_9:3;
    volatile uint32 _unused_8:1;
    volatile uint32 _unused_3:5;
    volatile uint32 _unused_0:3;
  } B;
} DDR_DDRC_TIMING_CFG_5_tag;

typedef union DDR_DDRC_TIMING_CFG_7_union_tag { /* DDR SDRAM Timing Configuration 7 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_28:4;
    volatile uint32 WR_ADJ:3;                /* Write Adjustment */
    volatile uint32 RSRVD_1:1;               /* Reserved. */
    volatile uint32 _unused_16:8;
    volatile uint32 RD_ADJ:3;                /* Read Adjustment */
    volatile uint32 RSRVD:1;                 /* Reserved. */
    volatile uint32 CKSRX:4;                 /* Clock After Self-Refresh Exit */
    volatile uint32 CKSRE:4;                 /* Clock After Self-Refresh Entry */
    volatile uint32 CKE_RST:2;               /* MCKE Reset Time */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_7_tag;

typedef union DDR_DDRC_DDR_ZQ_CNTL_union_tag { /* DDR SDRAM ZQ Calibration Control */
  volatile uint32 R;
  struct {
    volatile uint32 ZQCS_INT:4;              /* ZQCS Interval */
    volatile uint32 _unused_24:4;
    volatile uint32 ZQCS:4;                  /* ZQ Calibration Short Time */
    volatile uint32 _unused_16:4;
    volatile uint32 ZQOPER:4;                /* ZQ Calibration Operation Time */
    volatile uint32 _unused_8:4;
    volatile uint32 ZQINIT:4;                /* ZQ Calibration Initialization Time */
    volatile uint32 _unused_1:3;
    volatile uint32 ZQ_EN:1;                 /* ZQ Calibration Enable */
  } B;
} DDR_DDRC_DDR_ZQ_CNTL_tag;

typedef union DDR_DDRC_DDR_SR_CNTR_union_tag { /* DDR SDRAM Self-Refresh Counter */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_16:16;
    volatile uint32 SR_IT:4;                 /* Self-Refresh Idle Threshold */
    volatile uint32 _unused_0:12;
  } B;
} DDR_DDRC_DDR_SR_CNTR_tag;

typedef union DDR_DDRC_TIMING_CFG_8_union_tag { /* DDR SDRAM Timing Configuration 8 */
  volatile uint32 R;
  struct {
    volatile uint32 PRE_ALL_REC:6;           /* Precharge All-To-Activate Interval */
    volatile uint32 _unused_25:1;
    volatile uint32 EXT_WRTORD_BG:1;         /* Extended Write-To-Read Same Bank Group */
    volatile uint32 WRTORD_BG:4;             /* Write-To-Read Same Bank Group */
    volatile uint32 ACTTOACT_BG:4;           /* Activate-To-Activate Same Bank Group */
    volatile uint32 WWT_BG:4;                /* Write-To-Write Turnaround For Same CS And Bank Group */
    volatile uint32 RRT_BG:4;                /* Read-To-Read Turnaround For Same Rank And Bank Group */
    volatile uint32 WRT_BG:4;                /* Write-To-Read Turnaround For Same Rank And Bank Group */
    volatile uint32 RWT_BG:4;                /* Read-To-Write Turnaround For Same Rank And Bank Group */
  } B;
} DDR_DDRC_TIMING_CFG_8_tag;

typedef union DDR_DDRC_TIMING_CFG_9_union_tag { /* DDR SDRAM timing configuration 9 */
  volatile uint32 R;
  struct {
    volatile uint32 REFTOREF_PB:10;          /* Refresh-to-refresh interval for per-bank refresh. */
    volatile uint32 SPARE_CNFG:2;            /* Spare Config */
    volatile uint32 _unused_16:4;
    volatile uint32 REFREC_PB:10;            /* Refresh Recovery Per-Bank Refresh */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_9_tag;

typedef union DDR_DDRC_TIMING_CFG_10_union_tag { /* DDR SDRAM Timing Configuration 10 */
  volatile uint32 R;
  struct {
    volatile uint32 T_STAB:15;               /* Stabilization Wait Time */
    volatile uint32 _unused_9:8;
    volatile uint32 PBRTOACT:5;              /* Per-Bank Refresh to Activate */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_TIMING_CFG_10_tag;

typedef union DDR_DDRC_TIMING_CFG_11_union_tag { /* DDR SDRAM Timing Configuration 11 */
  volatile uint32 R;
  struct {
    volatile uint32 MWWT:4;                  /* Masked Write-To-Write Turnaround (tCCDMW) */
    volatile uint32 _unused_24:4;
    volatile uint32 PRE_TO_PRE:4;            /* Precharge-To-Precharge Time */
    volatile uint32 _unused_16:4;
    volatile uint32 WCKEN_FS:4;              /* WCKEN FS Time */
    volatile uint32 WCK_STOP:4;              /* WCK Stop Time */
    volatile uint32 WS_OFF:3;                /* WS_OFF Wait Time */
    volatile uint32 RSRVD:1;                 /* Reserved. Should be written to 0. */
    volatile uint32 WCKPRE_STATIC:4;         /* WCKPRE Static Time */
  } B;
} DDR_DDRC_TIMING_CFG_11_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_3_union_tag { /* DDR SDRAM Control Configuration 3 */
  volatile uint32 R;
  struct {
    volatile uint32 DIS_MR13:1;              /* Disable MR13 Write for Self Refresh */
    volatile uint32 SR_FAST_WK_EN:1;         /* Self Refresh Fast Wakeup Enable */
    volatile uint32 RSRVD:1;                 /* Reserved. Should be written to 0. */
    volatile uint32 NON_PWR_2:1;             /* Non Power of 2 Enable */
    volatile uint32 SR_PD_EN:1;              /* Self Refresh Powerdown Enable */
    volatile uint32 DIS_MR28:1;              /* Disable MR28 Write for Self Refresh */
    volatile uint32 _unused_25:1;
    volatile uint32 DYN_REF_RATE_EN:1;       /* Dynamic Refresh Rate Enable */
    volatile uint32 REF_MODE:2;              /* Refresh Mode */
    volatile uint32 _unused_21:1;
    volatile uint32 DRAIN_FOR_SR:1;          /* Drain Queues For Self-Refresh */
    volatile uint32 DM_CFG:3;                /* Data Mask Configuration */
    volatile uint32 _unused_16:1;
    volatile uint32 CHB_SWP_EN:1;            /* Channel B Swap Enable */
    volatile uint32 CHA_SWP_EN:1;            /* Channel A Swap Enable */
    volatile uint32 TRM_EN:1;                /* Targeted Refresh Management */
    volatile uint32 HP_EN:1;                 /* High Performance Enable */
    volatile uint32 CMD_QUEUE_DPTH:2;        /* Command Queue Depth. */
    volatile uint32 _unused_8:2;
    volatile uint32 ECC_SCRUB_INT:4;         /* ECC Scrubbing Interval */
    volatile uint32 _unused_2:2;
    volatile uint32 ECC_FIX_EN:1;            /* ECC Fixing Enable */
    volatile uint32 DDRC_RST:1;              /* DDRC Reset */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_3_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_4_union_tag { /* DDR SDRAM Control Configuration 4 */
  volatile uint32 R;
  struct {
    volatile uint32 BLK_RD_WR:3;             /* Block Read-To-Write. */
    volatile uint32 BLK_WR_RD:3;             /* Block Write-To-Read. */
    volatile uint32 BLK_RD_RD:3;             /* Block Read-To-Read. */
    volatile uint32 BLK_WR_WR:3;             /* Block Write-To-Write. */
    volatile uint32 DFI_FREQ:5;              /* DFI Frequency. */
    volatile uint32 DFI_FREQ_HS:5;           /* DFI Frequency */
    volatile uint32 _unused_8:2;
    volatile uint32 PWROK_OVRD_VAL:1;        /* PwrOkIn Override Value. */
    volatile uint32 PWROK_OVRD_EN:1;         /* PwrOkIn Override Enable. */
    volatile uint32 RESET_OVRD_VAL:1;        /* Reset Override Value. */
    volatile uint32 RESET_OVRD_EN:1;         /* Reset Override Enable. */
    volatile uint32 DFI_WAKEUP:4;            /* DFI Wakeup. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_4_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_5_union_tag { /* DDR SDRAM Control Configuration 5 */
  volatile uint32 R;
  struct {
    volatile uint32 LNK_ECC_EN:1;            /* Link ECC enable. */
    volatile uint32 DSLP_EN:1;               /* Deep sleep enable. */
    volatile uint32 _unused_24:6;
    volatile uint32 WCK_DYN:1;               /* WCK Dynamic Mode. */
    volatile uint32 _unused_8:15;
    volatile uint32 MED_PRIO:4;              /* Medium Priority Level. */
    volatile uint32 HIGH_PRIO:4;             /* High Priority Level. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_5_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_6_union_tag { /* DDR SDRAM Control Configuration 6 */
  volatile uint32 R;
  struct {
    volatile uint32 MR28_VAL:6;              /* MR28 Value. */
    volatile uint32 RRO:1;                   /* Refresh rate option. */
    volatile uint32 FRC_DFI_INIT:1;          /* Force dfi_init_start low. */
    volatile uint32 ALT_TRN_INT:4;           /* Force dfi_init_start low. */
    volatile uint32 ADDR_SZL_EN:1;           /* Address swizzle enable. */
    volatile uint32 RD_SPLT_EN:1;            /* Read split enable. */
    volatile uint32 SRE_DIS:1;               /* Self refresh entry disable. */
    volatile uint32 _unused_16:1;
    volatile uint32 RH_REF_SUB:3;            /* Row hammer refresh subtract value. */
    volatile uint32 RH_THRSHLD3:3;           /* Row hammer threshold 3 value. */
    volatile uint32 RH_THRSHLD2:3;           /* Row hammer threshold 2 value. */
    volatile uint32 RH_THRSHLD1:3;           /* Row hammer threshold 1 value. */
    volatile uint32 RH_CYC_RST:3;            /* Row hammer cycle reset value. */
    volatile uint32 LP5_RFM_EN:1;            /* LPDDR5 refresh management enable. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_6_tag;

typedef union DDR_DDRC_DDR_SDRAM_MD_CNTL2_union_tag { /* DDR SDRAM mode control 2 */
  volatile uint32 R;
  struct {
    volatile uint32 DQ_CNTL:18;              /* Data control. */
    volatile uint32 MPRR_RD_SEL:2;           /* MPRR read select. */
    volatile uint32 PDA_EN:1;                /* Per DDR SDRAM Addressability Enable. */
    volatile uint32 _unused_3:8;
    volatile uint32 NOP_EN:1;                /* NOP Enable. */
    volatile uint32 MPRW:1;                  /* Multi-purpose register write. */
    volatile uint32 MPRR:1;                  /* Multi-purpose register read. */
  } B;
} DDR_DDRC_DDR_SDRAM_MD_CNTL2_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR1_union_tag { /* DDR SDRAM multi-purpose register 1 */
  volatile uint32 R;
  struct {
    volatile uint32 MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR1_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR2_union_tag { /* DDR SDRAM multi-purpose register 2 */
  volatile uint32 R;
  struct {
    volatile uint32 MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR2_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR3_union_tag { /* DDR SDRAM multi-purpose register 3 */
  volatile uint32 R;
  struct {
    volatile uint32 MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR3_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR4_union_tag { /* DDR SDRAM multi-purpose register 4 */
  volatile uint32 R;
  struct {
    volatile uint32 MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR4_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR5_union_tag { /* DDR SDRAM multi-purpose register 5 */
  volatile uint32 R;
  struct {
    volatile uint32 MPR_VLD:1;               /* MPR Valid. */
    volatile uint32 _unused_16:15;
    volatile uint32 MPR_READ:16;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR5_tag;

typedef union DDR_DDRC_DDR_SDRAM_REF_RATE_union_tag { /* DDR Refresh Rate */
  volatile uint32 R;
  struct {
    volatile uint32 REF_RATE_CS1:8;          /* Refresh Rate Rank 1 */
    volatile uint32 REF_RATE_CS0:8;          /* Refresh Rate Rank 0 */
    volatile uint32 REF_RATE_CS1_CHB:8;      /* Refresh Rate Rank 1 */
    volatile uint32 REF_RATE_CS0_CHB:8;      /* Refresh Rate Rank 0 */
  } B;
} DDR_DDRC_DDR_SDRAM_REF_RATE_tag;

typedef union DDR_DDRC_TIMING_CFG_12_union_tag { /* DDR SDRAM Timing Configuration 12 */
  volatile uint32 R;
  struct {
    volatile uint32 CASLAT_HS:6;             /* CAS Latency For Half Speed */
    volatile uint32 _unused_24:2;
    volatile uint32 ACTTORW_HS:6;            /* Activate To Read Or Write For Half Speed */
    volatile uint32 _unused_16:2;
    volatile uint32 ACTTOPRE_HS:7;           /* Activate-To-Precharge Time For Half Speed */
    volatile uint32 _unused_8:1;
    volatile uint32 PRETOACT_HS:6;           /* Precharge-To-Activate Time For Half Speed */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_12_tag;

typedef union DDR_DDRC_TIMING_CFG_13_union_tag { /* DDR SDRAM Timing Configuration 13 */
  volatile uint32 R;
  struct {
    volatile uint32 ACTTOACT_HS:5;           /* Activate-To-Activate Interval For Half Speed */
    volatile uint32 _unused_24:3;
    volatile uint32 WRREC_HS:6;              /* Write Recovery For Half Speed */
    volatile uint32 _unused_16:2;
    volatile uint32 REFREC_HS:10;            /* Refresh Recovery For Half Speed */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_13_tag;

typedef union DDR_DDRC_TIMING_CFG_14_union_tag { /* DDR SDRAM Timing Configuration 14 */
  volatile uint32 R;
  struct {
    volatile uint32 REFINT_HS:17;            /* Refresh Interval For Half Speed */
    volatile uint32 _unused_14:1;
    volatile uint32 RD_TO_PRE_HS:5;          /* Read-To-Precharge Time For Half Speed */
    volatile uint32 _unused_8:1;
    volatile uint32 WRLAT_HS:6;              /* Write Latency For Half Speed */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_14_tag;

typedef union DDR_DDRC_TIMING_CFG_15_union_tag { /* DDR SDRAM Timing Configuration 15 */
  volatile uint32 R;
  struct {
    volatile uint32 REFTOREF_PB_HS:10;       /* Refresh-to-refresh interval for per-bank refresh. */
    volatile uint32 _unused_20:2;
    volatile uint32 _unused_16:4;
    volatile uint32 REFREC_PB_HS:10;         /* Refresh Recovery During Per-Bank Refresh. */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_15_tag;

typedef union DDR_DDRC_TIMING_CFG_16_union_tag { /* DDR SDRAM Timing Configuration 16 */
  volatile uint32 R;
  struct {
    volatile uint32 T_STAB_HS:15;            /* Stabilization Wait Time at Half Speed */
    volatile uint32 _unused_16:1;
    volatile uint32 WCK_CNFGS_HS:16;         /* WCK Configuration Settings at Half Speed */
  } B;
} DDR_DDRC_TIMING_CFG_16_tag;

typedef union DDR_DDRC_TIMING_CFG_17_union_tag { /* DDR SDRAM Timing Configuration 17 */
  volatile uint32 R;
  struct {
    volatile uint32 ZQCS_INT_HS:4;           /* ZQCS Interval */
    volatile uint32 _unused_24:4;
    volatile uint32 ZQCS_HS:4;               /* ZQ Calibration Short Time */
    volatile uint32 _unused_16:4;
    volatile uint32 ZQOPER_HS:4;             /* ZQ Calibration Operation Time */
    volatile uint32 _unused_8:4;
    volatile uint32 ZQINIT_HS:4;             /* ZQ Calibration Initialization Time */
    volatile uint32 _unused_0:4;
  } B;
} DDR_DDRC_TIMING_CFG_17_tag;

typedef union DDR_DDRC_TX_CFG_1_union_tag { /* Transaction Configuration Register 1 */
  volatile uint32 R;
  struct {
    volatile uint32 WWATER:4;                /* Write Watermark. */
    volatile uint32 REAP_BLOCK_DIS:1;        /* Read Estimated Activate to Precharge Block Disable. */
    volatile uint32 WEAP_BLOCK_DIS:1;        /* Write Estimated Activate to Precharge Block Disable. */
    volatile uint32 NO_COS:1;                /* No Quality of Service. This field allows you to ignore the QOS value received by the DDR controller such that only one priority is used. */
    volatile uint32 TS_DEPTH:5;              /* Transaction Scheduler Depth */
    volatile uint32 _unused_19:1;            /* Disable read urgent mode capability */
    volatile uint32 _unused_18:1;            /* Disable write urgent mode capability */
    volatile uint32 _unused_17:1;
    volatile uint32 RSRV_RDWR:1;             /* Reserve Read and Write Entries. */
    volatile uint32 _unused_15:1;
    volatile uint32 RDFC_DIS:1;              /* Read Data Flow Control Disabled. */
    volatile uint32 NRM_OCC:2;               /* Normal Occupancy. */
    volatile uint32 BAD_DD:1;                /* Bad Dropdown. */
    volatile uint32 HPR:1;                   /* High Priority Read. */
    volatile uint32 _unused_8:2;
    volatile uint32 INF_WR_CNT:1;            /* Infinite Write Count. */
    volatile uint32 INF_RD_CNT:1;            /* Infinite Read Count. */
    volatile uint32 LT_REOD_DIS:1;           /* Large Transaction Reorder Disable. */
    volatile uint32 _unused_4:1;
    volatile uint32 SER:1;                   /* Serialize. */
    volatile uint32 _unused_2:1;
    volatile uint32 HWA_EN:1;                /* Hardware Assert Enable. */
    volatile uint32 _unused_0:1;
  } B;
} DDR_DDRC_TX_CFG_1_tag;

typedef union DDR_DDRC_TX_CFG_2_union_tag { /* Transaction Configuration Register 2 */
  volatile uint32 R;
  struct {
    volatile uint32 WR_BONUS:5;              /* Write Bandwidth Bonus Count. */
    volatile uint32 RSRVD_4:3;               /* Reserved. */
    volatile uint32 WR_CNT:5;                /* Write Bandwidth Count. */
    volatile uint32 RSRVD_3:3;               /* Reserved. */
    volatile uint32 RD_BONUS:5;              /* Read Bandwidth Bonus Count. */
    volatile uint32 RSRVD_2:3;               /* Reserved. */
    volatile uint32 RD_CNT:5;                /* Read Bandwidth Count. */
    volatile uint32 RT_OPT_DIS:1;            /* Real Time Traffic Optimizaiton Disable. */
    volatile uint32 RD_EPA_DIS:1;            /* Read Precharge to Activate Disable. */
    volatile uint32 WR_EPA_DIS:1;            /* Write Precharge to Activate Disable. */
  } B;
} DDR_DDRC_TX_CFG_2_tag;

typedef union DDR_DDRC_TX_CFG_3_union_tag { /* Transaction Configuration Register 3. */
  volatile uint32 R;
  struct {
    volatile uint32 RSRVD_4:3;               /* Reserved. */
    volatile uint32 RMED_BDD:5;              /* Read Medium Bonus Dropdown. */
    volatile uint32 RSRVD_3:3;               /* Reserved. */
    volatile uint32 RHI_BDD:5;               /* Read High Bonus Dropdown. */
    volatile uint32 RSRVD_2:3;               /* Reserved. */
    volatile uint32 RMED_DD:5;               /* Read Medium Dropdown. */
    volatile uint32 RSRVD_1:3;               /* Reserved. */
    volatile uint32 RHI_DD:5;                /* Read High Dropdown. */
  } B;
} DDR_DDRC_TX_CFG_3_tag;

typedef union DDR_DDRC_TX_CFG_4_union_tag { /* Transaction Configuration Register 4. */
  volatile uint32 R;
  struct {
    volatile uint32 RSRVD_4:3;               /* Reserved. */
    volatile uint32 RMED_BDDD:5;             /* Read Medium Bonus Dropdown Duration. */
    volatile uint32 RSRVD_3:3;               /* Reserved. */
    volatile uint32 RHI_BDDD:5;              /* Read High Bonus Dropdown Duration. */
    volatile uint32 RSRVD_2:3;               /* Reserved. */
    volatile uint32 RMED_DDD:5;              /* Read Medium Dropdown Duration. */
    volatile uint32 RSRVD_1:3;               /* Reserved. */
    volatile uint32 RHI_DDD:5;               /* Read High Dropdown Duration. */
  } B;
} DDR_DDRC_TX_CFG_4_tag;

typedef union DDR_DDRC_DDRDSR_2_union_tag { /* DDR SDRAM Debug Status 2 */
  volatile uint32 R;
  struct {
    volatile uint32 RPD_END:1;               /* Rapid Clear Of Memory End */
    volatile uint32 RPD_ST:1;                /* Rapid Clear Of Memory Start */
    volatile uint32 PHY_INIT_CMPLT:1;        /* DDR PHY Initialization Complete */
    volatile uint32 _unused_2:27;
    volatile uint32 NML:1;                   /* No Modified Lines */
    volatile uint32 IDLE:1;                  /* Memory controller idle (read only). */
  } B;
} DDR_DDRC_DDRDSR_2_tag;

typedef union DDR_DDRC_DDR_IP_REV1_union_tag { /* DDRC Revision 1 */
  volatile uint32 R;
  struct {
    volatile uint32 IP_MN:8;                 /* Minor Revision */
    volatile uint32 IP_MJ:8;                 /* Major Revision */
    volatile uint32 IP_ID:16;                /* IP Block ID */
  } B;
} DDR_DDRC_DDR_IP_REV1_tag;

typedef union DDR_DDRC_DDR_IP_REV2_union_tag { /* DDRC Revision 2 */
  volatile uint32 R;
  struct {
    volatile uint32 IP_CFG:8;                /* IP Block Configuration Options */
    volatile uint32 IP_ERRATA:8;             /* IP Errata Version. */
    volatile uint32 IP_INT:8;                /* IP Block Integration Options */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_DDR_IP_REV2_tag;

typedef union DDR_DDRC_DDR_EOR_union_tag { /* DDR Enhanced Optimization Register */
  volatile uint32 R;
  struct {
    volatile uint32 DYN_BSTOPRE_THRSHLD:6;   /* Dynamic BSTOPRE threshold. */
    volatile uint32 _unused_24:2;
    volatile uint32 DYN_BSTOPRE_EN:1;        /* Dynamic BSTOPRE enable. */
    volatile uint32 _unused_12:11;
    volatile uint32 WR_REOD_DIS:2;           /* Write reorder disable. */
    volatile uint32 _unused_8:2;
    volatile uint32 RD_REOD_DIS:3;           /* Read reorder disable. */
    volatile uint32 _unused_2:3;
    volatile uint32 ADDR_HASH_EN:1;          /* Address hash enabled. */
    volatile uint32 RD_BDW_OPT_DIS:1;        /* Read bandwidth optimization disable. */
  } B;
} DDR_DDRC_DDR_EOR_tag;

typedef union DDR_DDRC_DDR_MTCR_union_tag { /* DDR SDRAM Memory Test Control */
  volatile uint32 R;
  struct {
    volatile uint32 MT_STAT:1;               /* Memory Test Status */
    volatile uint32 _unused_25:6;
    volatile uint32 _unused_24:1;
    volatile uint32 MT_ADDR2_EN:1;           /* Memory Test Address Range 2 Enable. */
    volatile uint32 MT_ADDR_EN:1;            /* Memory Test Address Range Enable */
    volatile uint32 _unused_20:2;
    volatile uint32 MT_TSIZ:3;               /* Memory Test Transaction Size. */
    volatile uint32 _unused_16:1;
    volatile uint32 MT_TRNARND:4;            /* Memory Test Turnaround */
    volatile uint32 _unused_8:4;
    volatile uint32 MT_TYP:2;                /* Memory Test Type */
    volatile uint32 _unused_1:5;
    volatile uint32 MT_EN:1;                 /* Memory Test Enable */
  } B;
} DDR_DDRC_DDR_MTCR_tag;

typedef union DDR_DDRC_DDR_MTP_union_tag { /* DDR SDRAM Memory Test Pattern n */
  volatile uint32 R;
  struct {
    volatile uint32 DDR_PATT:32;             /* DDR SDRAM Pattern */
  } B;
} DDR_DDRC_DDR_MTP_tag;

typedef union DDR_DDRC_DDR_MT_ST_EXT_ADDR_union_tag { /* DDR SDRAM Memory Test Start Extended Address */
  volatile uint32 R;
  struct {
    volatile uint32 MT_ST_EXT_ADDR:8;        /* Memory Test Start Extended Address */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_ST_EXT_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_ST_ADDR_union_tag { /* DDR SDRAM Memory Test Start Address */
  volatile uint32 R;
  struct {
    volatile uint32 MT_ST_ADDR:32;           /* Memory Test Start Address */
  } B;
} DDR_DDRC_DDR_MT_ST_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_END_EXT_ADDR_union_tag { /* DDR SDRAM Memory Test End Extended Address */
  volatile uint32 R;
  struct {
    volatile uint32 MT_END_EXT_ADDR:8;       /* Memory Test End Extended Address */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_END_EXT_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_END_ADDR_union_tag { /* DDR SDRAM Memory Test End Address */
  volatile uint32 R;
  struct {
    volatile uint32 MT_END_ADDR:32;          /* Memory Test End Address */
  } B;
} DDR_DDRC_DDR_MT_END_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_ST_EXT_ADDR2_union_tag { /* DDR Memory Test Start Extended Address 2 */
  volatile uint32 R;
  struct {
    volatile uint32 MT_ST_EXT_ADDR2:8;       /* Memory Test Start Extended Address 2 */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_ST_EXT_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_ST_ADDR2_union_tag { /* DDR Memory Test Start Address 2 */
  volatile uint32 R;
  struct {
    volatile uint32 MT_ST_ADDR2:32;          /* Memory Test Start Address 2 */
  } B;
} DDR_DDRC_DDR_MT_ST_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_END_EXT_ADDR2_union_tag { /* DDR Memory Test End Extended Address 2 */
  volatile uint32 R;
  struct {
    volatile uint32 MT_END_EXT_ADDR2:8;      /* Memory Test End Extended Address 2 */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_END_EXT_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_END_ADDR2_union_tag { /* DDR Memory Test End Address 2 */
  volatile uint32 R;
  struct {
    volatile uint32 MT_END_ADDR2:32;         /* Memory Test End Address 2 */
  } B;
} DDR_DDRC_DDR_MT_END_ADDR2_tag;

typedef union DDR_DDRC_DEBUG_1_union_tag { /* Debug 1 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_29:3;
    volatile uint32 MAPD:1;                  /* Transaction scheduler auto-precharge disable. */
    volatile uint32 _unused_17:11;
    volatile uint32 CM:1;                    /* Crawl mode. */
    volatile uint32 _unused_3:13;
    volatile uint32 FRC_ZQCS:1;              /* Force ZQCS command. */
    volatile uint32 FRC_ZQCL:1;              /* Force ZQCL command. */
    volatile uint32 UZQO:1;                  /* Update ZQ Calibration Once. */
  } B;
} DDR_DDRC_DEBUG_1_tag;

typedef union DDR_DDRC_DEBUG_2_union_tag { /* Debug 2 */
  volatile uint32 R;
  struct {
    volatile uint32 NML:1;                   /* No Modified Lines */
    volatile uint32 IDLE:1;                  /* Memory controller idle (read only). */
    volatile uint32 SR_I:1;                  /* Memory controller is in self refresh due to idle (read only). */
    volatile uint32 SR:1;                    /* Memory controller is in self refresh and clocks can be gated (read only). */
    volatile uint32 _unused_26:2;
    volatile uint32 IR:1;                    /* Issue refresh. */
    volatile uint32 WRCD:1;                  /* Write Cancel Disable */
    volatile uint32 _unused_21:3;
    volatile uint32 BYTE_MODE:1;             /* Byte Mode. */
    volatile uint32 _unused_0:20;
  } B;
} DDR_DDRC_DEBUG_2_tag;

typedef union DDR_DDRC_DEBUG_4_union_tag { /* Debug 4 */
  volatile uint32 R;
  struct {
    volatile uint32 EDDRTQ_CFG_5:32;         /* eDDRTQ_CFG_5 used by the eDDRTQ. */
  } B;
} DDR_DDRC_DEBUG_4_tag;

typedef union DDR_DDRC_DEBUG_19_union_tag { /* Debug 19 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_30:2;
    volatile uint32 CNTR_OVRD_VAL:3;         /* Counter Override Value. */
    volatile uint32 CNTR_OVRD:1;             /* Counter Override Enable. */
    volatile uint32 _unused_16:10;
    volatile uint32 MCK_DIS:1;               /* MCK Gating Disable. */
    volatile uint32 _unused_11:4;
    volatile uint32 ALT_TRAIN_EN:1;          /* Alternate Train Enable. */
    volatile uint32 _unused_8:2;
    volatile uint32 REF_READ_RATE:4;         /* Refresh Read Rate. */
    volatile uint32 _unused_2:2;
    volatile uint32 FRC_1X_REF_RATE:1;       /* Force 1x refresh rate. */
    volatile uint32 MCSR:1;                  /* DDRC Soft Reset. */
  } B;
} DDR_DDRC_DEBUG_19_tag;

typedef union DDR_DDRC_DEBUG_20_union_tag { /* Debug 20 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_8:24;
    volatile uint32 DISM_CS:5;               /* DISM Current State. */
    volatile uint32 SPARE_CNFG:1;            /* Spare config bits. */
    volatile uint32 _unused_1:1;
    volatile uint32 INIT_DONE:1;             /* Initialization Done. */
  } B;
} DDR_DDRC_DEBUG_20_tag;

typedef union DDR_DDRC_DEBUG_26_union_tag { /* Debug 26 */
  volatile uint32 R;
  struct {
    volatile uint32 DDRC_WEOD_DIS:1;         /* Command Queue Write Reordering Disable. */
    volatile uint32 _unused_30:1;
    volatile uint32 DIS_CTRLUPD_REQ:1;       /* Disable Controller Update Request. */
    volatile uint32 FRC_WRDATA_CS0:1;        /* Force Write Data Timing to rank 0 */
    volatile uint32 DIS_WR_COMB:1;           /* Disable Write Combining for ECC */
    volatile uint32 SPARE_CNFG2:1;           /* Spare config bits. This must be set to 0. */
    volatile uint32 RESET_RAM:1;             /* Reset RAM. */
    volatile uint32 IDLE_FLUSH_DIS:1;        /* Idle Flush Disable. */
    volatile uint32 WCK_CS:2;                /* WCK_CS Debug. */
    volatile uint32 LEGACY_ROQ:1;            /* Legacy ROQ mode. */
    volatile uint32 DDRC_REOD_DIS:1;         /* Command Queue Read Reordering Disable. */
    volatile uint32 DFI_FREQ:5;              /* DFI Frequency. */
    volatile uint32 DFI_FREQ_HS:5;           /* DFI Frequency. */
    volatile uint32 EXT_DFI_WAKEUP:1;        /* Extended DFI Wakeup. */
    volatile uint32 DFI_RSTN:1;              /* DFI Reset_N. */
    volatile uint32 DFI_FREQ_FSP_HS:2;       /* DFI Frequency FSP Half-Speed. */
    volatile uint32 DFI_FREQ_FSP:2;          /* DFI Frequency FSP. */
    volatile uint32 DFI_WAKEUP:4;            /* DFI Wakeup. */
  } B;
} DDR_DDRC_DEBUG_26_tag;

typedef union DDR_DDRC_DEBUG_27_union_tag { /* Debug 27 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_8:24;
    volatile uint32 INVC:1;                  /* Invalidate Cache */
    volatile uint32 PRE_TO_ACT_4X:1;         /* Precharge-To-Activate x4. */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_DEBUG_27_tag;

typedef union DDR_DDRC_DEBUG_28_union_tag { /* Debug 28 */
  volatile uint32 R;
  struct {
    volatile uint32 PLL_LCK:1;               /* DDR PHY PLL Lock. */
    volatile uint32 _unused_16:15;
    volatile uint32 WLAST_ERR:1;             /* WLAST error bit. */
    volatile uint32 _unused_0:15;
  } B;
} DDR_DDRC_DEBUG_28_tag;

typedef union DDR_DDRC_ERR_EN_union_tag { /* Error Enable */
  volatile uint32 R;
  struct {
    volatile uint32 WTE_EN:1;                /* Write Tag Error Enable */
    volatile uint32 RTE_EN:1;                /* Read Tag Error Enable */
    volatile uint32 LKSTP_2_EN:1;            /* Lockstep 2 Enable */
    volatile uint32 LKSTP_1_EN:1;            /* Lockstep 1 Enable */
    volatile uint32 _unused_27:1;
    volatile uint32 PAR_1_EN:1;              /* Parity Enable For Internal Errors */
    volatile uint32 ECC_EN_RAM_2:1;          /* ECC Enable For On-Chip RAM 2 */
    volatile uint32 ECC_EN_RAM_1:1;          /* ECC Enable For On-Chip RAM 1 */
    volatile uint32 CRC_2_EN:1;              /* CRC Enable For Group 2 Registers */
    volatile uint32 CRC_1_EN:1;              /* CRC Enable For Group 1 Registers */
    volatile uint32 _unused_8:14;
    volatile uint32 DRAM_SF1_EN:1;           /* DRAM Safety Feature 1 Enable */
    volatile uint32 DRAM_SF2_EN:1;           /* DRAM Safety Feature 2 Enable */
    volatile uint32 DRAM_SF3_EN:1;           /* DRAM Safety Feature 3 Enable */
    volatile uint32 _unused_2:3;
    volatile uint32 INLINE_ECC_EN:1;         /* Inline ECC Enable */
    volatile uint32 ECC_EN:1;                /* ECC Enable */
  } B;
} DDR_DDRC_ERR_EN_tag;

typedef union DDR_DDRC_DATA_ERR_INJECT_HI_union_tag { /* Memory Data Path Error Injection Mask High */
  volatile uint32 R;
  struct {
    volatile uint32 EIMH:32;                 /* Error Injection Mask High Data Path */
  } B;
} DDR_DDRC_DATA_ERR_INJECT_HI_tag;

typedef union DDR_DDRC_DATA_ERR_INJECT_LO_union_tag { /* Memory Data Path Error Injection Mask Low */
  volatile uint32 R;
  struct {
    volatile uint32 EIML:32;                 /* Error Injection Mask Low Data Bit */
  } B;
} DDR_DDRC_DATA_ERR_INJECT_LO_tag;

typedef union DDR_DDRC_ERR_INJECT_union_tag { /* Memory Data Path Error Injection Mask ECC */
  volatile uint32 R;
  struct {
    volatile uint32 EEIM:8;                  /* ECC Error Injection Mask */
    volatile uint32 EIEN:1;                  /* Error Injection Enable */
    volatile uint32 _unused_22:1;
    volatile uint32 _unused_20:2;
    volatile uint32 NUM_ECC_INJ:4;           /* Number Of ECC Errors Injected */
    volatile uint32 PIEN:1;                  /* Parity Error Injection Enable */
    volatile uint32 INTEIN:1;                /* Internal Error Injection Enable */
    volatile uint32 INTIES:3;                /* Internal Error Injection Source */
    volatile uint32 ECC_INJ_SRC:2;           /* ECC Injection Source */
    volatile uint32 FRC2B:1;                 /* Force 2-Bit Error */
    volatile uint32 PAR_INJ_SRC:2;           /* Parity Error Injection Source */
    volatile uint32 _unused_1:5;
    volatile uint32 ADDR_TEN:1;              /* Address Trigger Enable */
  } B;
} DDR_DDRC_ERR_INJECT_tag;

typedef union DDR_DDRC_ADDR_ERR_INJ_union_tag { /* Address Error Inject */
  volatile uint32 R;
  struct {
    volatile uint32 ADDR:32;                 /* Address */
  } B;
} DDR_DDRC_ADDR_ERR_INJ_tag;

typedef union DDR_DDRC_EXT_ADDR_ERR_INJ_union_tag { /* Extended Address Error Inject */
  volatile uint32 R;
  struct {
    volatile uint32 EADDR:8;                 /* Extended Address */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_EXT_ADDR_ERR_INJ_tag;

typedef union DDR_DDRC_CAPTURE_EXT_DATA_HI_union_tag { /* Memory Extended Data Path Read Capture High */
  volatile uint32 R;
  struct {
    volatile uint32 ECEHD:32;                /* Error Capture Extended High Data Path */
  } B;
} DDR_DDRC_CAPTURE_EXT_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_EXT_DATA_LO_union_tag { /* Memory Extended Data Path Read Capture Low */
  volatile uint32 R;
  struct {
    volatile uint32 ECELD:32;                /* Error Capture Extended Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_EXT_DATA_LO_tag;

typedef union DDR_DDRC_CAPTURE_DATA_HI_union_tag { /* Memory Data Path Read Capture High */
  volatile uint32 R;
  struct {
    volatile uint32 ECHD:32;                 /* Error Capture High Data Path */
  } B;
} DDR_DDRC_CAPTURE_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_DATA_LO_union_tag { /* Memory Data Path Read Capture Low */
  volatile uint32 R;
  struct {
    volatile uint32 ECLD:32;                 /* Error Capture Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_DATA_LO_tag;

typedef union DDR_DDRC_CAPTURE_ECC_union_tag { /* Memory Data Path Read Capture ECC */
  volatile uint32 R;
  struct {
    volatile uint32 ECE:32;                  /* Error Capture ECC */
  } B;
} DDR_DDRC_CAPTURE_ECC_tag;

typedef union DDR_DDRC_ERR_DETECT_union_tag { /* Memory Error Detect */
  volatile uint32 R;
  struct {
    volatile uint32 MSE:1;                   /* Memory-Select Error */
    volatile uint32 _unused_30:1;
    volatile uint32 SBE:1;                   /* Single-Bit ECC Errors */
    volatile uint32 MBE:1;                   /* Multiple-Bit Error */
    volatile uint32 _unused_27:1;
    volatile uint32 _unused_25:2;
    volatile uint32 REFRATEE:1;              /* Refresh rate error. */
    volatile uint32 _unused_22:2;
    volatile uint32 _unused_21:1;
    volatile uint32 _unused_20:1;
    volatile uint32 SSBE:1;                  /* Scrubbed Single-Bit ECC Error */
    volatile uint32 LNKE:1;                  /* Link ECC Error */
    volatile uint32 DRAM1E:1;                /* DRAM 1 error. */
    volatile uint32 DRAM2E:1;                /* DRAM 2 error. */
    volatile uint32 PHYE:1;                  /* PHY error. */
    volatile uint32 CFGE:1;                  /* Configuration read error. */
    volatile uint32 REGE:1;                  /* Region error. */
    volatile uint32 IPE:1;                   /* Internal Parity Error */
    volatile uint32 UPDTMTE:1;               /* Update Timeout Error */
    volatile uint32 CRCE:1;                  /* Configuration CRC Error */
    volatile uint32 SMBE2:1;                 /* SRAM Multi-Bit Error 2 */
    volatile uint32 SMBE1:1;                 /* SRAM Multi-Bit Error 1 */
    volatile uint32 SSBE2:1;                 /* SRAM SBE 2 */
    volatile uint32 SSBE1:1;                 /* SRAM SBE 1 */
    volatile uint32 WTAGE:1;                 /* Write Tag Error */
    volatile uint32 RTAGE:1;                 /* Read Tag Error */
    volatile uint32 WTTE:1;                  /* Write Tag Timeout Error */
    volatile uint32 RTTE:1;                  /* Read Tag Timeout Error */
    volatile uint32 RTMTE:1;                 /* Read Timeout Error */
    volatile uint32 MME:1;                   /* Multiple Memory Errors */
  } B;
} DDR_DDRC_ERR_DETECT_tag;

typedef union DDR_DDRC_ERR_DISABLE_union_tag { /* Memory Error Disable */
  volatile uint32 R;
  struct {
    volatile uint32 MSED:1;                  /* Memory-Select Error Disable */
    volatile uint32 _unused_30:1;
    volatile uint32 SBED:1;                  /* Single-Bit ECC Error Disable */
    volatile uint32 MBED:1;                  /* Multiple-Bit ECC Error Disable */
    volatile uint32 ILLTXNED:1;              /* Illegal Transaction Error Disable */
    volatile uint32 _unused_25:2;
    volatile uint32 REFRATEED:1;             /* Refresh Rate Error Disable */
    volatile uint32 LNKED:1;                 /* Link ECC Error Disable */
    volatile uint32 SPARE:1;                 /* Spare config bit. */
    volatile uint32 _unused_20:2;
    volatile uint32 SSBED:1;                 /* Scrubbed Single-Bit ECC Error Disable */
    volatile uint32 _unused_16:3;
    volatile uint32 PHYED:1;                 /* PHY Error Disable */
    volatile uint32 _unused_12:3;
    volatile uint32 UPDTMTED:1;              /* Update Timeout Error Disable */
    volatile uint32 _unused_0:11;
  } B;
} DDR_DDRC_ERR_DISABLE_tag;

typedef union DDR_DDRC_ERR_INT_EN_union_tag { /* Memory Error Interrupt Enable */
  volatile uint32 R;
  struct {
    volatile uint32 MSEE:1;                  /* Memory-Select Error Interrupt Enable */
    volatile uint32 _unused_30:1;
    volatile uint32 SBEE:1;                  /* Single-Bit ECC Error Interrupt Enable */
    volatile uint32 MBEE:1;                  /* Multiple-Bit ECC Error Interrupt Enable */
    volatile uint32 SSBE12E:1;               /* SRAM Single-Bit Error Interrupt Enable */
    volatile uint32 _unused_25:2;
    volatile uint32 REFRATEEE:1;             /* Refresh Rate Interrupt Enable */
    volatile uint32 ILLTXNEE:1;              /* Illegal Transaction Interrupt Enable */
    volatile uint32 LNKEE:1;                 /* Link ECC Error Interrupt Enable */
    volatile uint32 _unused_20:2;
    volatile uint32 SSBEE:1;                 /* Scrubbed Single-Bit ECC Error Interrupt Enable */
    volatile uint32 _unused_16:3;
    volatile uint32 PHYEE:1;                 /* PHY error interrupt enable. */
    volatile uint32 _unused_12:3;
    volatile uint32 UPDTMTEE:1;              /* Update Timeout Interrupt Enable */
    volatile uint32 _unused_0:11;
  } B;
} DDR_DDRC_ERR_INT_EN_tag;

typedef union DDR_DDRC_CAPTURE_ATTRIBUTES_union_tag { /* Memory Error Attributes Capture */
  volatile uint32 R;
  struct {
    volatile uint32 VLD:1;                   /* Valid */
    volatile uint32 _unused_28:3;
    volatile uint32 _unused_24:4;
    volatile uint32 _unused_20:4;
    volatile uint32 TTYP:2;                  /* Error Transaction Type */
    volatile uint32 _unused_16:2;
    volatile uint32 TSRC:8;                  /* Error Transaction Source */
    volatile uint32 TSIZ:3;                  /* Error Transaction Size */
    volatile uint32 _unused_4:1;
    volatile uint32 BNUM:3;                  /* Data Beat Number */
    volatile uint32 _unused_0:1;
  } B;
} DDR_DDRC_CAPTURE_ATTRIBUTES_tag;

typedef union DDR_DDRC_CAPTURE_ADDRESS_union_tag { /* Memory Error Address Capture */
  volatile uint32 R;
  struct {
    volatile uint32 CADDR:32;                /* Captured Address */
  } B;
} DDR_DDRC_CAPTURE_ADDRESS_tag;

typedef union DDR_DDRC_CAPTURE_EXT_ADDRESS_union_tag { /* Memory Error Extended Address Capture */
  volatile uint32 R;
  struct {
    volatile uint32 CEADDR:8;                /* Captured Extended Address */
    volatile uint32 _unused_0:24;
  } B;
} DDR_DDRC_CAPTURE_EXT_ADDRESS_tag;

typedef union DDR_DDRC_ERR_SBE_union_tag { /* Single-Bit ECC Memory Error Management */
  volatile uint32 R;
  struct {
    volatile uint32 SBEC:8;                  /* SBE Counter */
    volatile uint32 SSBEC:8;                 /* Scrubbed SBE Counter */
    volatile uint32 SBET:8;                  /* SBE Threshold */
    volatile uint32 SSBET:8;                 /* Scrubbed SBE Threshold */
  } B;
} DDR_DDRC_ERR_SBE_tag;

typedef union DDR_DDRC_REG_CRC_GRP_1_union_tag { /* Register CRC Code For Group 1 */
  volatile uint32 R;
  struct {
    volatile uint32 CRC_1:32;                /* Programmed CRC Code */
  } B;
} DDR_DDRC_REG_CRC_GRP_1_tag;

typedef union DDR_DDRC_REG_CRC_GRP_2_union_tag { /* Register CRC Code For Group 2 */
  volatile uint32 R;
  struct {
    volatile uint32 CRC_2:32;                /* Programmed CRC Code */
  } B;
} DDR_DDRC_REG_CRC_GRP_2_tag;

typedef union DDR_DDRC_ECC_EXT_REG_0_union_tag { /* ECC Extended Region 0 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_0_EA:8;          /* Extended Region 0 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_0_SA:8;          /* Extended Region 0 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_0_tag;

typedef union DDR_DDRC_ECC_EXT_REG_1_union_tag { /* ECC Extended Region 1 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_1_EA:8;          /* Extended Region 1 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_1_SA:8;          /* Extended Region 1 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_1_tag;

typedef union DDR_DDRC_ECC_EXT_REG_2_union_tag { /* ECC Extended Region 2 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_2_EA:8;          /* Extended Region 2 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_2_SA:8;          /* Extended Region 2 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_2_tag;

typedef union DDR_DDRC_ECC_EXT_REG_3_union_tag { /* ECC Extended Region 3 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_3_EA:8;          /* Extended Region 3 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_3_SA:8;          /* Extended Region 3 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_3_tag;

typedef union DDR_DDRC_ECC_EXT_REG_4_union_tag { /* ECC Extended Region 4 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_4_EA:8;          /* Extended Region 4 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_4_SA:8;          /* Extended Region 4 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_4_tag;

typedef union DDR_DDRC_ECC_EXT_REG_5_union_tag { /* ECC Extended Region 5 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_5_EA:8;          /* Extended Region 5 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_5_SA:8;          /* Extended Region 5 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_5_tag;

typedef union DDR_DDRC_ECC_EXT_REG_6_union_tag { /* ECC Extended Region 6 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_6_EA:8;          /* Extended Region 6 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_6_SA:8;          /* Extended Region 6 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_6_tag;

typedef union DDR_DDRC_ECC_EXT_REG_7_union_tag { /* ECC Extended Region 7 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 EXT_REG_7_EA:8;          /* Extended Region 7 End Address */
    volatile uint32 _unused_16:8;
    volatile uint32 EXT_REG_7_SA:8;          /* Extended Region 7 Start Address */
    volatile uint32 _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_7_tag;

typedef union DDR_DDRC_ECC_REG_0_union_tag { /* ECC Region 0 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_0_EA:12;             /* Region 0 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_0_SA:12;             /* Region 0 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_0_EN:1;              /* Region 0 Enable */
  } B;
} DDR_DDRC_ECC_REG_0_tag;

typedef union DDR_DDRC_ECC_REG_1_union_tag { /* ECC Region 1 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_1_EA:12;             /* Region 1 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_1_SA:12;             /* Region 1 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_1_EN:1;              /* Region 1 Enable */
  } B;
} DDR_DDRC_ECC_REG_1_tag;

typedef union DDR_DDRC_ECC_REG_2_union_tag { /* ECC Region 2 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_2_EA:12;             /* Region 2 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_2_SA:12;             /* Region 2 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_2_EN:1;              /* Region 2 Enable */
  } B;
} DDR_DDRC_ECC_REG_2_tag;

typedef union DDR_DDRC_ECC_REG_3_union_tag { /* ECC Region 3 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_3_EA:12;             /* Region 3 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_3_SA:12;             /* Region 3 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_3_EN:1;              /* Region 3 Enable */
  } B;
} DDR_DDRC_ECC_REG_3_tag;

typedef union DDR_DDRC_ECC_REG_4_union_tag { /* ECC Region 4 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_4_EA:12;             /* Region 4 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_4_SA:12;             /* Region 4 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_4_EN:1;              /* Region 4 Enable */
  } B;
} DDR_DDRC_ECC_REG_4_tag;

typedef union DDR_DDRC_ECC_REG_5_union_tag { /* ECC Region 5 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_5_EA:12;             /* Region 5 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_5_SA:12;             /* Region 5 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_5_EN:1;              /* Region 5 Enable */
  } B;
} DDR_DDRC_ECC_REG_5_tag;

typedef union DDR_DDRC_ECC_REG_6_union_tag { /* ECC Region 6 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_6_EA:12;             /* Region 6 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_6_SA:12;             /* Region 6 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_6_EN:1;              /* Region 6 Enable */
  } B;
} DDR_DDRC_ECC_REG_6_tag;

typedef union DDR_DDRC_ECC_REG_7_union_tag { /* ECC Region 7 Configuration */
  volatile uint32 R;
  struct {
    volatile uint32 REG_7_EA:12;             /* Region 7 End Address */
    volatile uint32 _unused_16:4;
    volatile uint32 REG_7_SA:12;             /* Region 7 Start Address */
    volatile uint32 _unused_1:3;
    volatile uint32 REG_7_EN:1;              /* Region 7 Enable */
  } B;
} DDR_DDRC_ECC_REG_7_tag;

typedef union DDR_DDRC_PMCFG_1_union_tag { /* Performance Monitor Configuration 1 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_14:18;
    volatile uint32 _unused_3:11;
    volatile uint32 _unused_2:1;
    volatile uint32 RD_BT_FILT_EN:1;         /* Read Beat Filter Enable */
    volatile uint32 WR_BEAT_FILT_EN:1;       /* Write Beat Filter Enable */
  } B;
} DDR_DDRC_PMCFG_1_tag;

typedef union DDR_DDRC_PMCFG_2_union_tag { /* Performance Monitor Configuration 2 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_14:18;
    volatile uint32 _unused_0:14;
  } B;
} DDR_DDRC_PMCFG_2_tag;

typedef union DDR_DDRC_PMCFG_3_union_tag { /* Performance Monitor Configuration 3 */
  volatile uint32 R;
  struct {
    volatile uint32 MSTR_ID_MSK_3:10;        /* Master ID Mask 3 */
    volatile uint32 _unused_16:6;
    volatile uint32 MSTR_ID_3:10;            /* Master ID 3 */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_3_tag;

typedef union DDR_DDRC_PMCFG_4_union_tag { /* Performance Monitor Configuration 4 */
  volatile uint32 R;
  struct {
    volatile uint32 MSTR_ID_MSK_2:10;        /* Master ID Mask 2 */
    volatile uint32 _unused_16:6;
    volatile uint32 MSTR_ID_2:10;            /* Master ID 2 */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_4_tag;

typedef union DDR_DDRC_PMCFG_5_union_tag { /* Performance Monitor Configuration 5 */
  volatile uint32 R;
  struct {
    volatile uint32 MSTR_ID_MSK_1:10;        /* Master ID Mask 1 */
    volatile uint32 _unused_16:6;
    volatile uint32 MSTR_ID_1:10;            /* Master ID 1 */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_5_tag;

typedef union DDR_DDRC_PMCFG_6_union_tag { /* Performance Monitor Configuration 6 */
  volatile uint32 R;
  struct {
    volatile uint32 MSTR_ID_MSK_0:10;        /* Master ID Mask 0 */
    volatile uint32 _unused_16:6;
    volatile uint32 MSTR_ID_0:10;            /* Master ID 0 */
    volatile uint32 _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_6_tag;

typedef union DDR_DDRC_PMGC0_union_tag { /* Performance Monitor Global Control */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_3:29;
    volatile uint32 FCECE:1;                 /* Freeze Counters On Enabled Condition Or Event */
    volatile uint32 PMIE:1;                  /* Performance Monitor Interrupt Enable */
    volatile uint32 FAC:1;                   /* Freeze All Counters */
  } B;
} DDR_DDRC_PMGC0_tag;

typedef union DDR_DDRC_PMLCA0_union_tag { /* Performance Monitor Local Control A0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_6:26;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA0_tag;

typedef union DDR_DDRC_PMLCB0_union_tag { /* Performance Monitor Local Control B0 */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_16:16;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB0_tag;

typedef union DDR_DDRC_PMC0A_union_tag { /* PMC 0a */
  volatile uint32 R;
  struct {
    volatile uint32 PMC0:32;                 /* Counter 0 */
  } B;
} DDR_DDRC_PMC0A_tag;

typedef union DDR_DDRC_PMC0B_union_tag { /* PMC 0b */
  volatile uint32 R;
  struct {
    volatile uint32 PMC0:32;                 /* Counter 0 */
  } B;
} DDR_DDRC_PMC0B_tag;

typedef union DDR_DDRC_PMLCA1_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA1_tag;

typedef union DDR_DDRC_PMLCB1_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB1_tag;

typedef union DDR_DDRC_PMC1_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC1:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC1_tag;

typedef union DDR_DDRC_PMLCA2_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA2_tag;

typedef union DDR_DDRC_PMLCB2_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB2_tag;

typedef union DDR_DDRC_PMC2_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC2:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC2_tag;

typedef union DDR_DDRC_PMLCA3_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA3_tag;

typedef union DDR_DDRC_PMLCB3_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB3_tag;

typedef union DDR_DDRC_PMC3_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC3:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC3_tag;

typedef union DDR_DDRC_PMLCA4_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA4_tag;

typedef union DDR_DDRC_PMLCB4_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB4_tag;

typedef union DDR_DDRC_PMC4_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC4:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC4_tag;

typedef union DDR_DDRC_PMLCA5_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA5_tag;

typedef union DDR_DDRC_PMLCB5_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB5_tag;

typedef union DDR_DDRC_PMC5_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC5:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC5_tag;

typedef union DDR_DDRC_PMLCA6_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA6_tag;

typedef union DDR_DDRC_PMLCB6_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB6_tag;

typedef union DDR_DDRC_PMC6_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC6:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC6_tag;

typedef union DDR_DDRC_PMLCA7_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA7_tag;

typedef union DDR_DDRC_PMLCB7_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB7_tag;

typedef union DDR_DDRC_PMC7_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC7:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC7_tag;

typedef union DDR_DDRC_PMLCA8_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA8_tag;

typedef union DDR_DDRC_PMLCB8_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB8_tag;

typedef union DDR_DDRC_PMC8_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC8:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC8_tag;

typedef union DDR_DDRC_PMLCA9_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA9_tag;

typedef union DDR_DDRC_PMLCB9_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB9_tag;

typedef union DDR_DDRC_PMC9_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC9:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC9_tag;

typedef union DDR_DDRC_PMLCA10_union_tag { /* Performance Monitor Local Control A */
  volatile uint32 R;
  struct {
    volatile uint32 BDIST:6;                 /* Burst Distance */
    volatile uint32 BGRAN:5;                 /* Burst Granularity */
    volatile uint32 BSIZE:5;                 /* Burst Size */
    volatile uint32 EVENT:7;                 /* Event Selector */
    volatile uint32 _unused_6:3;
    volatile uint32 CE:1;                    /* Condition Enable */
    volatile uint32 _unused_1:4;
    volatile uint32 FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA10_tag;

typedef union DDR_DDRC_PMLCB10_union_tag { /* Performance Monitor Local Control B */
  volatile uint32 R;
  struct {
    volatile uint32 THRESHOLD:6;             /* Threshold */
    volatile uint32 _unused_24:2;
    volatile uint32 TBMULT:3;                /* Threshold And Burstiness Multiplier */
    volatile uint32 _unused_16:5;
    volatile uint32 TRIGOFFCNTL:2;           /* Trigger-Off Control */
    volatile uint32 TRIGONCNTL:2;            /* Trigger-On Control */
    volatile uint32 TRIGOFFSEL:4;            /* Trigger-Off Select */
    volatile uint32 _unused_6:2;
    volatile uint32 TRIGONSEL:4;             /* Trigger-On Select */
    volatile uint32 _unused_0:2;
  } B;
} DDR_DDRC_PMLCB10_tag;

typedef union DDR_DDRC_PMC10_union_tag { /* Performance Monitor Counter */
  volatile uint32 R;
  struct {
    volatile uint32 PMC10:32;                /* Event Count */
  } B;
} DDR_DDRC_PMC10_tag;

struct DDR_DDRC_tag {
  DDR_DDRC_CS_BNDS_tag CS_BNDS[2];
  DDR_DDRC_REMAP_EXT_0_tag REMAP_EXT_0; /* Remap Extended Region 0 Configuration */
  DDR_DDRC_REMAP_EXT_1_tag REMAP_EXT_1; /* Remap Extended Region 1 Configuration */
  DDR_DDRC_REMAP_EXT_2_tag REMAP_EXT_2; /* Remap Extended Region 2 Configuration */
  DDR_DDRC_REMAP_EXT_3_tag REMAP_EXT_3; /* Remap Extended Region 3 Configuration */
  DDR_DDRC_REMAP_0A_tag REMAP_0A;      /* Remap Region 0A Configuration */
  DDR_DDRC_REMAP_0B_tag REMAP_0B;      /* Remap Region 0B Configuration */
  DDR_DDRC_REMAP_1A_tag REMAP_1A;      /* Remap Region 1A Configuration */
  DDR_DDRC_REMAP_1B_tag REMAP_1B;      /* Remap Region 1B Configuration */
  DDR_DDRC_REMAP_2A_tag REMAP_2A;      /* Remap Region 2A Configuration */
  DDR_DDRC_REMAP_2B_tag REMAP_2B;      /* Remap Region 2B Configuration */
  DDR_DDRC_REMAP_3A_tag REMAP_3A;      /* Remap Region 3A Configuration */
  DDR_DDRC_REMAP_3B_tag REMAP_3B;      /* Remap Region 3B Configuration */
  DDR_DDRC_DDR_ADDR_DEC_0_tag DDR_ADDR_DEC_0; /* DDRC Address Decode 0 */
  DDR_DDRC_DDR_ADDR_DEC_1_tag DDR_ADDR_DEC_1; /* DDRC Address Decode 1 */
  DDR_DDRC_DDR_ADDR_DEC_2_tag DDR_ADDR_DEC_2; /* DDRC Address Decode 2 */
  DDR_DDRC_DDR_ADDR_DEC_3_tag DDR_ADDR_DEC_3; /* DDRC Address Decode 3 */
  DDR_DDRC_DDR_ADDR_DEC_4_tag DDR_ADDR_DEC_4; /* DDRC Address Decode 4 */
  DDR_DDRC_DDR_ADDR_DEC_5_tag DDR_ADDR_DEC_5; /* DDRC Address Decode 5 */
  DDR_DDRC_DDR_ADDR_DEC_6_tag DDR_ADDR_DEC_6; /* DDRC Address Decode 6 */
  DDR_DDRC_DDR_ADDR_DEC_7_tag DDR_ADDR_DEC_7; /* DDRC Address Decode 7 */
  DDR_DDRC_DDR_ADDR_DEC_8_tag DDR_ADDR_DEC_8; /* DDRC Address Decode 8 */
  DDR_DDRC_DDR_ADDR_DEC_9_tag DDR_ADDR_DEC_9; /* DDRC Address Decode 9 */
  uint8 DDR_DDRC_reserved0[24];
  DDR_DDRC_CS_CONFIG_tag CS_CONFIG[2]; /* Rank 0 Configuration */
  uint8 DDR_DDRC_reserved1[120];
  DDR_DDRC_TIMING_CFG_3_tag TIMING_CFG_3; /* DDR SDRAM Timing Configuration 3 */
  DDR_DDRC_TIMING_CFG_0_tag TIMING_CFG_0; /* DDR SDRAM Timing Configuration 0 */
  DDR_DDRC_TIMING_CFG_1_tag TIMING_CFG_1; /* DDR SDRAM Timing Configuration 1 */
  DDR_DDRC_TIMING_CFG_2_tag TIMING_CFG_2; /* DDR SDRAM Timing Configuration 2 */
  DDR_DDRC_DDR_SDRAM_CFG_tag DDR_SDRAM_CFG; /* DDR SDRAM Control Configuration */
  DDR_DDRC_DDR_SDRAM_CFG_2_tag DDR_SDRAM_CFG_2; /* DDR SDRAM Control Configuration 2 */
  uint8 DDR_DDRC_reserved2[8];
  DDR_DDRC_DDR_SDRAM_MD_CNTL_tag DDR_SDRAM_MD_CNTL; /* DDR SDRAM Mode Control */
  DDR_DDRC_DDR_SDRAM_INTERVAL_tag DDR_SDRAM_INTERVAL; /* DDR SDRAM Interval Configuration */
  DDR_DDRC_DDR_DATA_INIT_tag DDR_DATA_INIT; /* DDR SDRAM Data Initialization */
  uint8 DDR_DDRC_reserved3[52];
  DDR_DDRC_TIMING_CFG_4_tag TIMING_CFG_4; /* DDR SDRAM Timing Configuration 4 */
  DDR_DDRC_TIMING_CFG_5_tag TIMING_CFG_5; /* DDR SDRAM Timing Configuration 5 */
  uint8 DDR_DDRC_reserved4[4];
  DDR_DDRC_TIMING_CFG_7_tag TIMING_CFG_7; /* DDR SDRAM Timing Configuration 7 */
  DDR_DDRC_DDR_ZQ_CNTL_tag DDR_ZQ_CNTL; /* DDR SDRAM ZQ Calibration Control */
  uint8 DDR_DDRC_reserved5[8];
  DDR_DDRC_DDR_SR_CNTR_tag DDR_SR_CNTR; /* DDR SDRAM Self-Refresh Counter */
  uint8 DDR_DDRC_reserved6[208];
  DDR_DDRC_TIMING_CFG_8_tag TIMING_CFG_8; /* DDR SDRAM Timing Configuration 8 */
  DDR_DDRC_TIMING_CFG_9_tag TIMING_CFG_9; /* DDR SDRAM timing configuration 9 */
  DDR_DDRC_TIMING_CFG_10_tag TIMING_CFG_10; /* DDR SDRAM Timing Configuration 10 */
  DDR_DDRC_TIMING_CFG_11_tag TIMING_CFG_11; /* DDR SDRAM Timing Configuration 11 */
  DDR_DDRC_DDR_SDRAM_CFG_3_tag DDR_SDRAM_CFG_3; /* DDR SDRAM Control Configuration 3 */
  DDR_DDRC_DDR_SDRAM_CFG_4_tag DDR_SDRAM_CFG_4; /* DDR SDRAM Control Configuration 4 */
  DDR_DDRC_DDR_SDRAM_CFG_5_tag DDR_SDRAM_CFG_5; /* DDR SDRAM Control Configuration 5 */
  DDR_DDRC_DDR_SDRAM_CFG_6_tag DDR_SDRAM_CFG_6; /* DDR SDRAM Control Configuration 6 */
  DDR_DDRC_DDR_SDRAM_MD_CNTL2_tag DDR_SDRAM_MD_CNTL2; /* DDR SDRAM mode control 2 */
  uint8 DDR_DDRC_reserved7[12];
  DDR_DDRC_DDR_SDRAM_MPR1_tag DDR_SDRAM_MPR1; /* DDR SDRAM multi-purpose register 1 */
  DDR_DDRC_DDR_SDRAM_MPR2_tag DDR_SDRAM_MPR2; /* DDR SDRAM multi-purpose register 2 */
  DDR_DDRC_DDR_SDRAM_MPR3_tag DDR_SDRAM_MPR3; /* DDR SDRAM multi-purpose register 3 */
  DDR_DDRC_DDR_SDRAM_MPR4_tag DDR_SDRAM_MPR4; /* DDR SDRAM multi-purpose register 4 */
  DDR_DDRC_DDR_SDRAM_MPR5_tag DDR_SDRAM_MPR5; /* DDR SDRAM multi-purpose register 5 */
  uint8 DDR_DDRC_reserved8[44];
  DDR_DDRC_DDR_SDRAM_REF_RATE_tag DDR_SDRAM_REF_RATE; /* DDR Refresh Rate */
  uint8 DDR_DDRC_reserved9[60];
  DDR_DDRC_TIMING_CFG_12_tag TIMING_CFG_12; /* DDR SDRAM Timing Configuration 12 */
  DDR_DDRC_TIMING_CFG_13_tag TIMING_CFG_13; /* DDR SDRAM Timing Configuration 13 */
  DDR_DDRC_TIMING_CFG_14_tag TIMING_CFG_14; /* DDR SDRAM Timing Configuration 14 */
  DDR_DDRC_TIMING_CFG_15_tag TIMING_CFG_15; /* DDR SDRAM Timing Configuration 15 */
  DDR_DDRC_TIMING_CFG_16_tag TIMING_CFG_16; /* DDR SDRAM Timing Configuration 16 */
  DDR_DDRC_TIMING_CFG_17_tag TIMING_CFG_17; /* DDR SDRAM Timing Configuration 17 */
  uint8 DDR_DDRC_reserved10[1256];
  DDR_DDRC_TX_CFG_1_tag TX_CFG_1;      /* Transaction Configuration Register 1 */
  DDR_DDRC_TX_CFG_2_tag TX_CFG_2;      /* Transaction Configuration Register 2 */
  DDR_DDRC_TX_CFG_3_tag TX_CFG_3;      /* Transaction Configuration Register 3. */
  DDR_DDRC_TX_CFG_4_tag TX_CFG_4;      /* Transaction Configuration Register 4. */
  uint8 DDR_DDRC_reserved11[788];
  DDR_DDRC_DDRDSR_2_tag DDRDSR_2;      /* DDR SDRAM Debug Status 2 */
  uint8 DDR_DDRC_reserved12[208];
  DDR_DDRC_DDR_IP_REV1_tag DDR_IP_REV1; /* DDRC Revision 1 */
  DDR_DDRC_DDR_IP_REV2_tag DDR_IP_REV2; /* DDRC Revision 2 */
  DDR_DDRC_DDR_EOR_tag DDR_EOR;        /* DDR Enhanced Optimization Register */
  uint8 DDR_DDRC_reserved13[252];
  DDR_DDRC_DDR_MTCR_tag DDR_MTCR;      /* DDR SDRAM Memory Test Control */
  uint8 DDR_DDRC_reserved14[28];
  DDR_DDRC_DDR_MTP_tag DDR_MTP[10];    /* DDR SDRAM Memory Test Pattern n */
  uint8 DDR_DDRC_reserved15[24];
  DDR_DDRC_DDR_MT_ST_EXT_ADDR_tag DDR_MT_ST_EXT_ADDR; /* DDR SDRAM Memory Test Start Extended Address */
  DDR_DDRC_DDR_MT_ST_ADDR_tag DDR_MT_ST_ADDR; /* DDR SDRAM Memory Test Start Address */
  DDR_DDRC_DDR_MT_END_EXT_ADDR_tag DDR_MT_END_EXT_ADDR; /* DDR SDRAM Memory Test End Extended Address */
  DDR_DDRC_DDR_MT_END_ADDR_tag DDR_MT_END_ADDR; /* DDR SDRAM Memory Test End Address */
  DDR_DDRC_DDR_MT_ST_EXT_ADDR2_tag DDR_MT_ST_EXT_ADDR2; /* DDR Memory Test Start Extended Address 2 */
  DDR_DDRC_DDR_MT_ST_ADDR2_tag DDR_MT_ST_ADDR2; /* DDR Memory Test Start Address 2 */
  DDR_DDRC_DDR_MT_END_EXT_ADDR2_tag DDR_MT_END_EXT_ADDR2; /* DDR Memory Test End Extended Address 2 */
  DDR_DDRC_DDR_MT_END_ADDR2_tag DDR_MT_END_ADDR2; /* DDR Memory Test End Address 2 */
  uint8 DDR_DDRC_reserved16[384];
  DDR_DDRC_DEBUG_1_tag DEBUG_1;        /* Debug 1 */
  DDR_DDRC_DEBUG_2_tag DEBUG_2;        /* Debug 2 */
  uint8 DDR_DDRC_reserved17[4];
  DDR_DDRC_DEBUG_4_tag DEBUG_4;        /* Debug 4 */
  uint8 DDR_DDRC_reserved18[56];
  DDR_DDRC_DEBUG_19_tag DEBUG_19;      /* Debug 19 */
  DDR_DDRC_DEBUG_20_tag DEBUG_20;      /* Debug 20 */
  uint8 DDR_DDRC_reserved19[20];
  DDR_DDRC_DEBUG_26_tag DEBUG_26;      /* Debug 26 */
  DDR_DDRC_DEBUG_27_tag DEBUG_27;      /* Debug 27 */
  DDR_DDRC_DEBUG_28_tag DEBUG_28;      /* Debug 28 */
  uint8 DDR_DDRC_reserved20[144];
  DDR_DDRC_ERR_EN_tag ERR_EN;          /* Error Enable */
  uint8 DDR_DDRC_reserved21[252];
  DDR_DDRC_DATA_ERR_INJECT_HI_tag DATA_ERR_INJECT_HI; /* Memory Data Path Error Injection Mask High */
  DDR_DDRC_DATA_ERR_INJECT_LO_tag DATA_ERR_INJECT_LO; /* Memory Data Path Error Injection Mask Low */
  DDR_DDRC_ERR_INJECT_tag ERR_INJECT;  /* Memory Data Path Error Injection Mask ECC */
  DDR_DDRC_ADDR_ERR_INJ_tag ADDR_ERR_INJ; /* Address Error Inject */
  DDR_DDRC_EXT_ADDR_ERR_INJ_tag EXT_ADDR_ERR_INJ; /* Extended Address Error Inject */
  uint8 DDR_DDRC_reserved22[4];
  DDR_DDRC_CAPTURE_EXT_DATA_HI_tag CAPTURE_EXT_DATA_HI; /* Memory Extended Data Path Read Capture High */
  DDR_DDRC_CAPTURE_EXT_DATA_LO_tag CAPTURE_EXT_DATA_LO; /* Memory Extended Data Path Read Capture Low */
  DDR_DDRC_CAPTURE_DATA_HI_tag CAPTURE_DATA_HI; /* Memory Data Path Read Capture High */
  DDR_DDRC_CAPTURE_DATA_LO_tag CAPTURE_DATA_LO; /* Memory Data Path Read Capture Low */
  DDR_DDRC_CAPTURE_ECC_tag CAPTURE_ECC; /* Memory Data Path Read Capture ECC */
  uint8 DDR_DDRC_reserved23[20];
  DDR_DDRC_ERR_DETECT_tag ERR_DETECT;  /* Memory Error Detect */
  DDR_DDRC_ERR_DISABLE_tag ERR_DISABLE; /* Memory Error Disable */
  DDR_DDRC_ERR_INT_EN_tag ERR_INT_EN;  /* Memory Error Interrupt Enable */
  DDR_DDRC_CAPTURE_ATTRIBUTES_tag CAPTURE_ATTRIBUTES; /* Memory Error Attributes Capture */
  DDR_DDRC_CAPTURE_ADDRESS_tag CAPTURE_ADDRESS; /* Memory Error Address Capture */
  DDR_DDRC_CAPTURE_EXT_ADDRESS_tag CAPTURE_EXT_ADDRESS; /* Memory Error Extended Address Capture */
  DDR_DDRC_ERR_SBE_tag ERR_SBE;        /* Single-Bit ECC Memory Error Management */
  uint8 DDR_DDRC_reserved24[180];
  DDR_DDRC_REG_CRC_GRP_1_tag REG_CRC_GRP_1; /* Register CRC Code For Group 1 */
  DDR_DDRC_REG_CRC_GRP_2_tag REG_CRC_GRP_2; /* Register CRC Code For Group 2 */
  uint8 DDR_DDRC_reserved25[8];
  DDR_DDRC_ECC_EXT_REG_0_tag ECC_EXT_REG_0; /* ECC Extended Region 0 Configuration */
  DDR_DDRC_ECC_EXT_REG_1_tag ECC_EXT_REG_1; /* ECC Extended Region 1 Configuration */
  DDR_DDRC_ECC_EXT_REG_2_tag ECC_EXT_REG_2; /* ECC Extended Region 2 Configuration */
  DDR_DDRC_ECC_EXT_REG_3_tag ECC_EXT_REG_3; /* ECC Extended Region 3 Configuration */
  DDR_DDRC_ECC_EXT_REG_4_tag ECC_EXT_REG_4; /* ECC Extended Region 4 Configuration */
  DDR_DDRC_ECC_EXT_REG_5_tag ECC_EXT_REG_5; /* ECC Extended Region 5 Configuration */
  DDR_DDRC_ECC_EXT_REG_6_tag ECC_EXT_REG_6; /* ECC Extended Region 6 Configuration */
  DDR_DDRC_ECC_EXT_REG_7_tag ECC_EXT_REG_7; /* ECC Extended Region 7 Configuration */
  DDR_DDRC_ECC_REG_0_tag ECC_REG_0;    /* ECC Region 0 Configuration */
  DDR_DDRC_ECC_REG_1_tag ECC_REG_1;    /* ECC Region 1 Configuration */
  DDR_DDRC_ECC_REG_2_tag ECC_REG_2;    /* ECC Region 2 Configuration */
  DDR_DDRC_ECC_REG_3_tag ECC_REG_3;    /* ECC Region 3 Configuration */
  DDR_DDRC_ECC_REG_4_tag ECC_REG_4;    /* ECC Region 4 Configuration */
  DDR_DDRC_ECC_REG_5_tag ECC_REG_5;    /* ECC Region 5 Configuration */
  DDR_DDRC_ECC_REG_6_tag ECC_REG_6;    /* ECC Region 6 Configuration */
  DDR_DDRC_ECC_REG_7_tag ECC_REG_7;    /* ECC Region 7 Configuration */
  uint8 DDR_DDRC_reserved26[64352];
  DDR_DDRC_PMCFG_1_tag PMCFG_1;        /* Performance Monitor Configuration 1 */
  DDR_DDRC_PMCFG_2_tag PMCFG_2;        /* Performance Monitor Configuration 2 */
  DDR_DDRC_PMCFG_3_tag PMCFG_3;        /* Performance Monitor Configuration 3 */
  DDR_DDRC_PMCFG_4_tag PMCFG_4;        /* Performance Monitor Configuration 4 */
  DDR_DDRC_PMCFG_5_tag PMCFG_5;        /* Performance Monitor Configuration 5 */
  DDR_DDRC_PMCFG_6_tag PMCFG_6;        /* Performance Monitor Configuration 6 */
  uint8 DDR_DDRC_reserved27[40];
  DDR_DDRC_PMGC0_tag PMGC0;            /* Performance Monitor Global Control */
  uint8 DDR_DDRC_reserved28[12];
  DDR_DDRC_PMLCA0_tag PMLCA0;          /* Performance Monitor Local Control A0 */
  DDR_DDRC_PMLCB0_tag PMLCB0;          /* Performance Monitor Local Control B0 */
  DDR_DDRC_PMC0A_tag PMC0A;            /* PMC 0a */
  DDR_DDRC_PMC0B_tag PMC0B;            /* PMC 0b */
  DDR_DDRC_PMLCA1_tag PMLCA1;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB1_tag PMLCB1;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC1_tag PMC1;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved29[4];
  DDR_DDRC_PMLCA2_tag PMLCA2;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB2_tag PMLCB2;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC2_tag PMC2;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved30[4];
  DDR_DDRC_PMLCA3_tag PMLCA3;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB3_tag PMLCB3;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC3_tag PMC3;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved31[4];
  DDR_DDRC_PMLCA4_tag PMLCA4;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB4_tag PMLCB4;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC4_tag PMC4;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved32[4];
  DDR_DDRC_PMLCA5_tag PMLCA5;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB5_tag PMLCB5;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC5_tag PMC5;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved33[4];
  DDR_DDRC_PMLCA6_tag PMLCA6;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB6_tag PMLCB6;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC6_tag PMC6;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved34[4];
  DDR_DDRC_PMLCA7_tag PMLCA7;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB7_tag PMLCB7;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC7_tag PMC7;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved35[4];
  DDR_DDRC_PMLCA8_tag PMLCA8;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB8_tag PMLCB8;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC8_tag PMC8;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved36[4];
  DDR_DDRC_PMLCA9_tag PMLCA9;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB9_tag PMLCB9;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC9_tag PMC9;              /* Performance Monitor Counter */
  uint8 DDR_DDRC_reserved37[4];
  DDR_DDRC_PMLCA10_tag PMLCA10;        /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB10_tag PMLCB10;        /* Performance Monitor Local Control B */
  DDR_DDRC_PMC10_tag PMC10;            /* Performance Monitor Counter */
};

/* ============================================================================
   =============================== Module: LSTCU ==============================
   ============================================================================ */
typedef union LSTCU_ERR_STAT_union_tag { /* Error Status */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_31:1;
    volatile uint32 INVP_MB:1;               /* Invalid Pointer MBIST */
    volatile uint32 _unused_29:1;
    volatile uint32 _unused_16:13;
    volatile uint32 UFSF:1;                  /* Unrecoverable Fault Status */
    volatile uint32 RFSF:1;                  /* Recoverable Fault Status */
    volatile uint32 _unused_0:14;
  } B;
} LSTCU_ERR_STAT_tag;

typedef union LSTCU_ERR_FM_union_tag { /* Error Fault Mapping */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_31:1;
    volatile uint32 INVPFMMB:1;              /* Invalid BIST Pointer Fault Mapping During MBIST Scheduling */
    volatile uint32 _unused_29:1;
    volatile uint32 _unused_0:29;
  } B;
} LSTCU_ERR_FM_tag;

typedef union LSTCU_MB_RSTAT0_union_tag { /* MBIST Run Status 0 */
  volatile uint32 R;
  struct {
    volatile uint32 MBSTAT0:1;               /* MBIST Run Result Status 0 */
    volatile uint32 _unused_16:15;
    volatile uint32 _unused_0:16;
  } B;
} LSTCU_MB_RSTAT0_tag;

typedef union LSTCU_MBFM0_union_tag { /* MBIST Fault Mapping 0 */
  volatile uint32 R;
  struct {
    volatile uint32 MBSTATFM0:1;             /* MBIST Fault Mapping n */
    volatile uint32 _unused_16:15;
    volatile uint32 _unused_0:16;
  } B;
} LSTCU_MBFM0_tag;

typedef union LSTCU_STAG_union_tag { /* Stagger */
  volatile uint32 R;
  struct {
    volatile uint32 _unused_24:8;
    volatile uint32 MB_DELAY:8;              /* MBIST Delay */
    volatile uint32 _unused_8:8;
    volatile uint32 _unused_0:8;
  } B;
} LSTCU_STAG_tag;

typedef union LSTCU_PH1_DUR_union_tag { /* Phase 1 Duration */
  volatile uint32 R;
  struct {
    volatile uint32 PH1DUR:10;               /* Phase 1 Duration */
    volatile uint32 _unused_0:22;
  } B;
} LSTCU_PH1_DUR_tag;

typedef union LSTCU_MBPTR_union_tag { /* MBIST Scheduler Pointer */
  volatile uint32 R;
  struct {
    volatile uint32 MBPTR:8;                 /* MBIST Pointer */
    volatile uint32 MBCSM:1;                 /* MBIST Mode */
    volatile uint32 _unused_1:22;
    volatile uint32 MBEOL:1;                 /* MBIST End of List */
  } B;
} LSTCU_MBPTR_tag;

struct LSTCU_tag {
  uint8 LSTCU_reserved0[8];
  LSTCU_ERR_STAT_tag ERR_STAT;      /* Error Status */
  uint8 LSTCU_reserved1[4];
  LSTCU_ERR_FM_tag ERR_FM;          /* Error Fault Mapping */
  uint8 LSTCU_reserved2[76];
  LSTCU_MB_RSTAT0_tag MB_RSTAT0;    /* MBIST Run Status 0 */
  uint8 LSTCU_reserved3[284];
  LSTCU_MBFM0_tag MBFM0;            /* MBIST Fault Mapping 0 */
  uint8 LSTCU_reserved4[220];
  LSTCU_STAG_tag STAG;              /* Stagger */
  uint8 LSTCU_reserved5[12];
  LSTCU_PH1_DUR_tag PH1_DUR;        /* Phase 1 Duration */
  uint8 LSTCU_reserved6[140];
  LSTCU_MBPTR_tag MBPTR[1];        /* MBIST Scheduler Pointer */
};

/* ============================================================================
   =============================== Module: M33_MPU ============================
   ============================================================================ */
typedef union SCB_MPU_RBAR_union_tag
{
    volatile uint32 R;
    struct
    {
        volatile uint32 XN : 1;
        volatile uint32 AP : 2;
        volatile uint32 SH : 2;
        volatile uint32 BASE : 27;
    } B;
} SCB_MPU_RBAR_tag;

typedef union SCB_MPU_RLAR_union_tag
{
    volatile uint32 R;
    struct
    {
        volatile uint32 EN : 1;
        volatile uint32 ATTRINDX : 3;
        volatile uint32 PXN : 1;
        volatile uint32 LIMIT : 27;
    } B;
} SCB_MPU_RLAR_tag;

struct SCB_MPU_tag
{
  volatile uint32 MPU_TYPE;     /**< MPU Type Register, offset: 0xD90 */
  volatile uint32 MPU_CTRL;     /**< MPU Control Register, offset: 0xD94 */
  volatile uint32 MPU_RNR;      /**< MPU Region Number Register, offset: 0xD98 */
  SCB_MPU_RBAR_tag MPU_RBAR;    /**< MPU Region Base Address Register, offset: 0xD9C */
  SCB_MPU_RLAR_tag MPU_RLAR;    /**< MPU Region Attribute Select Register, offset: 0xDA0 */
  SCB_MPU_RBAR_tag MPU_RBAR_A1; /**< MPU Region Base Address Register Alias 1, offset: 0xDA4 */
  SCB_MPU_RLAR_tag MPU_RLAR_A1; /**< MPU Region Attribute Select Register Alias 1, offset: 0xDA8 */
  SCB_MPU_RBAR_tag MPU_RBAR_A2; /**< MPU Region Base Address Register Alias 1, offset: 0xDAC */
  SCB_MPU_RLAR_tag MPU_RLAR_A2; /**< MPU Region Attribute Select Register Alias 1, offset: 0xDB0 */
  SCB_MPU_RBAR_tag MPU_RBAR_A3; /**< MPU Region Base Address Register Alias 1, offset: 0xDB4 */
  SCB_MPU_RLAR_tag MPU_RLAR_A3; /**< MPU Region Base Address Register Alias 1, offset: 0xDB8 */
  uint8   RESERVED_4[4U];
  volatile uint32 MPU_MAIR0;                         /**< MPU Memory Attribute Indirection Register 0, offset: 0xDC0 */
  volatile uint32 MPU_MAIR1;                         /**< MPU Memory Attribute Indirection Register 0, offset: 0xDC4 */
};


struct SCB_tag
{
    uint8   RESERVED_0[8];
    volatile uint32 ACTLR;                             /**< Auxiliary Control Register,, offset: 0x8 */
    uint8   RESERVED_1[3316];
    volatile uint32 CPUID;                             /**< CPUID Base Register, offset: 0xD00 */
    volatile uint32 ICSR;                              /**< Interrupt Control and State Register, offset: 0xD04 */
    volatile uint32 VTOR;                              /**< Vector Table Offset Register, offset: 0xD08 */
    volatile uint32 AIRCR;                             /**< Application Interrupt and Reset Control Register, offset: 0xD0C */
    volatile uint32 SCR;                               /**< System Control Register, offset: 0xD10 */
    volatile uint32 CCR;                               /**< Configuration and Control Register, offset: 0xD14 */
    volatile uint32 SHPR1;                             /**< System Handler Priority Register 1, offset: 0xD18 */
    volatile uint32 SHPR2;                             /**< System Handler Priority Register 2, offset: 0xD1C */
    volatile uint32 SHPR3;                             /**< System Handler Priority Register 3, offset: 0xD20 */
    volatile uint32 SHCSR;                             /**< System Handler Control and State Register, offset: 0xD24 */
    union
    {
        volatile uint32 R;
        struct
        {
            volatile uint32 MMFSR : 8;                 /**< MemManage Fault Status Register, offset: 0xD28 */
            volatile uint32 BFSR  : 8;                 /**< BusFault Status Register, offset 0xD29 */
            volatile uint32 UFSR  : 16;                /**< UsageFault Status Register, offset 0xD2A */
        } B;
    } CFSR;                                            /**< Configurable Fault Status Registers, offset: 0xD28 */
    volatile uint32 HFSR;                              /**< HardFault Status register, offset: 0xD2C */
    volatile uint32 DFSR;                              /**< Debug Fault Status Register, offset: 0xD30 */
    volatile uint32 MMFAR;                             /**< MemManage Address Register, offset: 0xD34 */
    volatile uint32 BFAR;                              /**< BusFault Address Register, offset: 0xD38 */
    volatile uint32 AFSR;                              /**< Auxiliary Fault Status Register, offset: 0xD3C */
    uint8   RESERVED_2[72];
    volatile uint32 CPACR;                             /**< Coprocessor Access Control Register, offset: 0xD88 */
    uint8   RESERVED_3[428U];
    volatile uint32 FPCCR;                             /**< Floating-point Context Control Register, offset: 0xF34 */
    volatile uint32 FPCAR;                             /**< Floating-point Context Address Register, offset: 0xF38 */
    volatile uint32 FPDSCR;                            /**< Floating-point Default Status Control Register, offset: 0xF3C */
};

/* ================== FEENV definitions ================== */
typedef struct WAKEUP_ERM_tag ERM_eDMA_tag;
typedef struct NPU_ERM_tag ERM_NPU_SRAM_tag;

/* eDMA_2_TCD Base Addresses */
#define EDMA_2_TCD_BASE_ADDR   (0x42010000UL)
/* TRDC Base Addresses */
#define AON__TRDC_MGR_BASE_ADDR               (0x44270000UL)
#define CAMERA__TRDC_MGR_CAMERAMIX_BASE_ADDR  (0x4AC40000UL)
#define DISPLAY__TRDC_MGR_D_BASE_ADDR         (0x4B040000UL)
#define GPU__TRDC_MGR_GPU_BASE_ADDR           (0x4D840000UL)
#define HSIO__TRDC_MGR_HSIOMIX_BASE_ADDR      (0x4C040000UL)
#define NETC__TRDC_MGRE_BASE_ADDR             (0x4C840000UL)
#define NOC__TRDC_MGRN_BASE_ADDR              (0x49010000UL)
#define VPU__TRDC_MGR_VPU_BASE_ADDR           (0x4C440000UL)
#define WAKEUP__TRDC_MGR_MEGA_BASE_ADDR       (0x42810000UL)
#define WAKEUP__TRDC_MGR_WKUP_BASE_ADDR       (0x42460000UL)

/* TRDC MRC address offsets */
#define AON__TRDC_MGR_MRC_OFFS                (0x00014000UL)
#define CAMERA__TRDC_MGR_CAMERAMIX_MRC_OFFS   (0x00016000UL)
#define DISPLAY__TRDC_MGR_D_MRC_OFFS          (0x00000000UL)
#define GPU__TRDC_MGR_GPU_MRC_OFFS            (0x00012000UL)
#define HSIO__TRDC_MGR_HSIOMIX_MRC_OFFS       (0x00000000UL)
#define NETC__TRDC_MGRE_MRC_OFFS              (0x00000000UL)
#define NOC__TRDC_MGRN_MRC_OFFS               (0x0001A000UL)
#define VPU__TRDC_MGR_VPU_MRC_OFFS            (0x00000000UL)
#define WAKEUP__TRDC_MGR_MEGA_MRC_OFFS        (0x00000000UL)
#define WAKEUP__TRDC_MGR_WKUP_MRC_OFFS        (0x00016000UL)

#define AON__INTM (*(volatile struct AON_INTM_tag *) 0x44580000UL)
#define AON__M33_CACHE_CTRLPC (*(volatile struct AON_M33_CACHE_CTRL_tag *) 0x44400000UL)
#define AON__M33_CACHE_CTRLPS (*(volatile struct AON_M33_CACHE_CTRL_tag *) 0x44400800UL)
#define AON__MCM (*(volatile struct AON_MCM_tag *) 0xE0080000UL)
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM (*(volatile struct CACHE_ECC_MCM_tag *) 0x44401000UL)
#define NOC__GPV__ALWAYS_ON_MAIN_RESILIENCEFAULTCONTROLLER (*(volatile struct FLEXNOC_RSLNC_tag *) 0x49063080UL)
#define WAKEUP__GPV_NOCM__POWER_MEGA_RESILIENCEFAULTCONTROLLER (*(volatile struct FLEXNOC_RSLNC_tag *) 0x42830000UL)
#define WAKEUP__GPV_NOC__POWER_MAIN_RESILIENCEFAULTCONTROLLER (*(volatile struct FLEXNOC_RSLNC_tag *) 0x43900000UL)

/* CMU */
#define CMU_ANA (*(volatile struct CMU_tag *) 0x44670000UL)
#define CMU_A1 (*(volatile struct CMU_tag *) 0x44540000UL)
#define CMU_A2 (*(volatile struct CMU_tag *) 0x44650000UL)
#define CMU_D1 (*(volatile struct CMU_tag *) 0x4E060000UL)
#define CMU_D2 (*(volatile struct CMU_tag *) 0x4E070000UL)
#define CMU_N1 (*(volatile struct CMU_tag *) 0x49070000UL)
#define CMU_N2 (*(volatile struct CMU_tag *) 0x49080000UL)
#define CMU_W1 (*(volatile struct CMU_tag *) 0x42750000UL)
#define CMU_W2 (*(volatile struct CMU_tag *) 0x427A0000UL)

/* DDRC */
#define DDRC (*(volatile struct DDR_DDRC_tag *) 0x4E080000UL)

/* eDMA */
#define WAKEUP__EDMA5_MP2 (*(volatile struct WAKEUP_EDMA5_MP_tag *) 0x42000000UL)
#define WAKEUP__EDMA5_TCD2 (*(volatile struct WAKEUP_EDMA5_TCD_tag *) EDMA_2_TCD_BASE_ADDR)

/* ERM */
#define AON_ERMA (*(volatile struct AON_ERMA_tag *) 0x44560000UL)
#define WAKEUP_ERMW (*(volatile struct WAKEUP_ERM_tag *) 0x42790000UL)
#define NPU_ERM_NPUMIX (*(volatile struct NPU_ERM_tag *) 0x4A870000UL)

/* LSTCU */
#define AON_LSTCUA (*(volatile struct LSTCU_tag *) 0x445A0000UL)
#define DDRC_LSTCU (*(volatile struct LSTCU_tag *) 0x4E050000UL)
#define M7_LSTCU_M7MIX (*(volatile struct LSTCU_tag *) 0x4A050000UL)
#define NOC_LSTCUN (*(volatile struct LSTCU_tag *) 0x490B0000UL)
#define NPU_LSTCU_NPUMIX (*(volatile struct LSTCU_tag *) 0x4A850000UL)

/* MPU */
#define M33_MPU (*(volatile struct SCB_MPU_tag *) 0xE000ED90UL)

/* VFCCU */
#define AON_VFCCU (*(volatile struct SAFETYBASE_VFCCU_tag *) 0x44570000UL)

/* SRAMCTL */
#define OCRAM_BASE_ADDR (0x20480000UL)
#define OCRAM_SIZE (0x00060000UL)
#define NOC_SRAMCTL (*(volatile struct SRAMCTL_tag *) 0x490A0000UL)

/* TRDC (CFG, DERR, MDA, MBC) */
#define AON_TRDC (*(volatile struct TRDC_tag *) AON__TRDC_MGR_BASE_ADDR)
#define CAMERA_TRDC (*(volatile struct TRDC_tag *) CAMERA__TRDC_MGR_CAMERAMIX_BASE_ADDR)
#define DISPLAY_TRDC (*(volatile struct TRDC_tag *) DISPLAY__TRDC_MGR_D_BASE_ADDR)
#define GPU_TRDC (*(volatile struct TRDC_tag *) GPU__TRDC_MGR_GPU_BASE_ADDR)
#define HSIO_TRDC (*(volatile struct TRDC_tag *) HSIO__TRDC_MGR_HSIOMIX_BASE_ADDR)
#define NETC_TRDC (*(volatile struct TRDC_tag *) NETC__TRDC_MGRE_BASE_ADDR)
#define NOC_TRDC (*(volatile struct TRDC_tag *) NOC__TRDC_MGRN_BASE_ADDR)
#define VPU_TRDC (*(volatile struct TRDC_tag *) VPU__TRDC_MGR_VPU_BASE_ADDR)
#define WAKEUP_TRDC (*(volatile struct TRDC_tag *) WAKEUP__TRDC_MGR_WKUP_BASE_ADDR)
#define WAKEUP_MEGA_TRDC (*(volatile struct TRDC_tag *) WAKEUP__TRDC_MGR_MEGA_BASE_ADDR)

/* TRDC (MRC) */
#define AON_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (AON__TRDC_MGR_BASE_ADDR + AON__TRDC_MGR_MRC_OFFS))
#define CAMERA_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (CAMERA__TRDC_MGR_CAMERAMIX_BASE_ADDR + CAMERA__TRDC_MGR_CAMERAMIX_MRC_OFFS))
#define DISPLAY_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (DISPLAY__TRDC_MGR_D_BASE_ADDR + DISPLAY__TRDC_MGR_D_MRC_OFFS))
#define GPU_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (GPU__TRDC_MGR_GPU_BASE_ADDR + GPU__TRDC_MGR_GPU_MRC_OFFS))
#define HSIO_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (HSIO__TRDC_MGR_HSIOMIX_BASE_ADDR + HSIO__TRDC_MGR_HSIOMIX_MRC_OFFS))
#define NETC_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (NETC__TRDC_MGRE_BASE_ADDR + NETC__TRDC_MGRE_MRC_OFFS))
#define NOC_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (NOC__TRDC_MGRN_BASE_ADDR + NOC__TRDC_MGRN_MRC_OFFS))
#define VPU_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (VPU__TRDC_MGR_VPU_BASE_ADDR + VPU__TRDC_MGR_VPU_MRC_OFFS))
#define WAKEUP_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (WAKEUP__TRDC_MGR_WKUP_BASE_ADDR + WAKEUP__TRDC_MGR_WKUP_MRC_OFFS))
#define WAKEUP_MEGA_TRDC_MRC (*(volatile struct TRDC_MRC_tag *) (WAKEUP__TRDC_MGR_MEGA_BASE_ADDR + WAKEUP__TRDC_MGR_MEGA_MRC_OFFS))


/* ================== Common definitions ================== */
#define M7__A7_MCM (*(volatile struct M7_A7_MCM_tag *) 0x4A0A0000UL)
#define CMU_M1 (*(volatile struct CMU_tag *) 0x4A080000UL)
#define CMU_M2 (*(volatile struct CMU_tag *) 0x4A090000UL)

/* EIM */
#define AON_EIMA (*(volatile struct EIM_tag *) 0x44550000UL)
#define WAKEUP_EIMW (*(volatile struct EIM_tag *) 0x42780000UL)
#define NOC_EIMN (*(volatile struct EIM_tag *) 0x49270000UL)
#define M7_EIM (*(volatile struct EIM_tag *) 0x4A060000UL)
#define NPU_EIM_NPUMIX (*(volatile struct EIM_tag *) 0x4A860000UL)

/* SCB */
#define SCB (*(volatile struct SCB_tag *) 0xE000E000UL)

/* SYS_TICK */
#define SYS_TICK (*(volatile struct SYS_TICK_tag *) 0xE000E010UL)

#endif /* SAFETY_BASE_MIMX95XX */

#ifdef __MWERKS__
#pragma pop
#endif
#ifdef __ghs__
#pragma ghs endnowarning
#endif
#ifdef __GNUC__
#pragma GCC diagnostic pop
#pragma pack(pop)
#endif
#ifdef  __cplusplus
}
#endif
#endif /* ifdef _SafetyBase_MIMX95XX_SAF_H_ */
