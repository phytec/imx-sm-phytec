/**************************************************************************
 * FILE NAME: SafetyBase_MIMX94XXX_SAF.h                                  *
 * REVISION:  1.0                                                         *
 *                                                                        *
 * DESCRIPTION:                                                           *
 * This file contains all of the register and bit field definitions for   *
 * the ip_params_top.                                                     *
 *========================================================================*
 * UPDATE HISTORY                                                         *
 * REV     AUTHOR     DATE          DESCRIPTION OF CHANGE                 *
 * 0       nxf85804   07-May-2024   Initial revision                      *
 *                                                                        *
 *========================================================================*
 * Copyright 2025 NXP                                                     *
 * Detailed license terms of software usage can be found in the           *
 * license.txt file located in the root folder of this package.           *
 *                                                                        *
 **************************************************************************/
/**************************************************************************
 * Example register & bit field write:                                    *
 *                                                                        *
 *  <MODULE>.<REGISTER>.B.<BIT> = 1;                                      *
 *  <MODULE>.<REGISTER>.R       = 0x10000000;                             *
 *                                                                        *
 **************************************************************************/

#ifndef _SafetyBase_MIMX94XX_SAF_H_
#define _SafetyBase_MIMX94XX_SAF_H_
#include "typedefs.h"
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

#if defined(SAFETY_BASE_MIMX94XX)
/* ============================================================================
   =============================== Module: AON_FCCU ===========================
   ============================================================================ */

typedef union AON_FCCU_GRKNTIMC_union_tag { /* Global Reaction Timer Period */
  vuint32_t R;
  struct {
    vuint32_t RKTIMCFG:32;             /* Reaction Timer Period */
  } B;
} AON_FCCU_GRKNTIMC_tag;

typedef union AON_FCCU_GFLTRC_C0_union_tag { /* Global Fault Recovery */
  vuint32_t R;
  struct {
    vuint32_t RHWSW0:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW1:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW2:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW3:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW4:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW5:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW6:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW7:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW8:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW9:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW10:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW11:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW12:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW13:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW14:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW15:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW16:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW17:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW18:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW19:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW20:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW21:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW22:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW23:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW24:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW25:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW26:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW27:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW28:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW29:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW30:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW31:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} AON_FCCU_GFLTRC_C0_tag;

typedef union AON_FCCU_GFLTRC_C1_union_tag { /* Global Fault Recovery */
  vuint32_t R;
  struct {
    vuint32_t RHWSW32:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW33:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW34:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW35:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW36:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW37:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW38:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW39:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW40:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW41:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW42:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW43:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW44:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW45:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW46:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW47:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW48:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW49:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW50:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW51:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW52:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW53:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW54:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW55:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW56:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW57:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW58:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW59:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW60:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW61:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW62:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW63:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} AON_FCCU_GFLTRC_C1_tag;

typedef union AON_FCCU_GFLTRC_C2_union_tag { /* Global Fault Recovery */
  vuint32_t R;
  struct {
    vuint32_t RHWSW64:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW65:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW66:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW67:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW68:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW69:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW70:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW71:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW72:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW73:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW74:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW75:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW76:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW77:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW78:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW79:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW80:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW81:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW82:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW83:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW84:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW85:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW86:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW87:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW88:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW89:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW90:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW91:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW92:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW93:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW94:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW95:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} AON_FCCU_GFLTRC_C2_tag;

typedef union AON_FCCU_GFLTRC_C3_union_tag { /* Global Fault Recovery */
  vuint32_t R;
  struct {
    vuint32_t RHWSW96:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW97:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW98:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW99:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW100:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW101:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW102:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW103:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW104:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW105:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW106:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW107:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW108:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW109:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW110:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW111:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW112:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW113:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW114:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW115:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW116:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW117:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW118:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW119:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW120:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW121:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW122:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW123:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW124:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW125:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW126:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW127:1;              /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} AON_FCCU_GFLTRC_C3_tag;

typedef union AON_FCCU_GFLTOVDC0_union_tag { /* Global Fault Overflow Detection */
  vuint32_t R;
  struct {
    vuint32_t OVF_DIS0:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS1:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS2:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS3:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS4:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS5:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS6:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS7:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS8:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS9:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS10:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS11:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS12:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS13:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS14:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS15:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS16:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS17:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS18:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS19:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS20:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS21:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS22:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS23:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS24:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS25:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS26:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS27:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS28:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS29:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS30:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS31:1;             /* Fault Overflow Detection Disable */
  } B;
} AON_FCCU_GFLTOVDC0_tag;

typedef union AON_FCCU_GFLTOVDC1_union_tag { /* Global Fault Overflow Detection */
  vuint32_t R;
  struct {
    vuint32_t OVF_DIS32:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS33:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS34:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS35:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS36:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS37:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS38:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS39:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS40:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS41:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS42:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS43:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS44:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS45:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS46:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS47:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS48:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS49:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS50:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS51:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS52:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS53:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS54:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS55:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS56:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS57:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS58:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS59:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS60:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS61:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS62:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS63:1;             /* Fault Overflow Detection Disable */
  } B;
} AON_FCCU_GFLTOVDC1_tag;

typedef union AON_FCCU_GFLTOVDC2_union_tag { /* Global Fault Overflow Detection */
  vuint32_t R;
  struct {
    vuint32_t OVF_DIS64:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS65:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS66:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS67:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS68:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS69:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS70:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS71:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS72:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS73:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS74:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS75:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS76:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS77:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS78:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS79:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS80:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS81:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS82:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS83:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS84:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS85:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS86:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS87:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS88:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS89:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS90:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS91:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS92:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS93:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS94:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS95:1;             /* Fault Overflow Detection Disable */
  } B;
} AON_FCCU_GFLTOVDC2_tag;

typedef union AON_FCCU_GFLTOVDC3_union_tag { /* Global Fault Overflow Detection */
  vuint32_t R;
  struct {
    vuint32_t OVF_DIS96:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS97:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS98:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS99:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS100:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS101:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS102:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS103:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS104:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS105:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS106:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS107:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS108:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS109:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS110:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS111:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS112:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS113:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS114:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS115:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS116:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS117:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS118:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS119:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS120:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS121:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS122:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS123:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS124:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS125:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS126:1;            /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS127:1;            /* Fault Overflow Detection Disable */
  } B;
} AON_FCCU_GFLTOVDC3_tag;

typedef union AON_FCCU_GRKNTIMS_union_tag { /* Global Reaction Timer Status */
  vuint32_t R;
  struct {
    vuint32_t RKTIMVAL:32;             /* Current Reaction Timer */
  } B;
} AON_FCCU_GRKNTIMS_tag;

typedef union AON_FCCU_GCTRL_union_tag { /* Global Space Control */
  vuint32_t R;
  struct {
    vuint32_t OVF_EN:1;                /* Overflow Enable */
    vuint32_t _unused_0:31;
  } B;
} AON_FCCU_GCTRL_tag;

typedef union AON_FCCU_GINTOVFS_union_tag { /* Global DID FSM Status */
  vuint32_t R;
  struct {
    vuint32_t FSMSTATE:2;              /* FSM State */
    vuint32_t _unused_25:5;
    vuint32_t FLTSERV:1;               /* Fault Serve */
    vuint32_t OVF_DET:1;               /* Overflow Detect */
    vuint32_t _unused_21:2;
    vuint32_t _unused_16:5;
    vuint32_t SERV_DID:4;              /* Domain Being Serviced */
    vuint32_t _unused_8:4;
    vuint32_t OVF_DID:4;               /* Overflow DID */
    vuint32_t _unused_0:4;
  } B;
} AON_FCCU_GINTOVFS_tag;

typedef union AON_FCCU_GOVFRKC_union_tag { /* Global Overflow Reaction */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_GOVFRKC_tag;

typedef union AON_FCCU_GMEOUTDC_union_tag { /* Global Minimum EOUT Duration */
  vuint32_t R;
  struct {
    vuint32_t EOUTMIND:32;             /* EOUT Minimum Duration */
  } B;
} AON_FCCU_GMEOUTDC_tag;

typedef union AON_FCCU_GEOUTTCT_union_tag { /* Global EOUT Timer Disable */
  vuint32_t R;
  struct {
    vuint32_t TMRDIS0:1;               /* Timer Disable */
    vuint32_t TMRDIS1:1;               /* Timer Disable */
    vuint32_t _unused_0:30;
  } B;
} AON_FCCU_GEOUTTCT_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTPNC_union_tag { /* Global EOUT Pin */
  vuint32_t R;
  struct {
    vuint32_t OBE_VALID:1;             /* Output Buffer Enable Valid */
    vuint32_t OBE_STAT:1;              /* Output Buffer Enable Status */
    vuint32_t _unused_29:1;
    vuint32_t DO_STAT:1;               /* Data Output Status */
    vuint32_t VAL_CTRL:2;              /* Invert Output */
    vuint32_t _unused_24:2;
    vuint32_t IBE:1;                   /* Input Buffer Enable */
    vuint32_t IND_STAT:1;              /* Input Data From Pad */
    vuint32_t INV_IP:1;                /* Invert Input */
    vuint32_t _unused_16:5;
    vuint32_t SOC_PAD_CTRL0:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL1:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL2:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL3:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL4:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL5:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL6:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL7:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL8:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL9:1;         /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL10:1;        /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL11:1;        /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL12:1;        /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL13:1;        /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL14:1;        /* SoC Pad Control */
    vuint32_t SOC_PAD_CTRL15:1;        /* SoC Pad Control */
  } B;
} AON_FCCU_GLB_EOUT_GEOUTPNC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTPMC_union_tag { /* Global EOUT Pin Map */
  vuint32_t R;
  struct {
    vuint32_t SPLENB0:1;               /* Special Enable Pins */
    vuint32_t SPLENB1:1;               /* Special Enable Pins */
    vuint32_t SPLENB2:1;               /* Special Enable Pins */
    vuint32_t SPLENB3:1;               /* Special Enable Pins */
    vuint32_t _unused_0:28;
  } B;
} AON_FCCU_GLB_EOUT_GEOUTPMC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTMC_union_tag { /* Global EOUT Mode */
  vuint32_t R;
  struct {
    vuint32_t EOUTM:3;                 /* EOUT Pin Mode */
    vuint32_t INV:1;                   /* Invert EOUT */
    vuint32_t _unused_0:28;
  } B;
} AON_FCCU_GLB_EOUT_GEOUTMC_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTTMS_union_tag { /* Global EOUT Timer Status */
  vuint32_t R;
  struct {
    vuint32_t EOUTDVAL:32;             /* EOUT (minimum duration timer) Timer Current Value */
  } B;
} AON_FCCU_GLB_EOUT_GEOUTTMS_tag;

typedef union AON_FCCU_GLB_EOUT_GEOUTDIC_union_tag { /* Global EOUT DID */
  vuint32_t R;
  struct {
    vuint32_t DID_EOUT:4;              /* DID for Fault on EOUT */
    vuint32_t _unused_0:28;
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
  vuint32_t R;
  struct {
    vuint32_t DEBUG_EN:1;              /* Debug Enable */
    vuint32_t _unused_16:15;
    vuint32_t FRZ:1;                   /* Freeze On First Fault */
    vuint32_t _unused_0:15;
  } B;
} AON_FCCU_GDBGCFG_tag;

typedef union AON_FCCU_GDBGSTAT_union_tag { /* Global Debug Status */
  vuint32_t R;
  struct {
    vuint32_t FLTIND:8;                /* Fault Index */
    vuint32_t _unused_2:22;
    vuint32_t _unused_0:2;
  } B;
} AON_FCCU_GDBGSTAT_tag;

typedef union AON_FCCU_GDPFSTAT_union_tag { /* Global Debug Pending Fault Status */
  vuint32_t R;
  struct {
    vuint32_t PENDFLT0:1;              /* Pending Fault Status for corresponding EOUT pin */
    vuint32_t PENDFLT1:1;              /* Pending Fault Status for corresponding EOUT pin */
    vuint32_t _unused_0:30;
  } B;
} AON_FCCU_GDPFSTAT_tag;

typedef union AON_FCCU_GDALTRLD_union_tag { /* Global Debug Alternate Reload Status */
  vuint32_t R;
  struct {
    vuint32_t ALTRLD0:1;               /* Alternate timer reload status for corresponding EOUT pin */
    vuint32_t ALTRLD1:1;               /* Alternate timer reload status for corresponding EOUT pin */
    vuint32_t _unused_0:30;
  } B;
} AON_FCCU_GDALTRLD_tag;

typedef union AON_FCCU_FHCFG0_union_tag { /* Fault Handler */
  vuint32_t R;
  struct {
    vuint32_t FHIDEN:1;                /* Fault Handler Enable */
    vuint32_t _unused_0:31;
  } B;
} AON_FCCU_FHCFG0_tag;

typedef union AON_FCCU_FHSRVDS0_union_tag { /* Fault Handler Status */
  vuint32_t R;
  struct {
    vuint32_t SERV_DID:4;              /* DID Being Serviced */
    vuint32_t _unused_24:4;
    vuint32_t AGGFLTS:1;               /* Aggregated Fault Status */
    vuint32_t _unused_0:23;
  } B;
} AON_FCCU_FHSRVDS0_tag;

typedef union AON_FCCU_FHFLTENC0_0_union_tag { /* Fault Enable */
  vuint32_t R;
  struct {
    vuint32_t EN0:1;                   /* Fault Enable */
    vuint32_t EN1:1;                   /* Fault Enable */
    vuint32_t EN2:1;                   /* Fault Enable */
    vuint32_t EN3:1;                   /* Fault Enable */
    vuint32_t EN4:1;                   /* Fault Enable */
    vuint32_t EN5:1;                   /* Fault Enable */
    vuint32_t EN6:1;                   /* Fault Enable */
    vuint32_t EN7:1;                   /* Fault Enable */
    vuint32_t EN8:1;                   /* Fault Enable */
    vuint32_t EN9:1;                   /* Fault Enable */
    vuint32_t EN10:1;                  /* Fault Enable */
    vuint32_t EN11:1;                  /* Fault Enable */
    vuint32_t EN12:1;                  /* Fault Enable */
    vuint32_t EN13:1;                  /* Fault Enable */
    vuint32_t EN14:1;                  /* Fault Enable */
    vuint32_t EN15:1;                  /* Fault Enable */
    vuint32_t EN16:1;                  /* Fault Enable */
    vuint32_t EN17:1;                  /* Fault Enable */
    vuint32_t EN18:1;                  /* Fault Enable */
    vuint32_t EN19:1;                  /* Fault Enable */
    vuint32_t EN20:1;                  /* Fault Enable */
    vuint32_t EN21:1;                  /* Fault Enable */
    vuint32_t EN22:1;                  /* Fault Enable */
    vuint32_t EN23:1;                  /* Fault Enable */
    vuint32_t EN24:1;                  /* Fault Enable */
    vuint32_t EN25:1;                  /* Fault Enable */
    vuint32_t EN26:1;                  /* Fault Enable */
    vuint32_t EN27:1;                  /* Fault Enable */
    vuint32_t EN28:1;                  /* Fault Enable */
    vuint32_t EN29:1;                  /* Fault Enable */
    vuint32_t EN30:1;                  /* Fault Enable */
    vuint32_t EN31:1;                  /* Fault Enable */
  } B;
} AON_FCCU_FHFLTENC0_0_tag;

typedef union AON_FCCU_FHFLTENC0_1_union_tag { /* Fault Enable */
  vuint32_t R;
  struct {
    vuint32_t EN32:1;                  /* Fault Enable */
    vuint32_t EN33:1;                  /* Fault Enable */
    vuint32_t EN34:1;                  /* Fault Enable */
    vuint32_t EN35:1;                  /* Fault Enable */
    vuint32_t EN36:1;                  /* Fault Enable */
    vuint32_t EN37:1;                  /* Fault Enable */
    vuint32_t EN38:1;                  /* Fault Enable */
    vuint32_t EN39:1;                  /* Fault Enable */
    vuint32_t EN40:1;                  /* Fault Enable */
    vuint32_t EN41:1;                  /* Fault Enable */
    vuint32_t EN42:1;                  /* Fault Enable */
    vuint32_t EN43:1;                  /* Fault Enable */
    vuint32_t EN44:1;                  /* Fault Enable */
    vuint32_t EN45:1;                  /* Fault Enable */
    vuint32_t EN46:1;                  /* Fault Enable */
    vuint32_t EN47:1;                  /* Fault Enable */
    vuint32_t EN48:1;                  /* Fault Enable */
    vuint32_t EN49:1;                  /* Fault Enable */
    vuint32_t EN50:1;                  /* Fault Enable */
    vuint32_t EN51:1;                  /* Fault Enable */
    vuint32_t EN52:1;                  /* Fault Enable */
    vuint32_t EN53:1;                  /* Fault Enable */
    vuint32_t EN54:1;                  /* Fault Enable */
    vuint32_t EN55:1;                  /* Fault Enable */
    vuint32_t EN56:1;                  /* Fault Enable */
    vuint32_t EN57:1;                  /* Fault Enable */
    vuint32_t EN58:1;                  /* Fault Enable */
    vuint32_t EN59:1;                  /* Fault Enable */
    vuint32_t EN60:1;                  /* Fault Enable */
    vuint32_t EN61:1;                  /* Fault Enable */
    vuint32_t EN62:1;                  /* Fault Enable */
    vuint32_t EN63:1;                  /* Fault Enable */
  } B;
} AON_FCCU_FHFLTENC0_1_tag;

typedef union AON_FCCU_FHFLTENC0_2_union_tag { /* Fault Enable */
  vuint32_t R;
  struct {
    vuint32_t EN64:1;                  /* Fault Enable */
    vuint32_t EN65:1;                  /* Fault Enable */
    vuint32_t EN66:1;                  /* Fault Enable */
    vuint32_t EN67:1;                  /* Fault Enable */
    vuint32_t EN68:1;                  /* Fault Enable */
    vuint32_t EN69:1;                  /* Fault Enable */
    vuint32_t EN70:1;                  /* Fault Enable */
    vuint32_t EN71:1;                  /* Fault Enable */
    vuint32_t EN72:1;                  /* Fault Enable */
    vuint32_t EN73:1;                  /* Fault Enable */
    vuint32_t EN74:1;                  /* Fault Enable */
    vuint32_t EN75:1;                  /* Fault Enable */
    vuint32_t EN76:1;                  /* Fault Enable */
    vuint32_t EN77:1;                  /* Fault Enable */
    vuint32_t EN78:1;                  /* Fault Enable */
    vuint32_t EN79:1;                  /* Fault Enable */
    vuint32_t EN80:1;                  /* Fault Enable */
    vuint32_t EN81:1;                  /* Fault Enable */
    vuint32_t EN82:1;                  /* Fault Enable */
    vuint32_t EN83:1;                  /* Fault Enable */
    vuint32_t EN84:1;                  /* Fault Enable */
    vuint32_t EN85:1;                  /* Fault Enable */
    vuint32_t EN86:1;                  /* Fault Enable */
    vuint32_t EN87:1;                  /* Fault Enable */
    vuint32_t EN88:1;                  /* Fault Enable */
    vuint32_t EN89:1;                  /* Fault Enable */
    vuint32_t EN90:1;                  /* Fault Enable */
    vuint32_t EN91:1;                  /* Fault Enable */
    vuint32_t EN92:1;                  /* Fault Enable */
    vuint32_t EN93:1;                  /* Fault Enable */
    vuint32_t EN94:1;                  /* Fault Enable */
    vuint32_t EN95:1;                  /* Fault Enable */
  } B;
} AON_FCCU_FHFLTENC0_2_tag;

typedef union AON_FCCU_FHFLTENC0_3_union_tag { /* Fault Enable */
  vuint32_t R;
  struct {
    vuint32_t EN96:1;                  /* Fault Enable */
    vuint32_t EN97:1;                  /* Fault Enable */
    vuint32_t EN98:1;                  /* Fault Enable */
    vuint32_t EN99:1;                  /* Fault Enable */
    vuint32_t EN100:1;                 /* Fault Enable */
    vuint32_t EN101:1;                 /* Fault Enable */
    vuint32_t EN102:1;                 /* Fault Enable */
    vuint32_t EN103:1;                 /* Fault Enable */
    vuint32_t EN104:1;                 /* Fault Enable */
    vuint32_t EN105:1;                 /* Fault Enable */
    vuint32_t EN106:1;                 /* Fault Enable */
    vuint32_t EN107:1;                 /* Fault Enable */
    vuint32_t EN108:1;                 /* Fault Enable */
    vuint32_t EN109:1;                 /* Fault Enable */
    vuint32_t EN110:1;                 /* Fault Enable */
    vuint32_t EN111:1;                 /* Fault Enable */
    vuint32_t EN112:1;                 /* Fault Enable */
    vuint32_t EN113:1;                 /* Fault Enable */
    vuint32_t EN114:1;                 /* Fault Enable */
    vuint32_t EN115:1;                 /* Fault Enable */
    vuint32_t EN116:1;                 /* Fault Enable */
    vuint32_t EN117:1;                 /* Fault Enable */
    vuint32_t EN118:1;                 /* Fault Enable */
    vuint32_t EN119:1;                 /* Fault Enable */
    vuint32_t EN120:1;                 /* Fault Enable */
    vuint32_t EN121:1;                 /* Fault Enable */
    vuint32_t EN122:1;                 /* Fault Enable */
    vuint32_t EN123:1;                 /* Fault Enable */
    vuint32_t EN124:1;                 /* Fault Enable */
    vuint32_t EN125:1;                 /* Fault Enable */
    vuint32_t EN126:1;                 /* Fault Enable */
    vuint32_t EN127:1;                 /* Fault Enable */
  } B;
} AON_FCCU_FHFLTENC0_3_tag;

typedef union AON_FCCU_FHFLTS0_0_union_tag { /* Fault Status */
  vuint32_t R;
  struct {
    vuint32_t STAT0:1;                 /* Fault Status */
    vuint32_t STAT1:1;                 /* Fault Status */
    vuint32_t STAT2:1;                 /* Fault Status */
    vuint32_t STAT3:1;                 /* Fault Status */
    vuint32_t STAT4:1;                 /* Fault Status */
    vuint32_t STAT5:1;                 /* Fault Status */
    vuint32_t STAT6:1;                 /* Fault Status */
    vuint32_t STAT7:1;                 /* Fault Status */
    vuint32_t STAT8:1;                 /* Fault Status */
    vuint32_t STAT9:1;                 /* Fault Status */
    vuint32_t STAT10:1;                /* Fault Status */
    vuint32_t STAT11:1;                /* Fault Status */
    vuint32_t STAT12:1;                /* Fault Status */
    vuint32_t STAT13:1;                /* Fault Status */
    vuint32_t STAT14:1;                /* Fault Status */
    vuint32_t STAT15:1;                /* Fault Status */
    vuint32_t STAT16:1;                /* Fault Status */
    vuint32_t STAT17:1;                /* Fault Status */
    vuint32_t STAT18:1;                /* Fault Status */
    vuint32_t STAT19:1;                /* Fault Status */
    vuint32_t STAT20:1;                /* Fault Status */
    vuint32_t STAT21:1;                /* Fault Status */
    vuint32_t STAT22:1;                /* Fault Status */
    vuint32_t STAT23:1;                /* Fault Status */
    vuint32_t STAT24:1;                /* Fault Status */
    vuint32_t STAT25:1;                /* Fault Status */
    vuint32_t STAT26:1;                /* Fault Status */
    vuint32_t STAT27:1;                /* Fault Status */
    vuint32_t STAT28:1;                /* Fault Status */
    vuint32_t STAT29:1;                /* Fault Status */
    vuint32_t STAT30:1;                /* Fault Status */
    vuint32_t STAT31:1;                /* Fault Status */
  } B;
} AON_FCCU_FHFLTS0_0_tag;

typedef union AON_FCCU_FHFLTS0_1_union_tag { /* Fault Status */
  vuint32_t R;
  struct {
    vuint32_t STAT32:1;                /* Fault Status */
    vuint32_t STAT33:1;                /* Fault Status */
    vuint32_t STAT34:1;                /* Fault Status */
    vuint32_t STAT35:1;                /* Fault Status */
    vuint32_t STAT36:1;                /* Fault Status */
    vuint32_t STAT37:1;                /* Fault Status */
    vuint32_t STAT38:1;                /* Fault Status */
    vuint32_t STAT39:1;                /* Fault Status */
    vuint32_t STAT40:1;                /* Fault Status */
    vuint32_t STAT41:1;                /* Fault Status */
    vuint32_t STAT42:1;                /* Fault Status */
    vuint32_t STAT43:1;                /* Fault Status */
    vuint32_t STAT44:1;                /* Fault Status */
    vuint32_t STAT45:1;                /* Fault Status */
    vuint32_t STAT46:1;                /* Fault Status */
    vuint32_t STAT47:1;                /* Fault Status */
    vuint32_t STAT48:1;                /* Fault Status */
    vuint32_t STAT49:1;                /* Fault Status */
    vuint32_t STAT50:1;                /* Fault Status */
    vuint32_t STAT51:1;                /* Fault Status */
    vuint32_t STAT52:1;                /* Fault Status */
    vuint32_t STAT53:1;                /* Fault Status */
    vuint32_t STAT54:1;                /* Fault Status */
    vuint32_t STAT55:1;                /* Fault Status */
    vuint32_t STAT56:1;                /* Fault Status */
    vuint32_t STAT57:1;                /* Fault Status */
    vuint32_t STAT58:1;                /* Fault Status */
    vuint32_t STAT59:1;                /* Fault Status */
    vuint32_t STAT60:1;                /* Fault Status */
    vuint32_t STAT61:1;                /* Fault Status */
    vuint32_t STAT62:1;                /* Fault Status */
    vuint32_t STAT63:1;                /* Fault Status */
  } B;
} AON_FCCU_FHFLTS0_1_tag;

typedef union AON_FCCU_FHFLTS0_2_union_tag { /* Fault Status */
  vuint32_t R;
  struct {
    vuint32_t STAT64:1;                /* Fault Status */
    vuint32_t STAT65:1;                /* Fault Status */
    vuint32_t STAT66:1;                /* Fault Status */
    vuint32_t STAT67:1;                /* Fault Status */
    vuint32_t STAT68:1;                /* Fault Status */
    vuint32_t STAT69:1;                /* Fault Status */
    vuint32_t STAT70:1;                /* Fault Status */
    vuint32_t STAT71:1;                /* Fault Status */
    vuint32_t STAT72:1;                /* Fault Status */
    vuint32_t STAT73:1;                /* Fault Status */
    vuint32_t STAT74:1;                /* Fault Status */
    vuint32_t STAT75:1;                /* Fault Status */
    vuint32_t STAT76:1;                /* Fault Status */
    vuint32_t STAT77:1;                /* Fault Status */
    vuint32_t STAT78:1;                /* Fault Status */
    vuint32_t STAT79:1;                /* Fault Status */
    vuint32_t STAT80:1;                /* Fault Status */
    vuint32_t STAT81:1;                /* Fault Status */
    vuint32_t STAT82:1;                /* Fault Status */
    vuint32_t STAT83:1;                /* Fault Status */
    vuint32_t STAT84:1;                /* Fault Status */
    vuint32_t STAT85:1;                /* Fault Status */
    vuint32_t STAT86:1;                /* Fault Status */
    vuint32_t STAT87:1;                /* Fault Status */
    vuint32_t STAT88:1;                /* Fault Status */
    vuint32_t STAT89:1;                /* Fault Status */
    vuint32_t STAT90:1;                /* Fault Status */
    vuint32_t STAT91:1;                /* Fault Status */
    vuint32_t STAT92:1;                /* Fault Status */
    vuint32_t STAT93:1;                /* Fault Status */
    vuint32_t STAT94:1;                /* Fault Status */
    vuint32_t STAT95:1;                /* Fault Status */
  } B;
} AON_FCCU_FHFLTS0_2_tag;

typedef union AON_FCCU_FHFLTS0_3_union_tag { /* Fault Status */
  vuint32_t R;
  struct {
    vuint32_t STAT96:1;                /* Fault Status */
    vuint32_t STAT97:1;                /* Fault Status */
    vuint32_t STAT98:1;                /* Fault Status */
    vuint32_t STAT99:1;                /* Fault Status */
    vuint32_t STAT100:1;               /* Fault Status */
    vuint32_t STAT101:1;               /* Fault Status */
    vuint32_t STAT102:1;               /* Fault Status */
    vuint32_t STAT103:1;               /* Fault Status */
    vuint32_t STAT104:1;               /* Fault Status */
    vuint32_t STAT105:1;               /* Fault Status */
    vuint32_t STAT106:1;               /* Fault Status */
    vuint32_t STAT107:1;               /* Fault Status */
    vuint32_t STAT108:1;               /* Fault Status */
    vuint32_t STAT109:1;               /* Fault Status */
    vuint32_t STAT110:1;               /* Fault Status */
    vuint32_t STAT111:1;               /* Fault Status */
    vuint32_t STAT112:1;               /* Fault Status */
    vuint32_t STAT113:1;               /* Fault Status */
    vuint32_t STAT114:1;               /* Fault Status */
    vuint32_t STAT115:1;               /* Fault Status */
    vuint32_t STAT116:1;               /* Fault Status */
    vuint32_t STAT117:1;               /* Fault Status */
    vuint32_t STAT118:1;               /* Fault Status */
    vuint32_t STAT119:1;               /* Fault Status */
    vuint32_t STAT120:1;               /* Fault Status */
    vuint32_t STAT121:1;               /* Fault Status */
    vuint32_t STAT122:1;               /* Fault Status */
    vuint32_t STAT123:1;               /* Fault Status */
    vuint32_t STAT124:1;               /* Fault Status */
    vuint32_t STAT125:1;               /* Fault Status */
    vuint32_t STAT126:1;               /* Fault Status */
    vuint32_t STAT127:1;               /* Fault Status */
  } B;
} AON_FCCU_FHFLTS0_3_tag;

typedef union AON_FCCU_FHFLTRKC0_0_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL0:3;               /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL1:3;               /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL2:3;               /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL3:3;               /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_0_tag;

typedef union AON_FCCU_FHFLTRKC0_1_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL4:3;               /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL5:3;               /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL6:3;               /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL7:3;               /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_1_tag;

typedef union AON_FCCU_FHFLTRKC0_2_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL8:3;               /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL9:3;               /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL10:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL11:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_2_tag;

typedef union AON_FCCU_FHFLTRKC0_3_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL12:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL13:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL14:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL15:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_3_tag;

typedef union AON_FCCU_FHFLTRKC0_4_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL16:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL17:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL18:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL19:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_4_tag;

typedef union AON_FCCU_FHFLTRKC0_5_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL20:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL21:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL22:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL23:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_5_tag;

typedef union AON_FCCU_FHFLTRKC0_6_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL24:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL25:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL26:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL27:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_6_tag;

typedef union AON_FCCU_FHFLTRKC0_7_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL28:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL29:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL30:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL31:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_7_tag;

typedef union AON_FCCU_FHFLTRKC0_8_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL32:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL33:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL34:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL35:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_8_tag;

typedef union AON_FCCU_FHFLTRKC0_9_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL36:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL37:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL38:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL39:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_9_tag;

typedef union AON_FCCU_FHFLTRKC0_10_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL40:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL41:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL42:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL43:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_10_tag;

typedef union AON_FCCU_FHFLTRKC0_11_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL44:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL45:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL46:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL47:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_11_tag;

typedef union AON_FCCU_FHFLTRKC0_12_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL48:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL49:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL50:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL51:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_12_tag;

typedef union AON_FCCU_FHFLTRKC0_13_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL52:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL53:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL54:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL55:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_13_tag;

typedef union AON_FCCU_FHFLTRKC0_14_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL56:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL57:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL58:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL59:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_14_tag;

typedef union AON_FCCU_FHFLTRKC0_15_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL60:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL61:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL62:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL63:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_15_tag;

typedef union AON_FCCU_FHFLTRKC0_16_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL64:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL65:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL66:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL67:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_16_tag;

typedef union AON_FCCU_FHFLTRKC0_17_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL68:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL69:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL70:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL71:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_17_tag;

typedef union AON_FCCU_FHFLTRKC0_18_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL72:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL73:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL74:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL75:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_18_tag;

typedef union AON_FCCU_FHFLTRKC0_19_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL76:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL77:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL78:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL79:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_19_tag;

typedef union AON_FCCU_FHFLTRKC0_20_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL80:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL81:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL82:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL83:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_20_tag;

typedef union AON_FCCU_FHFLTRKC0_21_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL84:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL85:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL86:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL87:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_21_tag;

typedef union AON_FCCU_FHFLTRKC0_22_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL88:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL89:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL90:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL91:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_22_tag;

typedef union AON_FCCU_FHFLTRKC0_23_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL92:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL93:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL94:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL95:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_23_tag;

typedef union AON_FCCU_FHFLTRKC0_24_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL96:3;              /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL97:3;              /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL98:3;              /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL99:3;              /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_24_tag;

typedef union AON_FCCU_FHFLTRKC0_25_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL100:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL101:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL102:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL103:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_25_tag;

typedef union AON_FCCU_FHFLTRKC0_26_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL104:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL105:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL106:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL107:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_26_tag;

typedef union AON_FCCU_FHFLTRKC0_27_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL108:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL109:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL110:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL111:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_27_tag;

typedef union AON_FCCU_FHFLTRKC0_28_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL112:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL113:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL114:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL115:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_28_tag;

typedef union AON_FCCU_FHFLTRKC0_29_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL116:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL117:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL118:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL119:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_29_tag;

typedef union AON_FCCU_FHFLTRKC0_30_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL120:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL121:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL122:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL123:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_30_tag;

typedef union AON_FCCU_FHFLTRKC0_31_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL124:3;             /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL125:3;             /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL126:3;             /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL127:3;             /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} AON_FCCU_FHFLTRKC0_31_tag;

typedef union AON_FCCU_FHIMRKC0_00_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_00_tag;

typedef union AON_FCCU_FHDLRKC0_00_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_00_tag;

typedef union AON_FCCU_FHIMRKC0_10_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_10_tag;

typedef union AON_FCCU_FHDLRKC0_10_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_10_tag;

typedef union AON_FCCU_FHIMRKC0_20_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_20_tag;

typedef union AON_FCCU_FHDLRKC0_20_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_20_tag;

typedef union AON_FCCU_FHIMRKC0_30_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_30_tag;

typedef union AON_FCCU_FHDLRKC0_30_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_30_tag;

typedef union AON_FCCU_FHIMRKC0_40_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_40_tag;

typedef union AON_FCCU_FHDLRKC0_40_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_40_tag;

typedef union AON_FCCU_FHIMRKC0_50_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_50_tag;

typedef union AON_FCCU_FHDLRKC0_50_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_50_tag;

typedef union AON_FCCU_FHIMRKC0_60_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_60_tag;

typedef union AON_FCCU_FHDLRKC0_60_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_60_tag;

typedef union AON_FCCU_FHIMRKC0_70_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHIMRKC0_70_tag;

typedef union AON_FCCU_FHDLRKC0_70_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} AON_FCCU_FHDLRKC0_70_tag;

struct AON_FCCU_tag {
  uint8_t AON_FCCU_reserved0[768];
  AON_FCCU_GRKNTIMC_tag GRKNTIMC[1];   /* Global Reaction Timer Period */
  uint8_t AON_FCCU_reserved1[316];
  AON_FCCU_GFLTRC_C0_tag GFLTRC_C0;    /* Global Fault Recovery */
  AON_FCCU_GFLTRC_C1_tag GFLTRC_C1;    /* Global Fault Recovery */
  AON_FCCU_GFLTRC_C2_tag GFLTRC_C2;    /* Global Fault Recovery */
  AON_FCCU_GFLTRC_C3_tag GFLTRC_C3;    /* Global Fault Recovery */
  uint8_t AON_FCCU_reserved2[2096];
  AON_FCCU_GFLTOVDC0_tag GFLTOVDC0;    /* Global Fault Overflow Detection */
  AON_FCCU_GFLTOVDC1_tag GFLTOVDC1;    /* Global Fault Overflow Detection */
  AON_FCCU_GFLTOVDC2_tag GFLTOVDC2;    /* Global Fault Overflow Detection */
  AON_FCCU_GFLTOVDC3_tag GFLTOVDC3;    /* Global Fault Overflow Detection */
  uint8_t AON_FCCU_reserved3[112];
  AON_FCCU_GRKNTIMS_tag GRKNTIMS;      /* Global Reaction Timer Status */
  AON_FCCU_GCTRL_tag GCTRL;            /* Global Space Control */
  AON_FCCU_GINTOVFS_tag GINTOVFS;      /* Global DID FSM Status */
  uint8_t AON_FCCU_reserved4[4];
  AON_FCCU_GOVFRKC_tag GOVFRKC[1];     /* Global Overflow Reaction */
  uint8_t AON_FCCU_reserved5[12];
  AON_FCCU_GMEOUTDC_tag GMEOUTDC;      /* Global Minimum EOUT Duration */
  AON_FCCU_GEOUTTCT_tag GEOUTTCT;      /* Global EOUT Timer Disable */
  uint8_t AON_FCCU_reserved6[8];
  AON_FCCU_GLB_EOUT_tag GLB_EOUT[2];
  uint8_t AON_FCCU_reserved7[600];
  AON_FCCU_GDBGCFG_tag GDBGCFG;        /* Global Debug */
  AON_FCCU_GDBGSTAT_tag GDBGSTAT;      /* Global Debug Status */
  AON_FCCU_GDPFSTAT_tag GDPFSTAT;      /* Global Debug Pending Fault Status */
  AON_FCCU_GDALTRLD_tag GDALTRLD;      /* Global Debug Alternate Reload Status */
  uint8_t AON_FCCU_reserved8[1306688];
  AON_FCCU_FHCFG0_tag FHCFG0;          /* Fault Handler */
  AON_FCCU_FHSRVDS0_tag FHSRVDS0;      /* Fault Handler Status */
  uint8_t AON_FCCU_reserved9[8];
  AON_FCCU_FHFLTENC0_0_tag FHFLTENC0_0; /* Fault Enable */
  AON_FCCU_FHFLTENC0_1_tag FHFLTENC0_1; /* Fault Enable */
  AON_FCCU_FHFLTENC0_2_tag FHFLTENC0_2; /* Fault Enable */
  AON_FCCU_FHFLTENC0_3_tag FHFLTENC0_3; /* Fault Enable */
  uint8_t AON_FCCU_reserved10[48];
  AON_FCCU_FHFLTS0_0_tag FHFLTS0_0;    /* Fault Status */
  AON_FCCU_FHFLTS0_1_tag FHFLTS0_1;    /* Fault Status */
  AON_FCCU_FHFLTS0_2_tag FHFLTS0_2;    /* Fault Status */
  AON_FCCU_FHFLTS0_3_tag FHFLTS0_3;    /* Fault Status */
  uint8_t AON_FCCU_reserved11[48];
  AON_FCCU_FHFLTRKC0_0_tag FHFLTRKC0_0; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_1_tag FHFLTRKC0_1; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_2_tag FHFLTRKC0_2; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_3_tag FHFLTRKC0_3; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_4_tag FHFLTRKC0_4; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_5_tag FHFLTRKC0_5; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_6_tag FHFLTRKC0_6; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_7_tag FHFLTRKC0_7; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_8_tag FHFLTRKC0_8; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_9_tag FHFLTRKC0_9; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_10_tag FHFLTRKC0_10; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_11_tag FHFLTRKC0_11; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_12_tag FHFLTRKC0_12; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_13_tag FHFLTRKC0_13; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_14_tag FHFLTRKC0_14; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_15_tag FHFLTRKC0_15; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_16_tag FHFLTRKC0_16; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_17_tag FHFLTRKC0_17; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_18_tag FHFLTRKC0_18; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_19_tag FHFLTRKC0_19; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_20_tag FHFLTRKC0_20; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_21_tag FHFLTRKC0_21; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_22_tag FHFLTRKC0_22; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_23_tag FHFLTRKC0_23; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_24_tag FHFLTRKC0_24; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_25_tag FHFLTRKC0_25; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_26_tag FHFLTRKC0_26; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_27_tag FHFLTRKC0_27; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_28_tag FHFLTRKC0_28; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_29_tag FHFLTRKC0_29; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_30_tag FHFLTRKC0_30; /* Fault Reaction Set Configuration */
  AON_FCCU_FHFLTRKC0_31_tag FHFLTRKC0_31; /* Fault Reaction Set Configuration */
  uint8_t AON_FCCU_reserved12[384];
  AON_FCCU_FHIMRKC0_00_tag FHIMRKC0_00; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved13[12];
  AON_FCCU_FHDLRKC0_00_tag FHDLRKC0_00; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved14[12];
  AON_FCCU_FHIMRKC0_10_tag FHIMRKC0_10; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved15[12];
  AON_FCCU_FHDLRKC0_10_tag FHDLRKC0_10; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved16[12];
  AON_FCCU_FHIMRKC0_20_tag FHIMRKC0_20; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved17[12];
  AON_FCCU_FHDLRKC0_20_tag FHDLRKC0_20; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved18[12];
  AON_FCCU_FHIMRKC0_30_tag FHIMRKC0_30; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved19[12];
  AON_FCCU_FHDLRKC0_30_tag FHDLRKC0_30; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved20[12];
  AON_FCCU_FHIMRKC0_40_tag FHIMRKC0_40; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved21[12];
  AON_FCCU_FHDLRKC0_40_tag FHDLRKC0_40; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved22[12];
  AON_FCCU_FHIMRKC0_50_tag FHIMRKC0_50; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved23[12];
  AON_FCCU_FHDLRKC0_50_tag FHDLRKC0_50; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved24[12];
  AON_FCCU_FHIMRKC0_60_tag FHIMRKC0_60; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved25[12];
  AON_FCCU_FHDLRKC0_60_tag FHDLRKC0_60; /* Delayed Reaction Configuration */
  uint8_t AON_FCCU_reserved26[12];
  AON_FCCU_FHIMRKC0_70_tag FHIMRKC0_70; /* Immediate Reaction Configuration */
  uint8_t AON_FCCU_reserved27[12];
  AON_FCCU_FHDLRKC0_70_tag FHDLRKC0_70; /* Delayed Reaction Configuration */
};

/* ============================================================================
   =============================== Module: CACHE_ECC_MCM ======================
   ============================================================================ */

typedef union CACHE_ECC_MCM_CACHE_ECCR_union_tag { /* CACHE ECC Control */
  vuint32_t R;
  struct {
    vuint32_t WECC_DIS:1;              /* Disable CACHE ECC Write Generation */
    vuint32_t RECC_DIS:1;              /* Disable Cache ECC Read Check */
    vuint32_t _unused_0:30;
  } B;
} CACHE_ECC_MCM_CACHE_ECCR_tag;

typedef union CACHE_ECC_MCM_INT_STATUS_union_tag { /* Interrupt Status */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;
    vuint32_t CODE_CACHE_ECC_ERRM_INT:1; /* Code Cache Access Multibit ECC Error Interrupt Status */
    vuint32_t CODE_CACHE_ECC_ERRS_INT:1; /* Code Cache Access Single-Bit ECC Error Interrupt Status */
    vuint32_t CODE_CACHE_ECC_ERRM_OVER_INT:1; /* Code Cache Access Multiple Multibit ECC Error Interrupt Status */
    vuint32_t CODE_CACHE_ECC_ERRS_OVER_INT:1; /* Code Cache Access Multiple Single-Bit ECC Error Interrupt Status */
    vuint32_t SYSTEM_CACHE_ECC_ERRM_INT:1; /* System Cache Access Multibit ECC Error Interrupt Status */
    vuint32_t SYSTEM_CACHE_ECC_ERRS_INT:1; /* System Cache Access Single-Bit ECC Error Interrupt Status */
    vuint32_t SYSTEM_CACHE_ECC_ERRM_OVER_INT:1; /* System Cache Access Multiple Multibit ECC Error Interrupt Status */
    vuint32_t SYSTEM_CACHE_ECC_ERRS_OVER_INT:1; /* System Cache Access Multiple Single-Bit ECC Error Interrupt Status */
    vuint32_t _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_STATUS_tag;

typedef union CACHE_ECC_MCM_INT_STAT_EN_union_tag { /* Interrupt Status Enable */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;
    vuint32_t CODE_CACHE_ERRM_INT_EN:1; /* Code Cache Access Multibit ECC Error Interrupt Status Enable */
    vuint32_t CODE_CACHE_ERRS_INT_EN:1; /* Code Cache Access Single-Bit ECC Error Interrupt Status Enable */
    vuint32_t CODE_CACHE_ERRM_OVER_INT_EN:1; /* Code Cache Access Multiple Multibit ECC Error Interrupt Status Enable */
    vuint32_t CODE_CACHE_ERRS_OVER_INT_EN:1; /* Code Cache Access Multiple Single-Bit ECC Error Interrupt Status Enable */
    vuint32_t SYSTEM_CACHE_ECC_ERRM_INT_EN:1; /* System Cache Access Multibit ECC Error Interrupt Status Enable */
    vuint32_t SYSTEM_CACHE_ECC_ERRS_INT_EN:1; /* System Cache Access Single-Bit ECC Error Interrupt Status Enable */
    vuint32_t SYSTEM_CACHE_ECC_ERRM_OVER_INT_EN:1; /* System Cache Access Multiple Multibit ECC Error Interrupt Status Enable */
    vuint32_t SYSTEM_CACHE_ECC_ERRS_OVER_INT_EN:1; /* System Cache Access Multiple Single-Bit ECC Error Interrupt Status Enable */
    vuint32_t _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_STAT_EN_tag;

typedef union CACHE_ECC_MCM_INT_SIG_EN_union_tag { /* Interrupt Enable */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;
    vuint32_t CODE_CACHE_ERRM_INT_SIG_EN:1; /* Code Cache Access Multibit ECC Error Interrupt Signal Enable */
    vuint32_t CODE_CACHE_ERRS_INT_SIG_EN:1; /* Code Cache Access Single-Bit ECC Error Interrupt Signal Enable */
    vuint32_t CODE_CACHE_ERRM_OVER_INT_SIG_EN:1; /* Code Cache Access Multiple Multibit ECC Error Interrupt Signal Enable */
    vuint32_t CODE_CACHE_ERRS_OVER_INT_SIG_EN:1; /* Code Cache Access Multiple Single-Bit ECC Error Interrupt Signal Enable */
    vuint32_t SYSTEM_CACHE_ERRM_INT_SIG_EN:1; /* System Cache Access Multibit ECC Error Interrupt Signal Enable */
    vuint32_t SYSTEM_CACHE_ERRS_INT_SIG_EN:1; /* System Cache Access Single-Bit ECC Error Interrupt Signal Enable */
    vuint32_t SYSTEM_CACHE_ERRM_OVER_INT_SIG_EN:1; /* System Cache Access Multiple Multibit ECC Error Interrupt Signal Enable */
    vuint32_t SYSTEM_CACHE_ERRS_OVER_INT_SIG_EN:1; /* System Cache Access Multiple Single-Bit ECC Error Interrupt Signal Enable */
    vuint32_t _unused_0:16;
  } B;
} CACHE_ECC_MCM_INT_SIG_EN_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_union_tag { /* Code Cache Single-Bit ECC Error Information */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_ECCS_TAG:1;   /* Code Cache Single-Bit ECC Error */
    vuint32_t CODE_CACHE_ECCS_CMD:1;   /* Code Cache Single-Bit ECC Error on Cache Command */
    vuint32_t _unused_28:2;
    vuint32_t CODE_CACHE_ECCS_EFMST:4; /* Code Cache Single-Bit ECC Error Master Number */
    vuint32_t CODE_CACHE_ECCS_EFPRT:6; /* Code Cache Single-Bit ECC Error Protection */
    vuint32_t _unused_16:2;
    vuint32_t CODE_CACHE_ECCS_EFSYN:7; /* Code Cache Single-Bit ECC Error Corresponding Syndrome */
    vuint32_t _unused_0:9;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_union_tag { /* Code Cache Single-Bit ECC Error Address */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_ECCS_ERRED_ADDR:32; /* Code Cache Single-Bit ECC Error Address */
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_union_tag { /* Code Cache Multibit ECC Error Information */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_ECCM_TAG:1;   /* Code Cache Multibit ECC Error */
    vuint32_t CODE_CACHE_ECCM_CMD:1;   /* Code Cache Multibit ECC Error on Code Cache Command */
    vuint32_t _unused_28:2;
    vuint32_t CODE_CACHE_ECCM_EFMST:4; /* Code Cache Multibit ECC Error Master Number */
    vuint32_t CODE_CACHE_ECCM_EFPRT:6; /* Code Cache Multibit ECC Error Protection */
    vuint32_t _unused_16:2;
    vuint32_t CODE_CACHE_ECCM_EFSYN:7; /* Code Cache Multibit ECC Error Corresponding Syndrome */
    vuint32_t _unused_0:9;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_union_tag { /* System Cache Single-Bit ECC Error Information */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_ECCS_TAG:1; /* System Cache Single-Bit ECC Error */
    vuint32_t SYSTEM_CACHE_ECCS_CMD:1; /* System Cache Single-Bit ECC Error on Cache Command */
    vuint32_t _unused_28:2;
    vuint32_t SYSTEM_CACHE_ECCS_EFMST:4; /* System Cache Single-Bit ECC Error Master Number */
    vuint32_t SYSTEM_CACHE_ECCS_EFPRT:6; /* System Cache Single-Bit ECC Error Protection */
    vuint32_t _unused_16:2;
    vuint32_t SYSTEM_CACHE_ECCS_EFSYN:7; /* System Cache Single-Bit ECC Error Corresponding Syndrome */
    vuint32_t _unused_0:9;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_union_tag { /* System Cache Single-Bit ECC Error Address */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_ECCS_ERRED_ADDR:32; /* System Cache Single-Bit ECC Error Address */
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_union_tag { /* System Cache Multibit ECC Error Information */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_ECCM_TAG:1; /* System Cache Multibit ECC Error */
    vuint32_t SYSTEM_CACHE_ECCM_CMD:1; /* System Cache Multibit ECC Error on System Cache Command */
    vuint32_t _unused_28:2;
    vuint32_t SYSTEM_CACHE_ECCM_EFMST:4; /* System Cache Multibit ECC Error Master Number */
    vuint32_t SYSTEM_CACHE_ECCM_EFPRT:6; /* System Cache Multibit ECC Error Protection */
    vuint32_t _unused_16:2;
    vuint32_t SYSTEM_CACHE_ECCM_EFSYN:7; /* System Cache Multibit ECC Error Corresponding Syndrome */
    vuint32_t _unused_0:9;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_union_tag { /* System Cache Multibit ECC Error Data */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_ECCM_ERRED_DATA:32; /* System Cache Multibit ECC Error Data */
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_union_tag { /* Code Cache TAG0 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_TAG0_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t CODE_CACHE_TAG0_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t CODE_CACHE_TAG0_FR11BI:1; /* Force One 1-Bit Data Inversion on Code Cache TAG0 Write Access */
    vuint32_t CODE_CACHE_TAG0_FR1NCI:1; /* Force One Noncorrectable Data Inversion on Code Cache TAG0 Write Access */
    vuint32_t CODE_CACHE_TAG0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on Code Cache TAG0 Write Access */
    vuint32_t CODE_CACHE_TAG0_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on Code Cache TAG0 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_union_tag { /* Code Cache TAG1 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_TAG1_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t CODE_CACHE_TAG1_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t CODE_CACHE_TAG1_FR11BI:1; /* Force One 1-Bit Data Inversion on Code Cache TAG1 Write Access */
    vuint32_t CODE_CACHE_TAG1_FR1NCI:1; /* Force One Noncorrectable Data Inversion on Code Cache TAG1 Write Access */
    vuint32_t CODE_CACHE_TAG1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on Code Cache TAG1 Write Access */
    vuint32_t CODE_CACHE_TAG1_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on Code Cache TAG1 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_union_tag { /* Code Cache DATA0 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_DATA0_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t CODE_CACHE_DATA0_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t CODE_CACHE_DATA0_FR11BI:1; /* Force One 1-Bit Data Inversion on Code Cache DATA0 Write Access */
    vuint32_t CODE_CACHE_DATA0_FR1NCI:1; /* Force One Noncorrectable Data Inversion on Code Cache DATA0 Write Access */
    vuint32_t CODE_CACHE_DATA0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on Code Cache DATA0 Write Access */
    vuint32_t CODE_CACHE_DATA0_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on Code Cache DATA0 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_union_tag { /* Code Cache DATA1 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t CODE_CACHE_DATA1_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t CODE_CACHE_DATA1_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t CODE_CACHE_DATA1_FR11BI:1; /* Force One 1-Bit Data Inversion on Code Cache DATA1 Write Access */
    vuint32_t CODE_CACHE_DATA1_FR1NCI:1; /* Force One Noncorrectable Data Inversion on Code Cache DATA1 Write Access */
    vuint32_t CODE_CACHE_DATA1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on Code Cache DATA1 Write Access */
    vuint32_t CODE_CACHE_DATA1_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on Code Cache DATA1 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_union_tag { /* System Cache TAG0 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_TAG0_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t SYSTEM_CACHE_TAG0_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t SYSTEM_CACHE_TAG0_FR11BI:1; /* Force One 1-Bit Data Inversion on System Cache TAG0 Write Access */
    vuint32_t SYSTEM_CACHE_TAG0_FR1NCI:1; /* Force One Noncorrectable Data Inversion on System Cache TAG0 Write Access */
    vuint32_t SYSTEM_CACHE_TAG0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on System Cache TAG0 Write Access */
    vuint32_t SYSTEM_CACHE_TAG0_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on System Cache TAG0 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_union_tag { /* System Cache TAG1 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_TAG1_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t SYSTEMCACHE_TAG1_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t SYSTEM_CACHE_TAG1_FR11BI:1; /* Force One 1-Bit Data Inversion on System Cache TAG1 Write Access */
    vuint32_t SYSTEM_CACHE_TAG1_FR1NCI:1; /* Force One Noncorrectable Data Inversion on System Cache TAG1 Write Access */
    vuint32_t SYSTEM_CACHE_TAG1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on System Cache TAG1 Write Access */
    vuint32_t SYSTEM_CACHE_TAG1_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on System Cache TAG1 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_union_tag { /* System Cache DATA0 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_DATA0_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t SYSTEM_CACHE_DATA0_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t SYSTEM_CACHE_DATA0_FR11BI:1; /* Force One 1-Bit Data Inversion on System Cache DATA0 Write Access */
    vuint32_t SYSTEM_CACHE_DATA0_FR1NCI:1; /* Force One Noncorrectable Data Inversion on System Cache DATA0 Write Access */
    vuint32_t SYSTEM_CACHE_DATA0_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on System Cache DATA0 Write Access */
    vuint32_t SYSTEM_CACHE_DATA0_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on System Cache DATA0 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_union_tag { /* System Cache DATA1 ECC Error Injection */
  vuint32_t R;
  struct {
    vuint32_t SYSTEM_CACHE_DATA1_ERR1BIT:7; /* Position of First Bit to Inject ECC Error */
    vuint32_t _unused_24:1;
    vuint32_t SYSTEM_CACHE_DATA1_ERR2BIT:7; /* Position of Second Bit to Inject ECC Error */
    vuint32_t _unused_16:1;
    vuint32_t SYSTEM_CACHE_DATA1_FR11BI:1; /* Force One 1-Bit Data Inversion on System Cache DATA1 Write Access */
    vuint32_t SYSTEM_CACHE_DATA1_FR1NCI:1; /* Force One Noncorrectable Data Inversion on System Cache DATA1 Write Access */
    vuint32_t SYSTEM_CACHE_DATA1_FRC1BI:1; /* Force Continuous 1-Bit Data Inversions on System Cache DATA1 Write Access */
    vuint32_t SYSTEM_CACHE_DATA1_FRCNCI:1; /* Force Continuous Noncorrectable Data Inversions on System Cache DATA1 Write Access */
    vuint32_t _unused_0:12;
  } B;
} CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_tag;

typedef union CACHE_ECC_MCM_FCCU_SW_FAULTS_union_tag { /* FCCU Software Faults */
  vuint32_t R;
  struct {
    vuint32_t FCCU_SW_FAULTS:6;        /* FCCU Software Faults */
    vuint32_t _unused_0:26;
  } B;
} CACHE_ECC_MCM_FCCU_SW_FAULTS_tag;

struct CACHE_ECC_MCM_tag {
  CACHE_ECC_MCM_CACHE_ECCR_tag CACHE_ECCR; /* CACHE ECC Control */
  uint8_t CACHE_ECC_MCM_reserved0[28];
  CACHE_ECC_MCM_INT_STATUS_tag INT_STATUS; /* Interrupt Status */
  CACHE_ECC_MCM_INT_STAT_EN_tag INT_STAT_EN; /* Interrupt Status Enable */
  CACHE_ECC_MCM_INT_SIG_EN_tag INT_SIG_EN; /* Interrupt Enable */
  uint8_t CACHE_ECC_MCM_reserved1[48];
  CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO_tag CODE_CACHE_ECC_SINGLE_ERROR_INFO; /* Code Cache Single-Bit ECC Error Information */
  CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR_tag CODE_CACHE_ECC_SINGLE_ERROR_ADDR; /* Code Cache Single-Bit ECC Error Address */
  uint8_t CACHE_ECC_MCM_reserved2[4];
  CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO_tag CODE_CACHE_ECC_MULTI_ERROR_INFO; /* Code Cache Multibit ECC Error Information */
  uint8_t CACHE_ECC_MCM_reserved3[8];
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO_tag SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO; /* System Cache Single-Bit ECC Error Information */
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR_tag SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR; /* System Cache Single-Bit ECC Error Address */
  uint8_t CACHE_ECC_MCM_reserved4[4];
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO_tag SYSTEM_CACHE_ECC_MULTI_ERROR_INFO; /* System Cache Multibit ECC Error Information */
  CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA_tag SYSTEM_CACHE_ECC_MULTI_ERROR_DATA; /* System Cache Multibit ECC Error Data */
  uint8_t CACHE_ECC_MCM_reserved5[4];
  CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC_tag CODE_CACHE_TAG0_ECC_ERROR_INJEC; /* Code Cache TAG0 ECC Error Injection */
  CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC_tag CODE_CACHE_TAG1_ECC_ERROR_INJEC; /* Code Cache TAG1 ECC Error Injection */
  CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC_tag CODE_CACHE_DATA0_ECC_ERROR_INJEC; /* Code Cache DATA0 ECC Error Injection */
  CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC_tag CODE_CACHE_DATA1_ECC_ERROR_INJEC; /* Code Cache DATA1 ECC Error Injection */
  CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC_tag SYTEM_CACHE_TAG0_ECC_ERROR_INJEC; /* System Cache TAG0 ECC Error Injection */
  CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC_tag SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC; /* System Cache TAG1 ECC Error Injection */
  CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC_tag SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC; /* System Cache DATA0 ECC Error Injection */
  CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC_tag STSTEM_CACHE_DATA1_ECC_ERROR_INJEC; /* System Cache DATA1 ECC Error Injection */
  CACHE_ECC_MCM_FCCU_SW_FAULTS_tag FCCU_SW_FAULTS; /* FCCU Software Faults */
};

/* ============================================================================
   =============================== Module: M7_A7_APB_MCM ======================
   ============================================================================ */

typedef union M7_A7_APB_MCM_ERR_INFO_EN_union_tag { /* Error Info Enable */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;            /* Reserved */
    vuint32_t ITCM_ERRM_INFO_EN:1;     /* ITCM Access multi bit ECC Error Info Status Enable */
    vuint32_t ITCM_ERRS_INFO_EN:1;     /* ITCM Access single bit ECC Error Info Status Enable */
    vuint32_t D0TCM_ERRM_INFO_EN:1;    /* D0TCM Access multi bit ECC Error Info Status Enable */
    vuint32_t D0TCM_ERRS_INFO_EN:1;    /* D0TCM Access single bit ECC Error Info Status Enable */
    vuint32_t D1TCM_ERRM_INFO_EN:1;    /* D1TCM Access multi bit ECC Error Info Status Enable */
    vuint32_t D1TCM_ERRS_INFO_EN:1;    /* D1TCM Access single bit ECC Error Info Status Enable */
    vuint32_t _unused_0:18;            /* Reserved */
  } B;
} M7_A7_APB_MCM_ERR_INFO_EN_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_INFO_union_tag { /* ITCM single-bit ECC Error Information */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCS_EFW:1;         /* Read or write of the access */
    vuint32_t ITCM_ECCS_EFSIZ:3;       /* Size of the access */
    vuint32_t ITCM_ECCS_EFMST:4;       /* Encodes the requestor of the access */
    vuint32_t ITCM_ECCS_EFPRT:4;       /* Privilege level of access */
    vuint32_t ITCM_ECCS_EFSYN:8;       /* ECC syndrome */
    vuint32_t RESERVED:12;             /* Reserved */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* ITCM single-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCS_ERRED_ADDR:32; /* ITCM single-bit ECC error address */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_union_tag { /* ITCM single-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCS_ERRED_DATA_LSB:32; /* ITCM single-bit ECC error data [31:0] */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_union_tag { /* ITCM single-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCS_ERRED_DATA_MSB:32; /* ITCM single-bit ECC error data [63:32] */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_INFO_union_tag { /* ITCM multi-bit ECC Error Information Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCM_EFW:1;         /* ITCM multi-bit ECC error corresponding tcm_wr value */
    vuint32_t ITCM_ECCM_EFSIZ:3;       /* ITCM multi-bit ECC error corresponding tcm access size */
    vuint32_t ITCM_ECCM_EFMST:4;       /* ITCM multi-bit ECC error corresponding tcm_master */
    vuint32_t ITCM_ECCM_EFPRT:4;       /* ITCM multi-bit ECC error corresponding tcm_priv */
    vuint32_t ITCM_ECCM_EFSYN:8;       /* ITCM multi-bit ECC error corresponding syndrome */
    vuint32_t RESERVED:12;             /* Reserved */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_ADDR_union_tag { /* ITCM multi-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCM_ERRED_ADDR:32; /* ITCM multi-bit ECC error address */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_union_tag { /* ITCM multi-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCM_ERRED_DATA_LSB:32; /* ITCM multi-bit ECC error data [31:0] */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_tag;

typedef union M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_union_tag { /* ITCM multi-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t ITCM_ECCM_ERRED_DATA_MSB:32; /* ITCM multi-bit ECC error data [63:32] */
  } B;
} M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_union_tag { /* D0TCM single-bit ECC Error Information Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCS_EFW:1;        /* D0TCM single-bit ECC error corresponding tcm_wr value */
    vuint32_t D0TCM_ECCS_EFSIZ:3;      /* D0TCM single-bit ECC error corresponding tcm access size */
    vuint32_t D0TCM_ECCS_EFMST:4;      /* D0TCM single-bit ECC error corresponding tcm_master */
    vuint32_t D0TCM_ECCS_EFPRT:4;      /* D0TCM single-bit ECC error corresponding tcm_priv */
    vuint32_t D0TCM_ECCS_EFSYN:7;      /* D0TCM single-bit ECC error corresponding syndrome */
    vuint32_t RESERVED:13;             /* Reserved */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* D0TCM single-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCS_ERRED_ADDR:32; /* D0TCM single-bit ECC error address */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_union_tag { /* D0TCM single-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCS_ERRED_DATA:32; /* D0TCM single-bit ECC error data */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_INFO_union_tag { /* D0TCM multi-bit ECC Error Information Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCM_EFW:1;        /* D0TCM multi-bit ECC error corresponding tcm_wr value */
    vuint32_t D0TCM_ECCM_EFSIZ:3;      /* D0TCM multi-bit ECC error corresponding tcm access size */
    vuint32_t D0TCM_ECCM_EFMST:4;      /* D0TCM multi-bit ECC error corresponding tcm_master */
    vuint32_t D0TCM_ECCM_EFPRT:4;      /* D0TCM multi-bit ECC error corresponding tcm_priv */
    vuint32_t D0TCM_ECCM_EFSYN:7;      /* D0TCM multi-bit ECC error corresponding syndrome */
    vuint32_t RESERVED:13;             /* Reserved */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_union_tag { /* D0TCM multi-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCM_ERRED_ADDR:32; /* D0TCM multi-bit ECC error address */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_DATA_union_tag { /* D0TCM multi-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t D0TCM_ECCM_ERRED_DATA:32; /* D0TCM multi-bit ECC error data */
  } B;
} M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_DATA_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_union_tag { /* D1TCM single-bit ECC Error Information Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCS_EFW:1;        /* D1TCM single-bit ECC error corresponding tcm_wr value */
    vuint32_t D1TCM_ECCS_EFSIZ:3;      /* D1TCM single-bit ECC error corresponding tcm access size */
    vuint32_t D1TCM_ECCS_EFMST:4;      /* D1TCM single-bit ECC error corresponding tcm_master */
    vuint32_t D1TCM_ECCS_EFPRT:4;      /* D1TCM single-bit ECC error corresponding tcm_priv */
    vuint32_t D1TCM_ECCS_EFSYN:7;      /* D1TCM single-bit ECC error corresponding syndrome */
    vuint32_t RESERVED:13;             /* Reserved */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_union_tag { /* D1TCM single-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCS_ERRED_ADDR:32; /* D1TCM single-bit ECC error address */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_union_tag { /* D1TCM single-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCS_ERRED_DATA:32; /* D1TCM single-bit ECC error data */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_INFO_union_tag { /* D1TCM multi-bit ECC Error Information Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCM_EFW:1;        /* D1TCM multi-bit ECC error corresponding tcm_wr value */
    vuint32_t D1TCM_ECCM_EFSIZ:3;      /* D1TCM multi-bit ECC error corresponding tcm access size */
    vuint32_t D1TCM_ECCM_EFMST:4;      /* D1TCM multi-bit ECC error corresponding tcm_master */
    vuint32_t D1TCM_ECCM_EFPRT:4;      /* D1TCM multi-bit ECC error corresponding tcm_priv */
    vuint32_t D1TCM_ECCM_EFSYN:7;      /* D1TCM multi-bit ECC error corresponding syndrome */
    vuint32_t RESERVED:13;             /* Reserved */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_INFO_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_union_tag { /* D1TCM multi-bit ECC Error Address Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCM_ERRED_ADDR:32; /* D1TCM multi-bit ECC error address */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_tag;

typedef union M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_DATA_union_tag { /* D1TCM multi-bit ECC Error Data Register */
  vuint32_t R;
  struct {
    vuint32_t D1TCM_ECCM_ERRED_DATA:32; /* D1TCM multi-bit ECC error data */
  } B;
} M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_DATA_tag;

typedef union M7_A7_APB_MCM_FCCU_SW_FAULTS_union_tag { /* FCCU Software Faults */
  vuint32_t R;
  struct {
    vuint32_t FCCU_SW_FAULTS:6;        /* FCCU Software Faults */
    vuint32_t _unused_0:26;
  } B;
} M7_A7_APB_MCM_FCCU_SW_FAULTS_tag;

struct M7_A7_APB_MCM_tag {
  uint8_t M7_A7_APB_MCM_reserved0[36];
  M7_A7_APB_MCM_ERR_INFO_EN_tag ERR_INFO_EN; /* Error Info Enable */
  uint8_t M7_A7_APB_MCM_reserved1[20];
  M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_INFO_tag ITCM_ECC_SINGLE_ERROR_INFO; /* ITCM single-bit ECC Error Information */
  M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_ADDR_tag ITCM_ECC_SINGLE_ERROR_ADDR; /* ITCM single-bit ECC Error Address Register */
  M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_LSB_tag ITCM_ECC_SINGLE_ERROR_DATA_LSB; /* ITCM single-bit ECC Error Data Register */
  M7_A7_APB_MCM_ITCM_ECC_SINGLE_ERROR_DATA_MSB_tag ITCM_ECC_SINGLE_ERROR_DATA_MSB; /* ITCM single-bit ECC Error Data Register */
  M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_INFO_tag ITCM_ECC_MULTI_ERROR_INFO; /* ITCM multi-bit ECC Error Information Register */
  M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_ADDR_tag ITCM_ECC_MULTI_ERROR_ADDR; /* ITCM multi-bit ECC Error Address Register */
  M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_LSB_tag ITCM_ECC_MULTI_ERROR_DATA_LSB; /* ITCM multi-bit ECC Error Data Register */
  M7_A7_APB_MCM_ITCM_ECC_MULTI_ERROR_DATA_MSB_tag ITCM_ECC_MULTI_ERROR_DATA_MSB; /* ITCM multi-bit ECC Error Data Register */
  M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_INFO_tag D0TCM_ECC_SINGLE_ERROR_INFO; /* D0TCM single-bit ECC Error Information Register */
  M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_ADDR_tag D0TCM_ECC_SINGLE_ERROR_ADDR; /* D0TCM single-bit ECC Error Address Register */
  M7_A7_APB_MCM_D0TCM_ECC_SINGLE_ERROR_DATA_tag D0TCM_ECC_SINGLE_ERROR_DATA; /* D0TCM single-bit ECC Error Data Register */
  M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_INFO_tag D0TCM_ECC_MULTI_ERROR_INFO; /* D0TCM multi-bit ECC Error Information Register */
  M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_ADDR_tag D0TCM_ECC_MULTI_ERROR_ADDR; /* D0TCM multi-bit ECC Error Address Register */
  M7_A7_APB_MCM_D0TCM_ECC_MULTI_ERROR_DATA_tag D0TCM_ECC_MULTI_ERROR_DATA; /* D0TCM multi-bit ECC Error Data Register */
  M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_INFO_tag D1TCM_ECC_SINGLE_ERROR_INFO; /* D1TCM single-bit ECC Error Information Register */
  M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_ADDR_tag D1TCM_ECC_SINGLE_ERROR_ADDR; /* D1TCM single-bit ECC Error Address Register */
  M7_A7_APB_MCM_D1TCM_ECC_SINGLE_ERROR_DATA_tag D1TCM_ECC_SINGLE_ERROR_DATA; /* D1TCM single-bit ECC Error Data Register */
  M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_INFO_tag D1TCM_ECC_MULTI_ERROR_INFO; /* D1TCM multi-bit ECC Error Information Register */
  M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_ADDR_tag D1TCM_ECC_MULTI_ERROR_ADDR; /* D1TCM multi-bit ECC Error Address Register */
  M7_A7_APB_MCM_D1TCM_ECC_MULTI_ERROR_DATA_tag D1TCM_ECC_MULTI_ERROR_DATA; /* D1TCM multi-bit ECC Error Data Register */
  uint8_t M7_A7_APB_MCM_reserved2[16];
  M7_A7_APB_MCM_FCCU_SW_FAULTS_tag FCCU_SW_FAULTS; /* FCCU Software Faults */
};

/* ============================================================================
   =========================== Module: SAFETYBASE_VFCCU =======================
   ============================================================================
*/
typedef union SAFETYBASE_VFCCU_GFLTRC_union_tag { /* Global Fault Recovery */
  vuint32_t R;
  struct {
    vuint32_t RHWSW0:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW1:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW2:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW3:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW4:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW5:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW6:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW7:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW8:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW9:1;                /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW10:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW11:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW12:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW13:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW14:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW15:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW16:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW17:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW18:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW19:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW20:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW21:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW22:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW23:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW24:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW25:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW26:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW27:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW28:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW29:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW30:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
    vuint32_t RHWSW31:1;               /* Recovery/Clearing Mechanism Hardware Or Software */
  } B;
} SAFETYBASE_VFCCU_GFLTRC_tag;

typedef union SAFETYBASE_VFCCU_GFLTOVDC_union_tag { /* Global Fault Overflow Detection */
  vuint32_t R;
  struct {
    vuint32_t OVF_DIS0:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS1:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS2:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS3:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS4:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS5:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS6:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS7:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS8:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS9:1;              /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS10:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS11:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS12:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS13:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS14:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS15:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS16:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS17:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS18:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS19:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS20:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS21:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS22:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS23:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS24:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS25:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS26:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS27:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS28:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS29:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS30:1;             /* Fault Overflow Detection Disable */
    vuint32_t OVF_DIS31:1;             /* Fault Overflow Detection Disable */
  } B;
} SAFETYBASE_VFCCU_GFLTOVDC_tag;

typedef union AON_FCCU_FHFLTENC_union_tag { /* Fault Enable */
  vuint32_t R;
  struct {
    vuint32_t EN0:1;                   /* Fault Enable */
    vuint32_t EN1:1;                   /* Fault Enable */
    vuint32_t EN2:1;                   /* Fault Enable */
    vuint32_t EN3:1;                   /* Fault Enable */
    vuint32_t EN4:1;                   /* Fault Enable */
    vuint32_t EN5:1;                   /* Fault Enable */
    vuint32_t EN6:1;                   /* Fault Enable */
    vuint32_t EN7:1;                   /* Fault Enable */
    vuint32_t EN8:1;                   /* Fault Enable */
    vuint32_t EN9:1;                   /* Fault Enable */
    vuint32_t EN10:1;                  /* Fault Enable */
    vuint32_t EN11:1;                  /* Fault Enable */
    vuint32_t EN12:1;                  /* Fault Enable */
    vuint32_t EN13:1;                  /* Fault Enable */
    vuint32_t EN14:1;                  /* Fault Enable */
    vuint32_t EN15:1;                  /* Fault Enable */
    vuint32_t EN16:1;                  /* Fault Enable */
    vuint32_t EN17:1;                  /* Fault Enable */
    vuint32_t EN18:1;                  /* Fault Enable */
    vuint32_t EN19:1;                  /* Fault Enable */
    vuint32_t EN20:1;                  /* Fault Enable */
    vuint32_t EN21:1;                  /* Fault Enable */
    vuint32_t EN22:1;                  /* Fault Enable */
    vuint32_t EN23:1;                  /* Fault Enable */
    vuint32_t EN24:1;                  /* Fault Enable */
    vuint32_t EN25:1;                  /* Fault Enable */
    vuint32_t EN26:1;                  /* Fault Enable */
    vuint32_t EN27:1;                  /* Fault Enable */
    vuint32_t EN28:1;                  /* Fault Enable */
    vuint32_t EN29:1;                  /* Fault Enable */
    vuint32_t EN30:1;                  /* Fault Enable */
    vuint32_t EN31:1;                  /* Fault Enable */
  } B;
} SAFETYBASE_VFCCU_FHFLTENC_tag;

typedef union SAFETYBASE_VFCCU_FHFLTS_union_tag { /* Fault Status */
  vuint32_t R;
  struct {
    vuint32_t STAT0:1;                 /* Fault Status */
    vuint32_t STAT1:1;                 /* Fault Status */
    vuint32_t STAT2:1;                 /* Fault Status */
    vuint32_t STAT3:1;                 /* Fault Status */
    vuint32_t STAT4:1;                 /* Fault Status */
    vuint32_t STAT5:1;                 /* Fault Status */
    vuint32_t STAT6:1;                 /* Fault Status */
    vuint32_t STAT7:1;                 /* Fault Status */
    vuint32_t STAT8:1;                 /* Fault Status */
    vuint32_t STAT9:1;                 /* Fault Status */
    vuint32_t STAT10:1;                /* Fault Status */
    vuint32_t STAT11:1;                /* Fault Status */
    vuint32_t STAT12:1;                /* Fault Status */
    vuint32_t STAT13:1;                /* Fault Status */
    vuint32_t STAT14:1;                /* Fault Status */
    vuint32_t STAT15:1;                /* Fault Status */
    vuint32_t STAT16:1;                /* Fault Status */
    vuint32_t STAT17:1;                /* Fault Status */
    vuint32_t STAT18:1;                /* Fault Status */
    vuint32_t STAT19:1;                /* Fault Status */
    vuint32_t STAT20:1;                /* Fault Status */
    vuint32_t STAT21:1;                /* Fault Status */
    vuint32_t STAT22:1;                /* Fault Status */
    vuint32_t STAT23:1;                /* Fault Status */
    vuint32_t STAT24:1;                /* Fault Status */
    vuint32_t STAT25:1;                /* Fault Status */
    vuint32_t STAT26:1;                /* Fault Status */
    vuint32_t STAT27:1;                /* Fault Status */
    vuint32_t STAT28:1;                /* Fault Status */
    vuint32_t STAT29:1;                /* Fault Status */
    vuint32_t STAT30:1;                /* Fault Status */
    vuint32_t STAT31:1;                /* Fault Status */
  } B;
} SAFETYBASE_VFCCU_FHFLTS_tag;

typedef union SAFETYBASE_VFCCU_FHFLTRKC_union_tag { /* Fault Reaction Set Configuration */
  vuint32_t R;
  struct {
    vuint32_t RKNSEL0:3;               /* Reaction Selection */
    vuint32_t _unused_24:5;
    vuint32_t RKNSEL1:3;               /* Reaction Selection */
    vuint32_t _unused_16:5;
    vuint32_t RKNSEL2:3;               /* Reaction Selection */
    vuint32_t _unused_8:5;
    vuint32_t RKNSEL3:3;               /* Reaction Selection */
    vuint32_t _unused_0:5;
  } B;
} SAFETYBASE_VFCCU_FHFLTRKC_tag;

typedef union SAFETYBASE_VFCCU_FHIMRKC_union_tag { /* Immediate Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} SAFETYBASE_VFCCU_FHIMRKC_tag;

typedef union SAFETYBASE_VFCCU_FHDLRKC_union_tag { /* Delayed Reaction Configuration */
  vuint32_t R;
  struct {
    vuint32_t EOUTEN0:1;               /* EOUT Enable */
    vuint32_t EOUTEN1:1;               /* EOUT Enable */
    vuint32_t RKNEN0:1;                /* Reaction Line Enable */
    vuint32_t RKNEN1:1;                /* Reaction Line Enable */
    vuint32_t RKNEN2:1;                /* Reaction Line Enable */
    vuint32_t RKNEN3:1;                /* Reaction Line Enable */
    vuint32_t RKNEN4:1;                /* Reaction Line Enable */
    vuint32_t RKNEN5:1;                /* Reaction Line Enable */
    vuint32_t RKNEN6:1;                /* Reaction Line Enable */
    vuint32_t RKNEN7:1;                /* Reaction Line Enable */
    vuint32_t RKNEN8:1;                /* Reaction Line Enable */
    vuint32_t RKNEN9:1;                /* Reaction Line Enable */
    vuint32_t RKNEN10:1;               /* Reaction Line Enable */
    vuint32_t RKNEN11:1;               /* Reaction Line Enable */
    vuint32_t _unused_0:18;
  } B;
} SAFETYBASE_VFCCU_FHDLRKC_tag;

typedef struct { /* Reaction Configuration */
    SAFETYBASE_VFCCU_FHIMRKC_tag FHIMRKC; /* Immediate Reaction Configuration */
    uint8_t SAFETYBASE_VFCCU_reserved0[12];
    SAFETYBASE_VFCCU_FHDLRKC_tag FHDLRKC; /* Delayed Reaction Configuration */
    uint8_t SAFETYBASE_VFCCU_reserved1[12];
} SAFETYBASE_VFCCU_FHRKC_tag;

struct SAFETYBASE_VFCCU_tag {
  uint8_t AON_FCCU_reserved0[768];
  AON_FCCU_GRKNTIMC_tag GRKNTIMC[1];   /* Global Reaction Timer Period */
  uint8_t AON_FCCU_reserved1[316];
  SAFETYBASE_VFCCU_GFLTRC_tag GFLTRC[4];    /* Global Fault Recovery */
  uint8_t AON_FCCU_reserved2[2096];
  SAFETYBASE_VFCCU_GFLTOVDC_tag GFLTOVDC[4];    /* Global Fault Overflow Detection */
  uint8_t AON_FCCU_reserved3[112];
  AON_FCCU_GRKNTIMS_tag GRKNTIMS;      /* Global Reaction Timer Status */
  AON_FCCU_GCTRL_tag GCTRL;            /* Global Space Control */
  AON_FCCU_GINTOVFS_tag GINTOVFS;      /* Global DID FSM Status */
  uint8_t AON_FCCU_reserved4[4];
  AON_FCCU_GOVFRKC_tag GOVFRKC[1];     /* Global Overflow Reaction */
  uint8_t AON_FCCU_reserved5[12];
  AON_FCCU_GMEOUTDC_tag GMEOUTDC;      /* Global Minimum EOUT Duration */
  AON_FCCU_GEOUTTCT_tag GEOUTTCT;      /* Global EOUT Timer Disable */
  uint8_t AON_FCCU_reserved6[8];
  AON_FCCU_GLB_EOUT_tag GLB_EOUT[2];
  uint8_t AON_FCCU_reserved7[600];
  AON_FCCU_GDBGCFG_tag GDBGCFG;        /* Global Debug */
  AON_FCCU_GDBGSTAT_tag GDBGSTAT;      /* Global Debug Status */
  AON_FCCU_GDPFSTAT_tag GDPFSTAT;      /* Global Debug Pending Fault Status */
  AON_FCCU_GDALTRLD_tag GDALTRLD;      /* Global Debug Alternate Reload Status */
  uint8_t AON_FCCU_reserved8[1306688];
  AON_FCCU_FHCFG0_tag FHCFG0;          /* Fault Handler */
  AON_FCCU_FHSRVDS0_tag FHSRVDS0;      /* Fault Handler Status */
  uint8_t AON_FCCU_reserved9[8];
  SAFETYBASE_VFCCU_FHFLTENC_tag FHFLTENC[4]; /* Fault Enable */
  uint8_t AON_FCCU_reserved10[48];
  SAFETYBASE_VFCCU_FHFLTS_tag FHFLTS[4];    /* Fault Status */
  uint8_t AON_FCCU_reserved11[48];
  SAFETYBASE_VFCCU_FHFLTRKC_tag FHFLTRKC[32]; /* Fault Reaction Set Configuration */
  uint8_t AON_FCCU_reserved12[384];
  SAFETYBASE_VFCCU_FHRKC_tag FHRKC[8]; /* Reaction Configuration */
};

/* ============================================================================
   =============================== Module: EIM ============================
   ============================================================================ */

#define EIM_EICHD_WORDS_PER_CHANNEL (9U)                /* Maximum number ofWords per Error Injection Channel */
#define EIM_CHANNELS_COUNT          (32U)               /* Number of Error Injection Channels */

typedef union EIM_EIMCR_union_tag { /* Error Injection Module Configuration Register */
  vuint32_t R;
  struct {
    vuint32_t GEIEN:1;                 /* Global Error Injection Enable */
    vuint32_t _unused_0:31;            /* Reserved */
  } B;
} EIM_EIMCR_tag;

typedef union EIM_EICHEN_union_tag { /* Error Injection Channel Enable register */
  vuint32_t R;
  struct {
    vuint32_t EICH31EN:1;              /* Error Injection Channel 31 Enable */
    vuint32_t EICH30EN:1;              /* Error Injection Channel 30 Enable */
    vuint32_t EICH29EN:1;              /* Error Injection Channel 29 Enable */
    vuint32_t EICH28EN:1;              /* Error Injection Channel 28 Enable */
    vuint32_t EICH27EN:1;              /* Error Injection Channel 27 Enable */
    vuint32_t EICH26EN:1;              /* Error Injection Channel 26 Enable */
    vuint32_t EICH25EN:1;              /* Error Injection Channel 25 Enable */
    vuint32_t EICH24EN:1;              /* Error Injection Channel 24 Enable */
    vuint32_t EICH23EN:1;              /* Error Injection Channel 23 Enable */
    vuint32_t EICH22EN:1;              /* Error Injection Channel 22 Enable */
    vuint32_t EICH21EN:1;              /* Error Injection Channel 21 Enable */
    vuint32_t EICH20EN:1;              /* Error Injection Channel 20 Enable */
    vuint32_t EICH19EN:1;              /* Error Injection Channel 19 Enable */
    vuint32_t EICH18EN:1;              /* Error Injection Channel 18 Enable */
    vuint32_t EICH17EN:1;              /* Error Injection Channel 17 Enable */
    vuint32_t EICH16EN:1;              /* Error Injection Channel 16 Enable */
    vuint32_t EICH15EN:1;              /* Error Injection Channel 15 Enable */
    vuint32_t EICH14EN:1;              /* Error Injection Channel 14 Enable */
    vuint32_t EICH13EN:1;              /* Error Injection Channel 13 Enable */
    vuint32_t EICH12EN:1;              /* Error Injection Channel 12 Enable */
    vuint32_t EICH11EN:1;              /* Error Injection Channel 11 Enable */
    vuint32_t EICH10EN:1;              /* Error Injection Channel 10 Enable */
    vuint32_t EICH9EN:1;               /* Error Injection Channel 9 Enable */
    vuint32_t EICH8EN:1;               /* Error Injection Channel 8 Enable */
    vuint32_t EICH7EN:1;               /* Error Injection Channel 7 Enable */
    vuint32_t EICH6EN:1;               /* Error Injection Channel 6 Enable */
    vuint32_t EICH5EN:1;               /* Error Injection Channel 5 Enable */
    vuint32_t EICH4EN:1;               /* Error Injection Channel 4 Enable */
    vuint32_t EICH3EN:1;               /* Error Injection Channel 3 Enable */
    vuint32_t EICH2EN:1;               /* Error Injection Channel 2 Enable */
    vuint32_t EICH1EN:1;               /* Error Injection Channel 1 Enable */
    vuint32_t EICH0EN:1;               /* Error Injection Channel 0 Enable */
  } B;
} EIM_EICHEN_tag;

typedef struct EIM_EICHD_union_tag {
  vuint32_t WORD[EIM_EICHD_WORDS_PER_CHANNEL];    /* Error Injection Words */
  vuint8_t  EICHD_reserved0[28];
} EIM_EICHD_tag;

struct EIM_tag {
  EIM_EIMCR_tag EIMCR;             /* Error Injection Module Configuration Register */
  EIM_EICHEN_tag EICHEN;           /* Error Injection Channel Enable register */
  vuint8_t EIM_reserved0[248];
  EIM_EICHD_tag EICHD[EIM_CHANNELS_COUNT];
};

/* ============================================================================
   =============================== Module: SRAMCTL ============================
   ============================================================================
   * @usage: sCheck
*/

typedef union SRAMCTL_RAMCR_union_tag { /* RAM Control */
  vuint32_t R;
  struct {
    vuint32_t INIT:1;                  /* Initialization Request */
    vuint32_t IWS:2;                   /* Initialization Wait States */
    vuint32_t _unused_3:5;             /* Reserved */
    vuint32_t INIT_SYSA:1;             /* Initialize With System Address */
    vuint32_t _unused_9:23;            /* Reserved */
  } B;
} SRAMCTL_RAMCR_tag;

typedef union SRAMCTL_RAMIAS_union_tag { /* RAM Initialization Address Start */
  vuint32_t R;
  struct {
    vuint32_t IAS:32;                  /* Initialization Address Start */
  } B;
} SRAMCTL_RAMIAS_tag;

typedef union SRAMCTL_RAMIAE_union_tag { /* RAM Initialization Address End */
  vuint32_t R;
  struct {
    vuint32_t IAE:32;                  /* Initialization Address End */
  } B;
} SRAMCTL_RAMIAE_tag;

typedef union SRAMCTL_RAMSR_union_tag { /* RAM Status */
  vuint32_t R;
  struct {
    vuint32_t IDONE:1;                 /* Initialization Done */
    vuint32_t BUSERR:1;                /* Bus Error */
    vuint32_t IPEND:1;                 /* Initialization Pending */
    vuint32_t AVALID:1;                /* Addresses Valid */
    vuint32_t _unused_4:1;             /* Reserved */
    vuint32_t AERR:1;                  /* ECC Address Error */
    vuint32_t MLTERR:1;                /* ECC Multi-Bit Error */
    vuint32_t SGLERR:1;                /* ECC Single-Bit Error */
    vuint32_t SYND:8;                  /* ECC Syndrome Value */
    vuint32_t EINFO:8;                 /* Event Information */
    vuint32_t _unused_24:8;            /* Reserved */
  } B;
} SRAMCTL_RAMSR_tag;

typedef union SRAMCTL_RAMMEMA_union_tag { /* RAM ECC Address */
  vuint32_t R;
  struct {
    vuint32_t MEMA:17;                 /* RAM Bank Address */
    vuint32_t _unused_17:3;            /* Reserved */
    vuint32_t BANK:5;                  /* RAM Bank ID */
    vuint32_t _unused_25:7;            /* Reserved */
  } B;
} SRAMCTL_RAMMEMA_tag;

typedef union SRAMCTL_RAMSYSA_union_tag { /* RAM System Address */
  vuint32_t R;
  struct {
    vuint32_t SYSA:32;                 /* System Address */
  } B;
} SRAMCTL_RAMSYSA_tag;

typedef union SRAMCTL_RAMECCNT_union_tag { /* RAM Correctable Error Count */
  vuint32_t R;
  struct {
    vuint32_t ECCNT:8;                 /* ECC Correctable Error Count */
    vuint32_t _unused_8:24;            /* Reserved */
  } B;
} SRAMCTL_RAMECCNT_tag;

typedef union SRAMCTL_RAMEID0_union_tag { /* RAM Error Injection Data 0 */
  vuint32_t R;
  struct {
    vuint32_t EID_W0:32;               /* Error Injection Data Word 0 */
  } B;
} SRAMCTL_RAMEID0_tag;

typedef union SRAMCTL_RAMEID1_union_tag { /* RAM Error Injection Data 1 */
  vuint32_t R;
  struct {
    vuint32_t EID_W1:32;               /* Error Injection Data Word 1 */
  } B;
} SRAMCTL_RAMEID1_tag;

typedef union SRAMCTL_RAMEIDC_union_tag { /* RAM Error Injection Data Control */
  vuint32_t R;
  struct {
    vuint32_t EID_CKB:8;               /* Error Injection Data Checkbits */
    vuint32_t _unused_8:16;            /* Reserved */
    vuint32_t EIP_EN:1;                /* Error Injection Into Pipeline Enable */
    vuint32_t _unused_25:5;            /* Reserved */
    vuint32_t EIA_EN:1;                /* Error Injection Address Enable */
    vuint32_t EID_EN:1;                /* Error Injection Data Enable */
  } B;
} SRAMCTL_RAMEIDC_tag;

typedef union SRAMCTL_RAMEIA_union_tag { /* RAM Error Injection Base Address */
  vuint32_t R;
  struct {
    vuint32_t EIA:32;                  /* Error Injection Base Address */
  } B;
} SRAMCTL_RAMEIA_tag;

typedef union SRAMCTL_RAMEIAM_union_tag { /* RAM Error Injection Address Mask */
  vuint32_t R;
  struct {
    vuint32_t EIAM:32;                 /* Error Injection Address Mask */
  } B;
} SRAMCTL_RAMEIAM_tag;

typedef union SRAMCTL_RAMMAXA_union_tag { /* RAM Maximum-Value Address */
  vuint32_t R;
  struct {
    vuint32_t MAXA:32;                 /* Maximum Address */
  } B;
} SRAMCTL_RAMMAXA_tag;

typedef union SRAMCTL_RAMCR2_union_tag { /* RAM Control 2 */
  vuint32_t R;
  struct {
    vuint32_t PREF:1;                  /* Prefetch for Read Bursts */
    vuint32_t WBUF:2;                  /* Write Buffer Control */
    vuint32_t DEM:1;                   /* Disable Exclusive Monitor */
    vuint32_t _unused_4:28;            /* Reserved */
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
  vuint32_t R;
  struct {
    vuint32_t EA:16;                   /* Ending Address */
    vuint32_t SA:16;                   /* Starting Address */
  } B;
} DDR_DDRC_CS_BNDS_CS_BNDS_tag;

typedef struct DDR_DDRC_CS_BNDS_struct_tag {
  DDR_DDRC_CS_BNDS_CS_BNDS_tag CS_BNDS; /* Rank 0 Memory Bounds */
  uint8_t CS_BNDS_reserved0[4];
} DDR_DDRC_CS_BNDS_tag;

typedef union DDR_DDRC_REMAP_EXT_0_union_tag { /* Remap Extended Region 0 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_0_EA:8;          /* Region 0 Extended Ending Address */
    vuint32_t EXT_REG_0_SA:8;          /* Region 0 Extended Starting Address */
    vuint32_t REG_0_EXT_REMAP_ADDR:8;  /* Region 0 Extended Remap Starting Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_0_tag;

typedef union DDR_DDRC_REMAP_EXT_1_union_tag { /* Remap Extended Region 1 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_1_EA:8;          /* Region 1 Extended Ending Address */
    vuint32_t EXT_REG_1_SA:8;          /* Region 1 Extended Starting Address */
    vuint32_t REG_1_EXT_REMAP_ADDR:8;  /* Region 1 Extended Remap Starting Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_1_tag;

typedef union DDR_DDRC_REMAP_EXT_2_union_tag { /* Remap Extended Region 2 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_2_EA:8;          /* Region 2 Extended Ending Address */
    vuint32_t EXT_REG_2_SA:8;          /* Region 2 Extended Starting Address */
    vuint32_t REG_2_EXT_REMAP_ADDR:8;  /* Region 2 Extended Remap Starting Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_2_tag;

typedef union DDR_DDRC_REMAP_EXT_3_union_tag { /* Remap Extended Region 3 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_3_EA:8;          /* Region 3 Extended Ending Address */
    vuint32_t EXT_REG_3_SA:8;          /* Region 3 Extended Starting Address */
    vuint32_t REG_3_EXT_REMAP_ADDR:8;  /* Region 3 Extended Remap Starting Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_REMAP_EXT_3_tag;

typedef union DDR_DDRC_REMAP_0A_union_tag { /* Remap Region 0A Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_0_REMAP_ADDR:12;     /* Region 0 Remap Starting Address */
    vuint32_t _unused_1:19;
    vuint32_t REG_0_REMAP_EN:1;        /* Region 0 Remap Enable */
  } B;
} DDR_DDRC_REMAP_0A_tag;

typedef union DDR_DDRC_REMAP_0B_union_tag { /* Remap Region 0B Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_0_EA:12;             /* Region 0 Ending Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_0_SA:12;             /* Region 0 Starting Address */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_REMAP_0B_tag;

typedef union DDR_DDRC_REMAP_1A_union_tag { /* Remap Region 1A Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_1_REMAP_ADDR:12;     /* Region 1 Remap Starting Address */
    vuint32_t _unused_1:19;
    vuint32_t REG_1_REMAP_EN:1;        /* Region 1 Remap Enable */
  } B;
} DDR_DDRC_REMAP_1A_tag;

typedef union DDR_DDRC_REMAP_1B_union_tag { /* Remap Region 1B Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_1_EA:12;             /* Region 1 Ending Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_1_SA:12;             /* Region 1 Starting Address */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_REMAP_1B_tag;

typedef union DDR_DDRC_REMAP_2A_union_tag { /* Remap Region 2A Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_2_REMAP_ADDR:12;     /* Region 2 Remap Starting Address */
    vuint32_t _unused_1:19;
    vuint32_t REG_2_REMAP_EN:1;        /* Region 2 Remap Enable */
  } B;
} DDR_DDRC_REMAP_2A_tag;

typedef union DDR_DDRC_REMAP_2B_union_tag { /* Remap Region 2B Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_2_EA:12;             /* Region 2 Ending Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_2_SA:12;             /* Region 2 Starting Address */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_REMAP_2B_tag;

typedef union DDR_DDRC_REMAP_3A_union_tag { /* Remap Region 3A Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_3_REMAP_ADDR:12;     /* Region 3 Remap Starting Address */
    vuint32_t _unused_1:19;
    vuint32_t REG_3_REMAP_EN:1;        /* Region 3 Remap Enable */
  } B;
} DDR_DDRC_REMAP_3A_tag;

typedef union DDR_DDRC_REMAP_3B_union_tag { /* Remap Region 3B Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_3_EA:12;             /* Region 3 Ending Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_3_SA:12;             /* Region 3 Starting Address */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_REMAP_3B_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_0_union_tag { /* DDRC Address Decode 0 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t ROW14_OVRD:6;            /* Row 14 Override */
    vuint32_t _unused_22:2;
    vuint32_t ROW15_OVRD:6;            /* Row 15 Override */
    vuint32_t _unused_14:2;
    vuint32_t ROW16_OVRD:6;            /* Row 16 Override */
    vuint32_t _unused_6:2;
    vuint32_t ROW17_OVRD:6;            /* Row 17 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_0_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_1_union_tag { /* DDRC Address Decode 1 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t ROW10_OVRD:6;            /* Row 10 Override */
    vuint32_t _unused_22:2;
    vuint32_t ROW11_OVRD:6;            /* Row 11 Override */
    vuint32_t _unused_14:2;
    vuint32_t ROW12_OVRD:6;            /* Row 12 Override */
    vuint32_t _unused_6:2;
    vuint32_t ROW13_OVRD:6;            /* Row 13 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_1_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_2_union_tag { /* DDRC Address Decode 2 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t ROW6_OVRD:6;             /* Row 6 Override */
    vuint32_t _unused_22:2;
    vuint32_t ROW7_OVRD:6;             /* Row 7 Override */
    vuint32_t _unused_14:2;
    vuint32_t ROW8_OVRD:6;             /* Row 8 Override */
    vuint32_t _unused_6:2;
    vuint32_t ROW9_OVRD:6;             /* Row 9 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_2_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_3_union_tag { /* DDRC Address Decode 3 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t ROW2_OVRD:6;             /* Row 2 Override */
    vuint32_t _unused_22:2;
    vuint32_t ROW3_OVRD:6;             /* Row 3 Override */
    vuint32_t _unused_14:2;
    vuint32_t ROW4_OVRD:6;             /* Row 4 Override */
    vuint32_t _unused_6:2;
    vuint32_t ROW5_OVRD:6;             /* Row 5 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_3_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_4_union_tag { /* DDRC Address Decode 4 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t COL9_OVRD:6;             /* Col 9 Override */
    vuint32_t _unused_22:2;
    vuint32_t COL10_OVRD:6;            /* Col 10 Override */
    vuint32_t _unused_14:2;
    vuint32_t ROW0_OVRD:6;             /* Row 0 Override */
    vuint32_t _unused_6:2;
    vuint32_t ROW1_OVRD:6;             /* Row 1 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_4_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_5_union_tag { /* DDRC Address Decode 5 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t COL5_OVRD:6;             /* Col 5 Override */
    vuint32_t _unused_22:2;
    vuint32_t COL6_OVRD:6;             /* Col 6 Override */
    vuint32_t _unused_14:2;
    vuint32_t COL7_OVRD:6;             /* Col 7 Override */
    vuint32_t _unused_6:2;
    vuint32_t COL8_OVRD:6;             /* Col 8 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_5_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_6_union_tag { /* DDRC Address Decode 6 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t COL1_OVRD:6;             /* Col 1 Override */
    vuint32_t _unused_22:2;
    vuint32_t COL2_OVRD:6;             /* Col 2 Override */
    vuint32_t _unused_14:2;
    vuint32_t COL3_OVRD:6;             /* Col 3 Override */
    vuint32_t _unused_6:2;
    vuint32_t COL4_OVRD:6;             /* Col 4 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_6_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_7_union_tag { /* DDRC Address Decode 7 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t CID1_OVRD:6;             /* CID 1 Override */
    vuint32_t _unused_22:2;
    vuint32_t BA0_OVRD:6;              /* Bank 0 Override */
    vuint32_t _unused_14:2;
    vuint32_t BA1_OVRD:6;              /* Bank 1 Override */
    vuint32_t _unused_6:2;
    vuint32_t COL0_OVRD:6;             /* Col 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_7_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_8_union_tag { /* DDRC Address Decode 8 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t BG1_OVRD:6;              /* Bank Group 1 Override */
    vuint32_t _unused_22:2;
    vuint32_t CS0_OVRD:6;              /* Interleaved Rank 0 Override */
    vuint32_t _unused_14:2;
    vuint32_t CS1_OVRD:6;              /* Interleaved Rank 1 Override */
    vuint32_t _unused_6:2;
    vuint32_t CID0_OVRD:6;             /* CID 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_8_tag;

typedef union DDR_DDRC_DDR_ADDR_DEC_9_union_tag { /* DDRC Address Decode 9 */
  vuint32_t R;
  struct {
    vuint32_t ADDR_DEC_OVRD:1;         /* Address Decode Override */
    vuint32_t _unused_6:25;
    vuint32_t BG0_OVRD:6;              /* Bank Group 0 Override */
  } B;
} DDR_DDRC_DDR_ADDR_DEC_9_tag;

typedef union DDR_DDRC_CS_CONFIG_union_tag { /* Rank 0 Configuration */
  vuint32_t R;
  struct {
    vuint32_t COL_BITS_CS:3;           /* Column Bits */
    vuint32_t _unused_28:1;
    vuint32_t BG_BITS_CS:2;            /* Bank Group Bits */
    vuint32_t _unused_24:2;
    vuint32_t ROW_BITS_CS:3;           /* Row Bits */
    vuint32_t _unused_16:5;
    vuint32_t ODT_WR_CFG:3;            /* ODT Write Configuration */
    vuint32_t _unused_12:1;
    vuint32_t ODT_RD_CFG:3;            /* ODT Read Configuration */
    vuint32_t AP_EN:1;                 /* Auto-Precharge Enable */
    vuint32_t INTLV_CTL:4;             /* Interleaving Control */
    vuint32_t _unused_3:1;
    vuint32_t INTLV_EN:2;              /* Interleaving Enable */
    vuint32_t CS_EN:1;                 /* Rank Enable */
  } B;
} DDR_DDRC_CS_CONFIG_tag;

typedef union DDR_DDRC_TIMING_CFG_3_union_tag { /* DDR SDRAM Timing Configuration 3 */
  vuint32_t R;
  struct {
    vuint32_t EXT_WRTORD:1;            /* Extended Write-To-Read Time */
    vuint32_t EXT_ACTTOACT:1;          /* Extended Activate-To-Activate Time */
    vuint32_t SPARE_CNFG:1;            /* Spare Config */
    vuint32_t EXT_FOUR_ACT:1;          /* Extended Four Activate */
    vuint32_t EXT_CKE_PLS:2;           /* Extended MCKE Pulse */
    vuint32_t _unused_24:2;
    vuint32_t EXT_WRREC:3;             /* Extended Write Recovery */
    vuint32_t EXT_WR_LAT_2:1;          /* Extended Write Latency 2 */
    vuint32_t EXT_CASLAT:3;            /* Extended CAS Latency */
    vuint32_t _unused_16:1;
    vuint32_t EXT_REFREC:6;            /* Extended Refresh Recovery */
    vuint32_t EXT_ACTTORW:2;           /* Extended Activate To Read Or Write Time */
    vuint32_t EXT_ACTTOPRE:3;          /* Extended Activate-To-Precharge Time */
    vuint32_t _unused_4:1;
    vuint32_t EXT_PRETOACT:2;          /* Extended Precharge-To-Activate Time */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_3_tag;

typedef union DDR_DDRC_TIMING_CFG_0_union_tag { /* DDR SDRAM Timing Configuration 0 */
  vuint32_t R;
  struct {
    vuint32_t MRS_CYC:6;               /* MRW Cycle Time */
    vuint32_t _unused_20:6;
    vuint32_t EXT_ACT_PD_EXIT:1;       /* Extended Active Power-Down Exit */
    vuint32_t _unused_18:1;
    vuint32_t EXT_PRE_PD_EXIT:2;       /* Extended Precharge Power-Down Exit */
    vuint32_t PRE_PD_EXIT:4;           /* Precharge Power-Down Exit */
    vuint32_t ACT_PD_EXIT:4;           /* Active Powerdown Exit */
    vuint32_t WWT:2;                   /* Write-To-Write Turnaround To Different Ranks */
    vuint32_t RRT:2;                   /* Read-To-Read Turnaround To Different Ranks */
    vuint32_t WRT:2;                   /* Write-To-Read Turnaround To Different Ranks */
    vuint32_t RWT:2;                   /* Read-To-Write Turnaround To Different Ranks */
  } B;
} DDR_DDRC_TIMING_CFG_0_tag;

typedef union DDR_DDRC_TIMING_CFG_1_union_tag { /* DDR SDRAM Timing Configuration 1 */
  vuint32_t R;
  struct {
    vuint32_t WRTORD:4;                /* Write-To-Read Interval */
    vuint32_t ACTTOACT:4;              /* Activate-To-Activate Interval */
    vuint32_t WRREC:4;                 /* Write Recovery */
    vuint32_t REFREC:4;                /* Refresh Recovery */
    vuint32_t _unused_15:1;
    vuint32_t CASLAT:3;                /* CAS Latency */
    vuint32_t ACTTORW:4;               /* Activate To Read Or Write */
    vuint32_t ACTTOPRE:4;              /* Activate-To-Precharge Time */
    vuint32_t PRETOACT:4;              /* Precharge-To-Activate Time */
  } B;
} DDR_DDRC_TIMING_CFG_1_tag;

typedef union DDR_DDRC_TIMING_CFG_2_union_tag { /* DDR SDRAM Timing Configuration 2 */
  vuint32_t R;
  struct {
    vuint32_t FOUR_ACT:6;              /* Four Activate */
    vuint32_t CKE_PLS:3;               /* MCKE Pulse */
    vuint32_t _unused_19:4;
    vuint32_t RD_TO_PRE:5;             /* Read-To-Precharge Time */
    vuint32_t EXT_WR_LAT:1;            /* Extended Write Latency */
    vuint32_t WR_LAT:4;                /* Write Latency */
    vuint32_t _unused_4:5;
    vuint32_t DERATE_VAL:4;            /* Derate Value */
  } B;
} DDR_DDRC_TIMING_CFG_2_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_union_tag { /* DDR SDRAM Control Configuration */
  vuint32_t R;
  struct {
    vuint32_t BI:1;                    /* Bypass Initialization */
    vuint32_t MEM_HALT:1;              /* DDRC Halt */
    vuint32_t RSRVD:1;                 /* Reserved. Should be written to 0. */
    vuint32_t _unused_28:1;
    vuint32_t _unused_24:4;
    vuint32_t BA_INTLV_CTL:7;          /* Rank interleaving control. */
    vuint32_t _unused_16:1;
    vuint32_t DC_EN:1;                 /* Dual Channel Enable */
    vuint32_t _unused_14:1;
    vuint32_t _unused_13:1;
    vuint32_t DBW:2;                   /* DDR SDRAM Data Bus Width */
    vuint32_t DYN_PWR:1;               /* Dynamic Power Management */
    vuint32_t _unused_8:2;
    vuint32_t SDRAM_TYPE:3;            /* DDR SDRAM Type */
    vuint32_t _unused_4:1;
    vuint32_t RD_EN:1;                 /* Registered DIMM Enable */
    vuint32_t _unused_2:1;
    vuint32_t SREN:1;                  /* Self-Refresh Enable */
    vuint32_t MEM_EN:1;                /* DDRC Enable */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_2_union_tag { /* DDR SDRAM Control Configuration 2 */
  vuint32_t R;
  struct {
    vuint32_t SPARE_CNFG:1;            /* Spare Config */
    vuint32_t _unused_30:1;
    vuint32_t _unused_29:1;
    vuint32_t SPARE_CNFG2:1;           /* Spare Config */
    vuint32_t D_INIT:1;                /* DDR SDRAM Data Initialization */
    vuint32_t SPARE_CNFG3:2;           /* Spare Config */
    vuint32_t _unused_24:1;
    vuint32_t RSRVD:1;                 /* Reserved. Must be written to 0. */
    vuint32_t QD_EN:1;                 /* Quad-Rank Enable */
    vuint32_t _unused_21:1;
    vuint32_t _unused_20:1;
    vuint32_t NUM_PR:4;                /* Number Of Posted Refreshes */
    vuint32_t _unused_11:5;
    vuint32_t _unused_10:1;
    vuint32_t MT_RR_EN:1;              /* Memory Test Round-Robin Enable */
    vuint32_t _unused_8:1;
    vuint32_t MCK_DIS:4;               /* MCK Disable */
    vuint32_t _unused_2:2;
    vuint32_t _unused_1:1;
    vuint32_t FRC_SR:1;                /* Force Self-Refresh */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_2_tag;

typedef union DDR_DDRC_DDR_SDRAM_MD_CNTL_union_tag { /* DDR SDRAM Mode Control */
  vuint32_t R;
  struct {
    vuint32_t MD_VALUE:18;             /* Mode Register Value */
    vuint32_t _unused_13:1;
    vuint32_t _unused_12:1;
    vuint32_t CKE_CNTL:2;              /* Clock Enable Control */
    vuint32_t START_OSC:1;             /* Start Oscillator */
    vuint32_t START_OSC2:1;            /* Start Oscillator 2 */
    vuint32_t MD_SEL:4;                /* Mode Register Select */
    vuint32_t CS_SEL:3;                /* Select Rank */
    vuint32_t MD_EN:1;                 /* Mode Enable */
  } B;
} DDR_DDRC_DDR_SDRAM_MD_CNTL_tag;

typedef union DDR_DDRC_DDR_SDRAM_INTERVAL_union_tag { /* DDR SDRAM Interval Configuration */
  vuint32_t R;
  struct {
    vuint32_t BSTOPRE:14;              /* Precharge Interval */
    vuint32_t _unused_16:2;
    vuint32_t REFINT:16;               /* Refresh Interval */
  } B;
} DDR_DDRC_DDR_SDRAM_INTERVAL_tag;

typedef union DDR_DDRC_DDR_DATA_INIT_union_tag { /* DDR SDRAM Data Initialization */
  vuint32_t R;
  struct {
    vuint32_t INIT_VALUE:32;           /* Initialization Value */
  } B;
} DDR_DDRC_DDR_DATA_INIT_tag;

typedef union DDR_DDRC_TIMING_CFG_4_union_tag { /* DDR SDRAM Timing Configuration 4 */
  vuint32_t R;
  struct {
    vuint32_t DLL_LOCK:2;              /* DDR SDRAM DLL Lock Time */
    vuint32_t _unused_28:2;
    vuint32_t EXT_REFINT:1;            /* Extended Refresh Interval */
    vuint32_t _unused_24:3;
    vuint32_t EXT_WWT:2;               /* Extended Write-To-Write Turnaround */
    vuint32_t EXT_RRT:2;               /* Extended Read-To-Read Turnaround */
    vuint32_t EXT_WRT:2;               /* Extended Write-To-Read Turnaround */
    vuint32_t EXT_RWT:2;               /* Extended Read-To-Write Turnaround */
    vuint32_t WWT:4;                   /* Write-To-Write Turnaround For Same Rank */
    vuint32_t RRT:4;                   /* Read-To-Read Turnaround For Same Rank */
    vuint32_t WRT:4;                   /* Write-To-Read Turnaround For Same Rank */
    vuint32_t RWT:4;                   /* Read-To-Write Turnaround For Same Rank */
  } B;
} DDR_DDRC_TIMING_CFG_4_tag;

typedef union DDR_DDRC_TIMING_CFG_5_union_tag { /* DDR SDRAM Timing Configuration 5 */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;
    vuint32_t _unused_21:3;
    vuint32_t _unused_20:1;
    vuint32_t _unused_15:5;
    vuint32_t _unused_12:3;
    vuint32_t _unused_9:3;
    vuint32_t _unused_8:1;
    vuint32_t _unused_3:5;
    vuint32_t _unused_0:3;
  } B;
} DDR_DDRC_TIMING_CFG_5_tag;

typedef union DDR_DDRC_TIMING_CFG_7_union_tag { /* DDR SDRAM Timing Configuration 7 */
  vuint32_t R;
  struct {
    vuint32_t _unused_28:4;
    vuint32_t WR_ADJ:3;                /* Write Adjustment */
    vuint32_t RSRVD_1:1;               /* Reserved. */
    vuint32_t _unused_16:8;
    vuint32_t RD_ADJ:3;                /* Read Adjustment */
    vuint32_t RSRVD:1;                 /* Reserved. */
    vuint32_t CKSRX:4;                 /* Clock After Self-Refresh Exit */
    vuint32_t CKSRE:4;                 /* Clock After Self-Refresh Entry */
    vuint32_t CKE_RST:2;               /* MCKE Reset Time */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_7_tag;

typedef union DDR_DDRC_DDR_ZQ_CNTL_union_tag { /* DDR SDRAM ZQ Calibration Control */
  vuint32_t R;
  struct {
    vuint32_t ZQCS_INT:4;              /* ZQCS Interval */
    vuint32_t _unused_24:4;
    vuint32_t ZQCS:4;                  /* ZQ Calibration Short Time */
    vuint32_t _unused_16:4;
    vuint32_t ZQOPER:4;                /* ZQ Calibration Operation Time */
    vuint32_t _unused_8:4;
    vuint32_t ZQINIT:4;                /* ZQ Calibration Initialization Time */
    vuint32_t _unused_1:3;
    vuint32_t ZQ_EN:1;                 /* ZQ Calibration Enable */
  } B;
} DDR_DDRC_DDR_ZQ_CNTL_tag;

typedef union DDR_DDRC_DDR_SR_CNTR_union_tag { /* DDR SDRAM Self-Refresh Counter */
  vuint32_t R;
  struct {
    vuint32_t _unused_16:16;
    vuint32_t SR_IT:4;                 /* Self-Refresh Idle Threshold */
    vuint32_t _unused_0:12;
  } B;
} DDR_DDRC_DDR_SR_CNTR_tag;

typedef union DDR_DDRC_TIMING_CFG_8_union_tag { /* DDR SDRAM Timing Configuration 8 */
  vuint32_t R;
  struct {
    vuint32_t PRE_ALL_REC:6;           /* Precharge All-To-Activate Interval */
    vuint32_t _unused_25:1;
    vuint32_t EXT_WRTORD_BG:1;         /* Extended Write-To-Read Same Bank Group */
    vuint32_t WRTORD_BG:4;             /* Write-To-Read Same Bank Group */
    vuint32_t ACTTOACT_BG:4;           /* Activate-To-Activate Same Bank Group */
    vuint32_t WWT_BG:4;                /* Write-To-Write Turnaround For Same CS And Bank Group */
    vuint32_t RRT_BG:4;                /* Read-To-Read Turnaround For Same Rank And Bank Group */
    vuint32_t WRT_BG:4;                /* Write-To-Read Turnaround For Same Rank And Bank Group */
    vuint32_t RWT_BG:4;                /* Read-To-Write Turnaround For Same Rank And Bank Group */
  } B;
} DDR_DDRC_TIMING_CFG_8_tag;

typedef union DDR_DDRC_TIMING_CFG_9_union_tag { /* DDR SDRAM timing configuration 9 */
  vuint32_t R;
  struct {
    vuint32_t REFTOREF_PB:10;          /* Refresh-to-refresh interval for per-bank refresh. */
    vuint32_t SPARE_CNFG:2;            /* Spare Config */
    vuint32_t _unused_16:4;
    vuint32_t REFREC_PB:10;            /* Refresh Recovery Per-Bank Refresh */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_9_tag;

typedef union DDR_DDRC_TIMING_CFG_10_union_tag { /* DDR SDRAM Timing Configuration 10 */
  vuint32_t R;
  struct {
    vuint32_t T_STAB:15;               /* Stabilization Wait Time */
    vuint32_t _unused_9:8;
    vuint32_t PBRTOACT:5;              /* Per-Bank Refresh to Activate */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_TIMING_CFG_10_tag;

typedef union DDR_DDRC_TIMING_CFG_11_union_tag { /* DDR SDRAM Timing Configuration 11 */
  vuint32_t R;
  struct {
    vuint32_t MWWT:4;                  /* Masked Write-To-Write Turnaround (tCCDMW) */
    vuint32_t _unused_24:4;
    vuint32_t PRE_TO_PRE:4;            /* Precharge-To-Precharge Time */
    vuint32_t _unused_16:4;
    vuint32_t WCKEN_FS:4;              /* WCKEN FS Time */
    vuint32_t WCK_STOP:4;              /* WCK Stop Time */
    vuint32_t WS_OFF:3;                /* WS_OFF Wait Time */
    vuint32_t RSRVD:1;                 /* Reserved. Should be written to 0. */
    vuint32_t WCKPRE_STATIC:4;         /* WCKPRE Static Time */
  } B;
} DDR_DDRC_TIMING_CFG_11_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_3_union_tag { /* DDR SDRAM Control Configuration 3 */
  vuint32_t R;
  struct {
    vuint32_t DIS_MR13:1;              /* Disable MR13 Write for Self Refresh */
    vuint32_t SR_FAST_WK_EN:1;         /* Self Refresh Fast Wakeup Enable */
    vuint32_t RSRVD:1;                 /* Reserved. Should be written to 0. */
    vuint32_t NON_PWR_2:1;             /* Non Power of 2 Enable */
    vuint32_t SR_PD_EN:1;              /* Self Refresh Powerdown Enable */
    vuint32_t DIS_MR28:1;              /* Disable MR28 Write for Self Refresh */
    vuint32_t _unused_25:1;
    vuint32_t DYN_REF_RATE_EN:1;       /* Dynamic Refresh Rate Enable */
    vuint32_t REF_MODE:2;              /* Refresh Mode */
    vuint32_t _unused_21:1;
    vuint32_t DRAIN_FOR_SR:1;          /* Drain Queues For Self-Refresh */
    vuint32_t DM_CFG:3;                /* Data Mask Configuration */
    vuint32_t _unused_16:1;
    vuint32_t CHB_SWP_EN:1;            /* Channel B Swap Enable */
    vuint32_t CHA_SWP_EN:1;            /* Channel A Swap Enable */
    vuint32_t TRM_EN:1;                /* Targeted Refresh Management */
    vuint32_t HP_EN:1;                 /* High Performance Enable */
    vuint32_t CMD_QUEUE_DPTH:2;        /* Command Queue Depth. */
    vuint32_t _unused_8:2;
    vuint32_t ECC_SCRUB_INT:4;         /* ECC Scrubbing Interval */
    vuint32_t _unused_2:2;
    vuint32_t ECC_FIX_EN:1;            /* ECC Fixing Enable */
    vuint32_t DDRC_RST:1;              /* DDRC Reset */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_3_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_4_union_tag { /* DDR SDRAM Control Configuration 4 */
  vuint32_t R;
  struct {
    vuint32_t BLK_RD_WR:3;             /* Block Read-To-Write. */
    vuint32_t BLK_WR_RD:3;             /* Block Write-To-Read. */
    vuint32_t BLK_RD_RD:3;             /* Block Read-To-Read. */
    vuint32_t BLK_WR_WR:3;             /* Block Write-To-Write. */
    vuint32_t DFI_FREQ:5;              /* DFI Frequency. */
    vuint32_t DFI_FREQ_HS:5;           /* DFI Frequency */
    vuint32_t _unused_8:2;
    vuint32_t DFI_FREQ_FSP:2;          /* DFI Frequency FSP. */
    vuint32_t _unused_4:2;
    vuint32_t DFI_WAKEUP:4;            /* DFI Wakeup. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_4_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_5_union_tag { /* DDR SDRAM Control Configuration 5 */
  vuint32_t R;
  struct {
    vuint32_t LNK_ECC_EN:1;            /* Link ECC enable. */
    vuint32_t DSLP_EN:1;               /* Deep sleep enable. */
    vuint32_t _unused_24:6;
    vuint32_t WCK_DYN:1;               /* WCK Dynamic Mode. */
    vuint32_t _unused_8:15;
    vuint32_t MED_PRIO:4;              /* Medium Priority Level. */
    vuint32_t HIGH_PRIO:4;             /* High Priority Level. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_5_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_6_union_tag { /* DDR SDRAM Control Configuration 6 */
  vuint32_t R;
  struct {
    vuint32_t MR28_VAL:6;              /* MR28 Value. */
    vuint32_t RRO:1;                   /* Refresh rate option. */
    vuint32_t FRC_DFI_INIT:1;          /* Force dfi_init_start low. */
    vuint32_t ALT_TRN_INT:4;           /* Force dfi_init_start low. */
    vuint32_t ADDR_SZL_EN:1;           /* Address swizzle enable. */
    vuint32_t RD_SPLT_EN:1;            /* Read split enable. */
    vuint32_t SRE_DIS:1;               /* Self refresh entry disable. */
    vuint32_t IECC_PERF_EN:1;          /* Inline ECC performance enable. */
    vuint32_t RH_REF_SUB:3;            /* Row hammer refresh subtract value. */
    vuint32_t RH_THRSHLD3:3;           /* Row hammer threshold 3 value. */
    vuint32_t RH_THRSHLD2:3;           /* Row hammer threshold 2 value. */
    vuint32_t RH_THRSHLD1:3;           /* Row hammer threshold 1 value. */
    vuint32_t RH_CYC_RST:3;            /* Row hammer cycle reset value. */
    vuint32_t LP5_RFM_EN:1;            /* LPDDR5 refresh management enable. */
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_6_tag;

typedef union DDR_DDRC_DDR_SDRAM_MD_CNTL2_union_tag { /* DDR SDRAM mode control 2 */
  vuint32_t R;
  struct {
    vuint32_t DQ_CNTL:18;              /* Data control. */
    vuint32_t MPRR_RD_SEL:2;           /* MPRR read select. */
    vuint32_t PDA_EN:1;                /* Per DDR SDRAM Addressability Enable. */
    vuint32_t _unused_3:8;
    vuint32_t NOP_EN:1;                /* NOP Enable. */
    vuint32_t MPRW:1;                  /* Multi-purpose register write. */
    vuint32_t MPRR:1;                  /* Multi-purpose register read. */
  } B;
} DDR_DDRC_DDR_SDRAM_MD_CNTL2_tag;

typedef union DDR_DDRC_DDR_SDRAM_CFG_7_union_tag { /* DDR SDRAM Control Configuration 7 */
  vuint32_t R;
  struct {
    vuint32_t UPD_INT:3;               /* Update interval. */
    vuint32_t _unused_28:1;
    vuint32_t BYP_DIS:1;               /* Bypass Disable. */
    vuint32_t _unused_16:11;
    vuint32_t RCOV:6;                  /* Read Collision Override Value. */
    vuint32_t RCOE:1;                  /* Read Collision Override Enable. */
    vuint32_t _unused_8:1;
    vuint32_t RBOV:6;                  /* Read Block Override Value. */
    vuint32_t RBOE:1;                  /* Read Block Override Enable. */
    vuint32_t _unused_0:1;
  } B;
} DDR_DDRC_DDR_SDRAM_CFG_7_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR1_union_tag { /* DDR SDRAM multi-purpose register 1 */
  vuint32_t R;
  struct {
    vuint32_t MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR1_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR2_union_tag { /* DDR SDRAM multi-purpose register 2 */
  vuint32_t R;
  struct {
    vuint32_t MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR2_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR3_union_tag { /* DDR SDRAM multi-purpose register 3 */
  vuint32_t R;
  struct {
    vuint32_t MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR3_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR4_union_tag { /* DDR SDRAM multi-purpose register 4 */
  vuint32_t R;
  struct {
    vuint32_t MPR_READ:32;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR4_tag;

typedef union DDR_DDRC_DDR_SDRAM_MPR5_union_tag { /* DDR SDRAM multi-purpose register 5 */
  vuint32_t R;
  struct {
    vuint32_t MPR_VLD:1;               /* MPR Valid. */
    vuint32_t _unused_16:15;
    vuint32_t MPR_READ:16;             /* MPR Read Value. */
  } B;
} DDR_DDRC_DDR_SDRAM_MPR5_tag;

typedef union DDR_DDRC_DDR_SDRAM_REF_RATE_union_tag { /* DDR Refresh Rate */
  vuint32_t R;
  struct {
    vuint32_t REF_RATE_CS1:8;          /* Refresh Rate Rank 1 */
    vuint32_t REF_RATE_CS0:8;          /* Refresh Rate Rank 0 */
    vuint32_t REF_RATE_CS1_CHB:8;      /* Refresh Rate Rank 1 */
    vuint32_t REF_RATE_CS0_CHB:8;      /* Refresh Rate Rank 0 */
  } B;
} DDR_DDRC_DDR_SDRAM_REF_RATE_tag;

typedef union DDR_DDRC_TIMING_CFG_12_union_tag { /* DDR SDRAM Timing Configuration 12 */
  vuint32_t R;
  struct {
    vuint32_t CASLAT_HS:6;             /* CAS Latency For Half Speed */
    vuint32_t _unused_24:2;
    vuint32_t ACTTORW_HS:6;            /* Activate To Read Or Write For Half Speed */
    vuint32_t _unused_16:2;
    vuint32_t ACTTOPRE_HS:7;           /* Activate-To-Precharge Time For Half Speed */
    vuint32_t _unused_8:1;
    vuint32_t PRETOACT_HS:6;           /* Precharge-To-Activate Time For Half Speed */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_12_tag;

typedef union DDR_DDRC_TIMING_CFG_13_union_tag { /* DDR SDRAM Timing Configuration 13 */
  vuint32_t R;
  struct {
    vuint32_t ACTTOACT_HS:5;           /* Activate-To-Activate Interval For Half Speed */
    vuint32_t _unused_24:3;
    vuint32_t WRREC_HS:6;              /* Write Recovery For Half Speed */
    vuint32_t _unused_16:2;
    vuint32_t REFREC_HS:10;            /* Refresh Recovery For Half Speed */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_13_tag;

typedef union DDR_DDRC_TIMING_CFG_14_union_tag { /* DDR SDRAM Timing Configuration 14 */
  vuint32_t R;
  struct {
    vuint32_t REFINT_HS:17;            /* Refresh Interval For Half Speed */
    vuint32_t _unused_14:1;
    vuint32_t RD_TO_PRE_HS:5;          /* Read-To-Precharge Time For Half Speed */
    vuint32_t _unused_8:1;
    vuint32_t WRLAT_HS:6;              /* Write Latency For Half Speed */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_TIMING_CFG_14_tag;

typedef union DDR_DDRC_TIMING_CFG_15_union_tag { /* DDR SDRAM Timing Configuration 15 */
  vuint32_t R;
  struct {
    vuint32_t REFTOREF_PB_HS:10;       /* Refresh-to-refresh interval for per-bank refresh. */
    vuint32_t _unused_20:2;
    vuint32_t _unused_16:4;
    vuint32_t REFREC_PB_HS:10;         /* Refresh Recovery During Per-Bank Refresh. */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_TIMING_CFG_15_tag;

typedef union DDR_DDRC_TIMING_CFG_16_union_tag { /* DDR SDRAM Timing Configuration 16 */
  vuint32_t R;
  struct {
    vuint32_t T_STAB_HS:15;            /* Stabilization Wait Time at Half Speed */
    vuint32_t LNK_ECC_EN_HS:1;         /* Link ECC Enable at Half Speed. */
    vuint32_t WCK_CNFGS_HS:16;         /* WCK Configuration Settings at Half Speed */
  } B;
} DDR_DDRC_TIMING_CFG_16_tag;

typedef union DDR_DDRC_TIMING_CFG_17_union_tag { /* DDR SDRAM Timing Configuration 17 */
  vuint32_t R;
  struct {
    vuint32_t ZQCS_INT_HS:4;           /* ZQCS Interval */
    vuint32_t _unused_24:4;
    vuint32_t ZQCS_HS:4;               /* ZQ Calibration Short Time */
    vuint32_t _unused_16:4;
    vuint32_t ZQOPER_HS:4;             /* ZQ Calibration Operation Time */
    vuint32_t _unused_8:4;
    vuint32_t ZQINIT_HS:4;             /* ZQ Calibration Initialization Time */
    vuint32_t _unused_0:4;
  } B;
} DDR_DDRC_TIMING_CFG_17_tag;

typedef union DDR_DDRC_TX_CFG_1_union_tag { /* Transaction Configuration Register 1 */
  vuint32_t R;
  struct {
    vuint32_t WWATER:4;                /* Write Watermark. */
    vuint32_t REAP_BLOCK_DIS:1;        /* Read Estimated Activate to Precharge Block Disable. */
    vuint32_t WEAP_BLOCK_DIS:1;        /* Write Estimated Activate to Precharge Block Disable. */
    vuint32_t NO_COS:1;                /* No Quality of Service. This field allows you to ignore the QOS value received by the DDR controller such that only one priority is used. */
    vuint32_t TS_DEPTH:5;              /* Transaction Scheduler Depth */
    vuint32_t RD_URG_DIS:1;            /* Disable read urgent mode capability */
    vuint32_t WR_URG_DIS:1;            /* Disable write urgent mode capability */
    vuint32_t _unused_17:1;
    vuint32_t RSRV_RDWR:1;             /* Reserve Read and Write Entries. */
    vuint32_t DYN_RSRV_EN:1;           /* Dynamic Reservation Enable */
    vuint32_t RDFC_DIS:1;              /* Read Data Flow Control Disabled. */
    vuint32_t NRM_OCC:2;               /* Normal Occupancy. */
    vuint32_t BAD_DD:1;                /* Bad Dropdown. */
    vuint32_t HPR:1;                   /* High Priority Read. */
    vuint32_t RT_PLS_EN:1;             /* Real-time Urgent Pulse Mode Enable. */
    vuint32_t _unused_8:1;
    vuint32_t INF_WR_CNT:1;            /* Infinite Write Count. */
    vuint32_t INF_RD_CNT:1;            /* Infinite Read Count. */
    vuint32_t LT_REOD_DIS:1;           /* Large Transaction Reorder Disable. */
    vuint32_t _unused_4:1;
    vuint32_t SER:1;                   /* Serialize. */
    vuint32_t _unused_2:1;
    vuint32_t HWA_EN:1;                /* Hardware Assert Enable. */
    vuint32_t _unused_0:1;
  } B;
} DDR_DDRC_TX_CFG_1_tag;

typedef union DDR_DDRC_TX_CFG_2_union_tag { /* Transaction Configuration Register 2 */
  vuint32_t R;
  struct {
    vuint32_t WR_BONUS:5;              /* Write Bandwidth Bonus Count. */
    vuint32_t RSRVD_4:3;               /* Reserved. */
    vuint32_t WR_CNT:5;                /* Write Bandwidth Count. */
    vuint32_t RSRVD_3:3;               /* Reserved. */
    vuint32_t RD_BONUS:5;              /* Read Bandwidth Bonus Count. */
    vuint32_t RSRVD_2:3;               /* Reserved. */
    vuint32_t RD_CNT:5;                /* Read Bandwidth Count. */
    vuint32_t RT_OPT_DIS:1;            /* Real Time Traffic Optimizaiton Disable. */
    vuint32_t RD_EPA_DIS:1;            /* Read Precharge to Activate Disable. */
    vuint32_t WR_EPA_DIS:1;            /* Write Precharge to Activate Disable. */
  } B;
} DDR_DDRC_TX_CFG_2_tag;

typedef union DDR_DDRC_TX_CFG_3_union_tag { /* Transaction Configuration Register 3. */
  vuint32_t R;
  struct {
    vuint32_t RSRVD_4:3;               /* Reserved. */
    vuint32_t RMED_BDD:5;              /* Read Medium Bonus Dropdown. */
    vuint32_t RSRVD_3:3;               /* Reserved. */
    vuint32_t RHI_BDD:5;               /* Read High Bonus Dropdown. */
    vuint32_t RSRVD_2:3;               /* Reserved. */
    vuint32_t RMED_DD:5;               /* Read Medium Dropdown. */
    vuint32_t RSRVD_1:3;               /* Reserved. */
    vuint32_t RHI_DD:5;                /* Read High Dropdown. */
  } B;
} DDR_DDRC_TX_CFG_3_tag;

typedef union DDR_DDRC_TX_CFG_4_union_tag { /* Transaction Configuration Register 4. */
  vuint32_t R;
  struct {
    vuint32_t RSRVD_4:3;               /* Reserved. */
    vuint32_t RMED_BDDD:5;             /* Read Medium Bonus Dropdown Duration. */
    vuint32_t RSRVD_3:3;               /* Reserved. */
    vuint32_t RHI_BDDD:5;              /* Read High Bonus Dropdown Duration. */
    vuint32_t RSRVD_2:3;               /* Reserved. */
    vuint32_t RMED_DDD:5;              /* Read Medium Dropdown Duration. */
    vuint32_t RSRVD_1:3;               /* Reserved. */
    vuint32_t RHI_DDD:5;               /* Read High Dropdown Duration. */
  } B;
} DDR_DDRC_TX_CFG_4_tag;

typedef union DDR_DDRC_TX_CFG_5_union_tag { /* Transaction Configuration Register 5. */
  vuint32_t R;
  struct {
    vuint32_t EDDRTQ_CFG_5:32;         /* DDRC_TX_CFG_5 used by the DDRC. */
  } B;
} DDR_DDRC_TX_CFG_5_tag;

typedef union DDR_DDRC_DDRDSR_2_union_tag { /* DDR SDRAM Debug Status 2 */
  vuint32_t R;
  struct {
    vuint32_t RPD_END:1;               /* Rapid Clear Of Memory End */
    vuint32_t RPD_ST:1;                /* Rapid Clear Of Memory Start */
    vuint32_t PHY_INIT_CMPLT:1;        /* DDR PHY Initialization Complete */
    vuint32_t _unused_2:27;
    vuint32_t NML:1;                   /* No Modified Lines */
    vuint32_t IDLE:1;                  /* Memory controller idle (read only). */
  } B;
} DDR_DDRC_DDRDSR_2_tag;

typedef union DDR_DDRC_DDR_IP_REV1_union_tag { /* DDRC Revision 1 */
  vuint32_t R;
  struct {
    vuint32_t IP_MN:8;                 /* Minor Revision */
    vuint32_t IP_MJ:8;                 /* Major Revision */
    vuint32_t IP_ID:16;                /* IP Block ID */
  } B;
} DDR_DDRC_DDR_IP_REV1_tag;

typedef union DDR_DDRC_DDR_IP_REV2_union_tag { /* DDRC Revision 2 */
  vuint32_t R;
  struct {
    vuint32_t IP_CFG:8;                /* IP Block Configuration Options */
    vuint32_t IP_ERRATA:8;             /* IP Errata Version. */
    vuint32_t IP_INT:8;                /* IP Block Integration Options */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_DDR_IP_REV2_tag;

typedef union DDR_DDRC_DDR_EOR_union_tag { /* DDR Enhanced Optimization Register */
  vuint32_t R;
  struct {
    vuint32_t DYN_BSTOPRE_THRSHLD:6;   /* Dynamic BSTOPRE threshold. */
    vuint32_t _unused_24:2;
    vuint32_t DYN_BSTOPRE_EN:1;        /* Dynamic BSTOPRE enable. */
    vuint32_t _unused_12:11;
    vuint32_t WR_REOD_DIS:2;           /* Write reorder disable. */
    vuint32_t _unused_8:2;
    vuint32_t RD_REOD_DIS:3;           /* Read reorder disable. */
    vuint32_t _unused_2:3;
    vuint32_t ADDR_HASH_EN:1;          /* Address hash enabled. */
    vuint32_t RD_BDW_OPT_DIS:1;        /* Read bandwidth optimization disable. */
  } B;
} DDR_DDRC_DDR_EOR_tag;

typedef union DDR_DDRC_DDR_MTCR_union_tag { /* DDR SDRAM Memory Test Control */
  vuint32_t R;
  struct {
    vuint32_t MT_STAT:1;               /* Memory Test Status */
    vuint32_t _unused_25:6;
    vuint32_t _unused_24:1;
    vuint32_t MT_ADDR2_EN:1;           /* Memory Test Address Range 2 Enable. */
    vuint32_t MT_ADDR_EN:1;            /* Memory Test Address Range Enable */
    vuint32_t _unused_20:2;
    vuint32_t MT_TSIZ:3;               /* Memory Test Transaction Size. */
    vuint32_t _unused_16:1;
    vuint32_t MT_TRNARND:4;            /* Memory Test Turnaround */
    vuint32_t _unused_8:4;
    vuint32_t MT_TYP:2;                /* Memory Test Type */
    vuint32_t _unused_1:5;
    vuint32_t MT_EN:1;                 /* Memory Test Enable */
  } B;
} DDR_DDRC_DDR_MTCR_tag;

typedef union DDR_DDRC_DDR_MTP_union_tag { /* DDR SDRAM Memory Test Pattern n */
  vuint32_t R;
  struct {
    vuint32_t DDR_PATT:32;             /* DDR SDRAM Pattern */
  } B;
} DDR_DDRC_DDR_MTP_tag;

typedef union DDR_DDRC_DDR_MT_ST_EXT_ADDR_union_tag { /* DDR SDRAM Memory Test Start Extended Address */
  vuint32_t R;
  struct {
    vuint32_t MT_ST_EXT_ADDR:8;        /* Memory Test Start Extended Address */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_ST_EXT_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_ST_ADDR_union_tag { /* DDR SDRAM Memory Test Start Address */
  vuint32_t R;
  struct {
    vuint32_t MT_ST_ADDR:32;           /* Memory Test Start Address */
  } B;
} DDR_DDRC_DDR_MT_ST_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_END_EXT_ADDR_union_tag { /* DDR SDRAM Memory Test End Extended Address */
  vuint32_t R;
  struct {
    vuint32_t MT_END_EXT_ADDR:8;       /* Memory Test End Extended Address */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_END_EXT_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_END_ADDR_union_tag { /* DDR SDRAM Memory Test End Address */
  vuint32_t R;
  struct {
    vuint32_t MT_END_ADDR:32;          /* Memory Test End Address */
  } B;
} DDR_DDRC_DDR_MT_END_ADDR_tag;

typedef union DDR_DDRC_DDR_MT_ST_EXT_ADDR2_union_tag { /* DDR Memory Test Start Extended Address 2 */
  vuint32_t R;
  struct {
    vuint32_t MT_ST_EXT_ADDR2:8;       /* Memory Test Start Extended Address 2 */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_ST_EXT_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_ST_ADDR2_union_tag { /* DDR Memory Test Start Address 2 */
  vuint32_t R;
  struct {
    vuint32_t MT_ST_ADDR2:32;          /* Memory Test Start Address 2 */
  } B;
} DDR_DDRC_DDR_MT_ST_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_END_EXT_ADDR2_union_tag { /* DDR Memory Test End Extended Address 2 */
  vuint32_t R;
  struct {
    vuint32_t MT_END_EXT_ADDR2:8;      /* Memory Test End Extended Address 2 */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_DDR_MT_END_EXT_ADDR2_tag;

typedef union DDR_DDRC_DDR_MT_END_ADDR2_union_tag { /* DDR Memory Test End Address 2 */
  vuint32_t R;
  struct {
    vuint32_t MT_END_ADDR2:32;         /* Memory Test End Address 2 */
  } B;
} DDR_DDRC_DDR_MT_END_ADDR2_tag;

typedef union DDR_DDRC_DEBUG_1_union_tag { /* Debug 1 */
  vuint32_t R;
  struct {
    vuint32_t _unused_29:3;
    vuint32_t MAPD:1;                  /* Transaction scheduler auto-precharge disable. */
    vuint32_t _unused_17:11;
    vuint32_t CM:1;                    /* Crawl mode. */
    vuint32_t _unused_3:13;
    vuint32_t FRC_ZQCS:1;              /* Force ZQCS command. */
    vuint32_t FRC_ZQCL:1;              /* Force ZQCL command. */
    vuint32_t UZQO:1;                  /* Update ZQ Calibration Once. */
  } B;
} DDR_DDRC_DEBUG_1_tag;

typedef union DDR_DDRC_DEBUG_2_union_tag { /* Debug 2 */
  vuint32_t R;
  struct {
    vuint32_t NML:1;                   /* No Modified Lines */
    vuint32_t IDLE:1;                  /* Memory controller idle (read only). */
    vuint32_t SR_I:1;                  /* Memory controller is in self refresh due to idle (read only). */
    vuint32_t SR:1;                    /* Memory controller is in self refresh and clocks can be gated if DDR_SDRAM_CFG_3[SR_FAST_WK_EN] is 0 (read only). */
    vuint32_t _unused_26:2;
    vuint32_t IR:1;                    /* Issue refresh. */
    vuint32_t WRCD:1;                  /* Write Cancel Disable */
    vuint32_t _unused_21:3;
    vuint32_t INV_ARB:1;               /* Invert arbitration mode. */
    vuint32_t _unused_0:20;
  } B;
} DDR_DDRC_DEBUG_2_tag;

typedef union DDR_DDRC_DEBUG_4_union_tag { /* Debug 4 */
  vuint32_t R;
  struct {
    vuint32_t SPARE_CNFG:32;           /* Spare register bits. */
  } B;
} DDR_DDRC_DEBUG_4_tag;

typedef union DDR_DDRC_DEBUG_19_union_tag { /* Debug 19 */
  vuint32_t R;
  struct {
    vuint32_t _unused_30:2;
    vuint32_t CNTR_OVRD_VAL:3;         /* Counter Override Value. */
    vuint32_t CNTR_OVRD:1;             /* Counter Override Enable. */
    vuint32_t _unused_16:10;
    vuint32_t MCK_DIS:1;               /* MCK Gating Disable. */
    vuint32_t _unused_11:4;
    vuint32_t ALT_TRAIN_EN:1;          /* Alternate Train Enable. */
    vuint32_t _unused_8:2;
    vuint32_t REF_READ_RATE:4;         /* Refresh Read Rate. */
    vuint32_t _unused_2:2;
    vuint32_t FRC_1X_REF_RATE:1;       /* Force 1x refresh rate. */
    vuint32_t MCSR:1;                  /* DDRC Soft Reset. */
  } B;
} DDR_DDRC_DEBUG_19_tag;

typedef union DDR_DDRC_DEBUG_20_union_tag { /* Debug 20 */
  vuint32_t R;
  struct {
    vuint32_t _unused_8:24;
    vuint32_t DISM_CS:5;               /* DISM Current State. */
    vuint32_t SPARE_CNFG:1;            /* Spare config bits. */
    vuint32_t _unused_1:1;
    vuint32_t INIT_DONE:1;             /* Initialization Done. */
  } B;
} DDR_DDRC_DEBUG_20_tag;

typedef union DDR_DDRC_DEBUG_26_union_tag { /* Debug 26 */
  vuint32_t R;
  struct {
    vuint32_t DDRC_WEOD_DIS:1;         /* Command Queue Write Reordering Disable. */
    vuint32_t _unused_30:1;
    vuint32_t DIS_CTRLUPD_REQ:1;       /* Disable Controller Update Request. */
    vuint32_t FRC_WRDATA_CS0:1;        /* Force Write Data Timing to rank 0 */
    vuint32_t DIS_WR_COMB:1;           /* Disable Write Combining for ECC */
    vuint32_t SPARE_CNFG2:1;           /* Spare config bits. This must be set to 0. */
    vuint32_t RESET_RAM:1;             /* Reset RAM. */
    vuint32_t IDLE_FLUSH_DIS:1;        /* Idle Flush Disable. */
    vuint32_t WCK_CS:2;                /* WCK_CS Debug. */
    vuint32_t LEGACY_ROQ:1;            /* Legacy ROQ mode. */
    vuint32_t DDRC_REOD_DIS:1;         /* Command Queue Read Reordering Disable. */
    vuint32_t DFI_FREQ:5;              /* DFI Frequency. */
    vuint32_t DFI_FREQ_HS:5;           /* DFI Frequency. */
    vuint32_t EXT_DFI_WAKEUP:1;        /* Extended DFI Wakeup. */
    vuint32_t DFI_RSTN:1;              /* DFI Reset_N. */
    vuint32_t DFI_FREQ_FSP_HS:2;       /* DFI Frequency FSP Half-Speed. */
    vuint32_t DFI_FREQ_FSP:2;          /* DFI Frequency FSP. */
    vuint32_t DFI_WAKEUP:4;            /* DFI Wakeup. */
  } B;
} DDR_DDRC_DEBUG_26_tag;

typedef union DDR_DDRC_DEBUG_27_union_tag { /* Debug 27 */
  vuint32_t R;
  struct {
    vuint32_t _unused_8:24;
    vuint32_t INVC:1;                  /* Invalidate Cache */
    vuint32_t PRE_TO_ACT_4X:1;         /* Precharge-To-Activate x4. */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_DEBUG_27_tag;

typedef union DDR_DDRC_DEBUG_28_union_tag { /* Debug 28 */
  vuint32_t R;
  struct {
    vuint32_t PLL_LCK:1;               /* DDR PHY PLL Lock. */
    vuint32_t _unused_16:15;
    vuint32_t WLAST_ERR:1;             /* WLAST error bit. */
    vuint32_t _unused_0:15;
  } B;
} DDR_DDRC_DEBUG_28_tag;

typedef union DDR_DDRC_ERR_EN_union_tag { /* Error Enable */
  vuint32_t R;
  struct {
    vuint32_t WTE_EN:1;                /* Write Tag Error Enable */
    vuint32_t RTE_EN:1;                /* Read Tag Error Enable */
    vuint32_t LKSTP_2_EN:1;            /* Lockstep 2 Enable */
    vuint32_t LKSTP_1_EN:1;            /* Lockstep 1 Enable */
    vuint32_t _unused_27:1;
    vuint32_t PAR_1_EN:1;              /* Parity Enable For Internal Errors */
    vuint32_t ECC_EN_RAM_2:1;          /* ECC Enable For On-Chip RAM 2 */
    vuint32_t ECC_EN_RAM_1:1;          /* ECC Enable For On-Chip RAM 1 */
    vuint32_t CRC_2_EN:1;              /* CRC Enable For Group 2 Registers */
    vuint32_t CRC_1_EN:1;              /* CRC Enable For Group 1 Registers */
    vuint32_t _unused_8:14;
    vuint32_t DRAM_SF1_EN:1;           /* DRAM Safety Feature 1 Enable */
    vuint32_t DRAM_SF2_EN:1;           /* DRAM Safety Feature 2 Enable */
    vuint32_t DRAM_SF3_EN:1;           /* DRAM Safety Feature 3 Enable */
    vuint32_t _unused_2:3;
    vuint32_t INLINE_ECC_EN:1;         /* Inline ECC Enable */
    vuint32_t ECC_EN:1;                /* ECC Enable */
  } B;
} DDR_DDRC_ERR_EN_tag;

typedef union DDR_DDRC_DATA_ERR_INJECT_HI_union_tag { /* Memory Data Path Error Injection Mask High */
  vuint32_t R;
  struct {
    vuint32_t EIMH:32;                 /* Error Injection Mask High Data Path */
  } B;
} DDR_DDRC_DATA_ERR_INJECT_HI_tag;

typedef union DDR_DDRC_DATA_ERR_INJECT_LO_union_tag { /* Memory Data Path Error Injection Mask Low */
  vuint32_t R;
  struct {
    vuint32_t EIML:32;                 /* Error Injection Mask Low Data Bit */
  } B;
} DDR_DDRC_DATA_ERR_INJECT_LO_tag;

typedef union DDR_DDRC_ERR_INJECT_union_tag { /* Memory Data Path Error Injection Mask ECC */
  vuint32_t R;
  struct {
    vuint32_t EEIM:8;                  /* ECC Error Injection Mask */
    vuint32_t EIEN:1;                  /* Error Injection Enable */
    vuint32_t _unused_22:1;
    vuint32_t _unused_20:2;
    vuint32_t NUM_ECC_INJ:4;           /* Number Of ECC Errors Injected */
    vuint32_t PIEN:1;                  /* Parity Error Injection Enable */
    vuint32_t INTEIN:1;                /* Internal Error Injection Enable */
    vuint32_t INTIES:3;                /* Internal Error Injection Source */
    vuint32_t ECC_INJ_SRC:2;           /* ECC Injection Source */
    vuint32_t FRC2B:1;                 /* Force 2-Bit Error */
    vuint32_t PAR_INJ_SRC:2;           /* Parity Error Injection Source */
    vuint32_t _unused_1:5;
    vuint32_t ADDR_TEN:1;              /* Address Trigger Enable */
  } B;
} DDR_DDRC_ERR_INJECT_tag;

typedef union DDR_DDRC_ADDR_ERR_INJ_union_tag { /* Address Error Inject */
  vuint32_t R;
  struct {
    vuint32_t ADDR:32;                 /* Address */
  } B;
} DDR_DDRC_ADDR_ERR_INJ_tag;

typedef union DDR_DDRC_EXT_ADDR_ERR_INJ_union_tag { /* Extended Address Error Inject */
  vuint32_t R;
  struct {
    vuint32_t EADDR:8;                 /* Extended Address */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_EXT_ADDR_ERR_INJ_tag;

typedef union DDR_DDRC_CAPTURE_EXT_DATA_HI_union_tag { /* Memory Extended Data Path Read Capture High */
  vuint32_t R;
  struct {
    vuint32_t ECEHD:32;                /* Error Capture Extended High Data Path */
  } B;
} DDR_DDRC_CAPTURE_EXT_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_EXT_DATA_LO_union_tag { /* Memory Extended Data Path Read Capture Low */
  vuint32_t R;
  struct {
    vuint32_t ECELD:32;                /* Error Capture Extended Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_EXT_DATA_LO_tag;

typedef union DDR_DDRC_CAPTURE_DATA_HI_union_tag { /* Memory Data Path Read Capture High */
  vuint32_t R;
  struct {
    vuint32_t ECHD:32;                 /* Error Capture High Data Path */
  } B;
} DDR_DDRC_CAPTURE_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_DATA_LO_union_tag { /* Memory Data Path Read Capture Low */
  vuint32_t R;
  struct {
    vuint32_t ECLD:32;                 /* Error Capture Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_DATA_LO_tag;

typedef union DDR_DDRC_CAPTURE_ECC_union_tag { /* Memory Data Path Read Capture ECC */
  vuint32_t R;
  struct {
    vuint32_t ECE:32;                  /* Error Capture ECC */
  } B;
} DDR_DDRC_CAPTURE_ECC_tag;

typedef union DDR_DDRC_CAPTURE_UPPER_EXT_DATA_HI_union_tag { /* Memory Upper Extended Data Path Read Capture High */
  vuint32_t R;
  struct {
    vuint32_t ECUEHD:32;               /* Error Capture Upper Extended High Data Path */
  } B;
} DDR_DDRC_CAPTURE_UPPER_EXT_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_UPPER_EXT_DATA_LO_union_tag { /* Memory Upper Extended Data Path Read Capture Low */
  vuint32_t R;
  struct {
    vuint32_t ECUELD:32;               /* Error Capture Upper Extended Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_UPPER_EXT_DATA_LO_tag;

typedef union DDR_DDRC_CAPTURE_UPPER_DATA_HI_union_tag { /* Memory Upper Data Path Read Capture High */
  vuint32_t R;
  struct {
    vuint32_t ECUHD:32;                /* Error Capture Upper High Data Path */
  } B;
} DDR_DDRC_CAPTURE_UPPER_DATA_HI_tag;

typedef union DDR_DDRC_CAPTURE_UPPER_DATA_LO_union_tag { /* Memory Upper Data Path Read Capture Low */
  vuint32_t R;
  struct {
    vuint32_t ECULD:32;                /* Error Capture Upper Low Data Path */
  } B;
} DDR_DDRC_CAPTURE_UPPER_DATA_LO_tag;

typedef union DDR_DDRC_ERR_DETECT_union_tag { /* Memory Error Detect */
  vuint32_t R;
  struct {
    vuint32_t MSE:1;                   /* Memory-Select Error */
    vuint32_t _unused_30:1;
    vuint32_t SBE:1;                   /* Single-Bit ECC Errors */
    vuint32_t MBE:1;                   /* Multiple-Bit Error */
    vuint32_t ILLTXNE:1;               /* Illegal transaction error. */
    vuint32_t DRAM3E:1;                /* DRAM 2 error. */
    vuint32_t _unused_25:1;
    vuint32_t REFRATEE:1;              /* Refresh rate error. */
    vuint32_t _unused_22:2;
    vuint32_t _unused_21:1;
    vuint32_t LKSTP4E:1;               /* Lockstep 4 error. */
    vuint32_t SSBE:1;                  /* Scrubbed Single-Bit ECC Error */
    vuint32_t LNKE:1;                  /* Link ECC Error */
    vuint32_t DRAM1E:1;                /* DRAM 1 error. */
    vuint32_t DRAM2E:1;                /* DRAM 2 error. */
    vuint32_t PHYE:1;                  /* PHY error. */
    vuint32_t CFGE:1;                  /* Configuration read error. */
    vuint32_t REGE:1;                  /* Region error. */
    vuint32_t IPE:1;                   /* Internal Parity Error */
    vuint32_t UPDTMTE:1;               /* Update Timeout Error */
    vuint32_t CRCE:1;                  /* Configuration CRC Error */
    vuint32_t SMBE2:1;                 /* SRAM Multi-Bit Error 2 */
    vuint32_t SMBE1:1;                 /* SRAM Multi-Bit Error 1 */
    vuint32_t SSBE2:1;                 /* SRAM SBE 2 */
    vuint32_t SSBE1:1;                 /* SRAM SBE 1 */
    vuint32_t WTAGE:1;                 /* Write Tag Error */
    vuint32_t RTAGE:1;                 /* Read Tag Error */
    vuint32_t WTTE:1;                  /* Write Tag Timeout Error */
    vuint32_t RTTE:1;                  /* Read Tag Timeout Error */
    vuint32_t RTMTE:1;                 /* Read Timeout Error */
    vuint32_t MME:1;                   /* Multiple Memory Errors */
  } B;
} DDR_DDRC_ERR_DETECT_tag;

typedef union DDR_DDRC_ERR_DISABLE_union_tag { /* Memory Error Disable */
  vuint32_t R;
  struct {
    vuint32_t MSED:1;                  /* Memory-Select Error Disable */
    vuint32_t _unused_30:1;
    vuint32_t SBED:1;                  /* Single-Bit ECC Error Disable */
    vuint32_t MBED:1;                  /* Multiple-Bit ECC Error Disable */
    vuint32_t ILLTXNED:1;              /* Illegal Transaction Error Disable */
    vuint32_t _unused_25:2;
    vuint32_t REFRATEED:1;             /* Refresh Rate Error Disable */
    vuint32_t LNKED:1;                 /* Link ECC Error Disable */
    vuint32_t SPARE:1;                 /* Spare config bit. */
    vuint32_t _unused_20:2;
    vuint32_t SSBED:1;                 /* Scrubbed Single-Bit ECC Error Disable */
    vuint32_t _unused_16:3;
    vuint32_t PHYED:1;                 /* PHY Error Disable */
    vuint32_t _unused_12:3;
    vuint32_t UPDTMTED:1;              /* Update Timeout Error Disable */
    vuint32_t _unused_0:11;
  } B;
} DDR_DDRC_ERR_DISABLE_tag;

typedef union DDR_DDRC_ERR_INT_EN_union_tag { /* Memory Error Interrupt Enable */
  vuint32_t R;
  struct {
    vuint32_t MSEE:1;                  /* Memory-Select Error Interrupt Enable */
    vuint32_t _unused_30:1;
    vuint32_t SBEE:1;                  /* Single-Bit ECC Error Interrupt Enable */
    vuint32_t MBEE:1;                  /* Multiple-Bit ECC Error Interrupt Enable */
    vuint32_t SSBE12E:1;               /* SRAM Single-Bit Error Interrupt Enable */
    vuint32_t _unused_25:2;
    vuint32_t REFRATEEE:1;             /* Refresh Rate Interrupt Enable */
    vuint32_t ILLTXNEE:1;              /* Illegal Transaction Interrupt Enable */
    vuint32_t LNKEE:1;                 /* Link ECC Error Interrupt Enable */
    vuint32_t _unused_20:2;
    vuint32_t SSBEE:1;                 /* Scrubbed Single-Bit ECC Error Interrupt Enable */
    vuint32_t _unused_16:3;
    vuint32_t PHYEE:1;                 /* PHY error interrupt enable. */
    vuint32_t _unused_12:3;
    vuint32_t UPDTMTEE:1;              /* Update Timeout Interrupt Enable */
    vuint32_t _unused_0:11;
  } B;
} DDR_DDRC_ERR_INT_EN_tag;

typedef union DDR_DDRC_CAPTURE_ATTRIBUTES_union_tag { /* Memory Error Attributes Capture */
  vuint32_t R;
  struct {
    vuint32_t VLD:1;                   /* Valid */
    vuint32_t _unused_28:3;
    vuint32_t _unused_24:4;
    vuint32_t _unused_20:4;
    vuint32_t TTYP:2;                  /* Error Transaction Type */
    vuint32_t _unused_16:2;
    vuint32_t TSRC:8;                  /* Error Transaction Source */
    vuint32_t TSIZ:3;                  /* Error Transaction Size */
    vuint32_t _unused_4:1;
    vuint32_t BNUM:3;                  /* Data Beat Number */
    vuint32_t _unused_0:1;
  } B;
} DDR_DDRC_CAPTURE_ATTRIBUTES_tag;

typedef union DDR_DDRC_CAPTURE_ADDRESS_union_tag { /* Memory Error Address Capture */
  vuint32_t R;
  struct {
    vuint32_t CADDR:32;                /* Captured Address */
  } B;
} DDR_DDRC_CAPTURE_ADDRESS_tag;

typedef union DDR_DDRC_CAPTURE_EXT_ADDRESS_union_tag { /* Memory Error Extended Address Capture */
  vuint32_t R;
  struct {
    vuint32_t CEADDR:8;                /* Captured Extended Address */
    vuint32_t _unused_0:24;
  } B;
} DDR_DDRC_CAPTURE_EXT_ADDRESS_tag;

typedef union DDR_DDRC_ERR_SBE_union_tag { /* Single-Bit ECC Memory Error Management */
  vuint32_t R;
  struct {
    vuint32_t SBEC:8;                  /* SBE Counter */
    vuint32_t SSBEC:8;                 /* Scrubbed SBE Counter */
    vuint32_t SBET:8;                  /* SBE Threshold */
    vuint32_t SSBET:8;                 /* Scrubbed SBE Threshold */
  } B;
} DDR_DDRC_ERR_SBE_tag;

typedef union DDR_DDRC_REG_CRC_GRP_1_union_tag { /* Register CRC Code For Group 1 */
  vuint32_t R;
  struct {
    vuint32_t CRC_1:32;                /* Programmed CRC Code */
  } B;
} DDR_DDRC_REG_CRC_GRP_1_tag;

typedef union DDR_DDRC_REG_CRC_GRP_2_union_tag { /* Register CRC Code For Group 2 */
  vuint32_t R;
  struct {
    vuint32_t CRC_2:32;                /* Programmed CRC Code */
  } B;
} DDR_DDRC_REG_CRC_GRP_2_tag;

typedef union DDR_DDRC_ECC_EXT_REG_0_union_tag { /* ECC Extended Region 0 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_0_EA:8;          /* Extended Region 0 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_0_SA:8;          /* Extended Region 0 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_0_tag;

typedef union DDR_DDRC_ECC_EXT_REG_1_union_tag { /* ECC Extended Region 1 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_1_EA:8;          /* Extended Region 1 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_1_SA:8;          /* Extended Region 1 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_1_tag;

typedef union DDR_DDRC_ECC_EXT_REG_2_union_tag { /* ECC Extended Region 2 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_2_EA:8;          /* Extended Region 2 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_2_SA:8;          /* Extended Region 2 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_2_tag;

typedef union DDR_DDRC_ECC_EXT_REG_3_union_tag { /* ECC Extended Region 3 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_3_EA:8;          /* Extended Region 3 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_3_SA:8;          /* Extended Region 3 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_3_tag;

typedef union DDR_DDRC_ECC_EXT_REG_4_union_tag { /* ECC Extended Region 4 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_4_EA:8;          /* Extended Region 4 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_4_SA:8;          /* Extended Region 4 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_4_tag;

typedef union DDR_DDRC_ECC_EXT_REG_5_union_tag { /* ECC Extended Region 5 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_5_EA:8;          /* Extended Region 5 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_5_SA:8;          /* Extended Region 5 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_5_tag;

typedef union DDR_DDRC_ECC_EXT_REG_6_union_tag { /* ECC Extended Region 6 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_6_EA:8;          /* Extended Region 6 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_6_SA:8;          /* Extended Region 6 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_6_tag;

typedef union DDR_DDRC_ECC_EXT_REG_7_union_tag { /* ECC Extended Region 7 Configuration */
  vuint32_t R;
  struct {
    vuint32_t EXT_REG_7_EA:8;          /* Extended Region 7 End Address */
    vuint32_t _unused_16:8;
    vuint32_t EXT_REG_7_SA:8;          /* Extended Region 7 Start Address */
    vuint32_t _unused_0:8;
  } B;
} DDR_DDRC_ECC_EXT_REG_7_tag;

typedef union DDR_DDRC_ECC_REG_0_union_tag { /* ECC Region 0 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_0_EA:12;             /* Region 0 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_0_SA:12;             /* Region 0 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_0_EN:1;              /* Region 0 Enable */
  } B;
} DDR_DDRC_ECC_REG_0_tag;

typedef union DDR_DDRC_ECC_REG_1_union_tag { /* ECC Region 1 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_1_EA:12;             /* Region 1 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_1_SA:12;             /* Region 1 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_1_EN:1;              /* Region 1 Enable */
  } B;
} DDR_DDRC_ECC_REG_1_tag;

typedef union DDR_DDRC_ECC_REG_2_union_tag { /* ECC Region 2 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_2_EA:12;             /* Region 2 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_2_SA:12;             /* Region 2 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_2_EN:1;              /* Region 2 Enable */
  } B;
} DDR_DDRC_ECC_REG_2_tag;

typedef union DDR_DDRC_ECC_REG_3_union_tag { /* ECC Region 3 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_3_EA:12;             /* Region 3 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_3_SA:12;             /* Region 3 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_3_EN:1;              /* Region 3 Enable */
  } B;
} DDR_DDRC_ECC_REG_3_tag;

typedef union DDR_DDRC_ECC_REG_4_union_tag { /* ECC Region 4 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_4_EA:12;             /* Region 4 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_4_SA:12;             /* Region 4 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_4_EN:1;              /* Region 4 Enable */
  } B;
} DDR_DDRC_ECC_REG_4_tag;

typedef union DDR_DDRC_ECC_REG_5_union_tag { /* ECC Region 5 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_5_EA:12;             /* Region 5 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_5_SA:12;             /* Region 5 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_5_EN:1;              /* Region 5 Enable */
  } B;
} DDR_DDRC_ECC_REG_5_tag;

typedef union DDR_DDRC_ECC_REG_6_union_tag { /* ECC Region 6 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_6_EA:12;             /* Region 6 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_6_SA:12;             /* Region 6 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_6_EN:1;              /* Region 6 Enable */
  } B;
} DDR_DDRC_ECC_REG_6_tag;

typedef union DDR_DDRC_ECC_REG_7_union_tag { /* ECC Region 7 Configuration */
  vuint32_t R;
  struct {
    vuint32_t REG_7_EA:12;             /* Region 7 End Address */
    vuint32_t _unused_16:4;
    vuint32_t REG_7_SA:12;             /* Region 7 Start Address */
    vuint32_t _unused_1:3;
    vuint32_t REG_7_EN:1;              /* Region 7 Enable */
  } B;
} DDR_DDRC_ECC_REG_7_tag;

typedef union DDR_DDRC_PMCFG_1_union_tag { /* Performance Monitor Configuration 1 */
  vuint32_t R;
  struct {
    vuint32_t _unused_14:18;
    vuint32_t _unused_3:11;
    vuint32_t _unused_2:1;
    vuint32_t RD_BT_FILT_EN:1;         /* Read Beat Filter Enable */
    vuint32_t WR_BEAT_FILT_EN:1;       /* Write Beat Filter Enable */
  } B;
} DDR_DDRC_PMCFG_1_tag;

typedef union DDR_DDRC_PMCFG_2_union_tag { /* Performance Monitor Configuration 2 */
  vuint32_t R;
  struct {
    vuint32_t _unused_14:18;
    vuint32_t _unused_0:14;
  } B;
} DDR_DDRC_PMCFG_2_tag;

typedef union DDR_DDRC_PMCFG_3_union_tag { /* Performance Monitor Configuration 3 */
  vuint32_t R;
  struct {
    vuint32_t MSTR_ID_MSK_3:10;        /* Master ID Mask 3 */
    vuint32_t _unused_16:6;
    vuint32_t MSTR_ID_3:10;            /* Master ID 3 */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_3_tag;

typedef union DDR_DDRC_PMCFG_4_union_tag { /* Performance Monitor Configuration 4 */
  vuint32_t R;
  struct {
    vuint32_t MSTR_ID_MSK_2:10;        /* Master ID Mask 2 */
    vuint32_t _unused_16:6;
    vuint32_t MSTR_ID_2:10;            /* Master ID 2 */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_4_tag;

typedef union DDR_DDRC_PMCFG_5_union_tag { /* Performance Monitor Configuration 5 */
  vuint32_t R;
  struct {
    vuint32_t MSTR_ID_MSK_1:10;        /* Master ID Mask 1 */
    vuint32_t _unused_16:6;
    vuint32_t MSTR_ID_1:10;            /* Master ID 1 */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_5_tag;

typedef union DDR_DDRC_PMCFG_6_union_tag { /* Performance Monitor Configuration 6 */
  vuint32_t R;
  struct {
    vuint32_t MSTR_ID_MSK_0:10;        /* Master ID Mask 0 */
    vuint32_t _unused_16:6;
    vuint32_t MSTR_ID_0:10;            /* Master ID 0 */
    vuint32_t _unused_0:6;
  } B;
} DDR_DDRC_PMCFG_6_tag;

typedef union DDR_DDRC_PMGC0_union_tag { /* Performance Monitor Global Control */
  vuint32_t R;
  struct {
    vuint32_t _unused_3:29;
    vuint32_t FCECE:1;                 /* Freeze Counters On Enabled Condition Or Event */
    vuint32_t PMIE:1;                  /* Performance Monitor Interrupt Enable */
    vuint32_t FAC:1;                   /* Freeze All Counters */
  } B;
} DDR_DDRC_PMGC0_tag;

typedef union DDR_DDRC_PMLCA0_union_tag { /* Performance Monitor Local Control A0 */
  vuint32_t R;
  struct {
    vuint32_t _unused_6:26;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA0_tag;

typedef union DDR_DDRC_PMLCB0_union_tag { /* Performance Monitor Local Control B0 */
  vuint32_t R;
  struct {
    vuint32_t _unused_16:16;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB0_tag;

typedef union DDR_DDRC_PMC0A_union_tag { /* PMC 0a */
  vuint32_t R;
  struct {
    vuint32_t PMC0:32;                 /* Counter 0 */
  } B;
} DDR_DDRC_PMC0A_tag;

typedef union DDR_DDRC_PMC0B_union_tag { /* PMC 0b */
  vuint32_t R;
  struct {
    vuint32_t PMC0:32;                 /* Counter 0 */
  } B;
} DDR_DDRC_PMC0B_tag;

typedef union DDR_DDRC_PMLCA1_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA1_tag;

typedef union DDR_DDRC_PMLCB1_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB1_tag;

typedef union DDR_DDRC_PMC1_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC1:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC1_tag;

typedef union DDR_DDRC_PMLCA2_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA2_tag;

typedef union DDR_DDRC_PMLCB2_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB2_tag;

typedef union DDR_DDRC_PMC2_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC2:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC2_tag;

typedef union DDR_DDRC_PMLCA3_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA3_tag;

typedef union DDR_DDRC_PMLCB3_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB3_tag;

typedef union DDR_DDRC_PMC3_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC3:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC3_tag;

typedef union DDR_DDRC_PMLCA4_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA4_tag;

typedef union DDR_DDRC_PMLCB4_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB4_tag;

typedef union DDR_DDRC_PMC4_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC4:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC4_tag;

typedef union DDR_DDRC_PMLCA5_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA5_tag;

typedef union DDR_DDRC_PMLCB5_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB5_tag;

typedef union DDR_DDRC_PMC5_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC5:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC5_tag;

typedef union DDR_DDRC_PMLCA6_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA6_tag;

typedef union DDR_DDRC_PMLCB6_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB6_tag;

typedef union DDR_DDRC_PMC6_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC6:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC6_tag;

typedef union DDR_DDRC_PMLCA7_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA7_tag;

typedef union DDR_DDRC_PMLCB7_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB7_tag;

typedef union DDR_DDRC_PMC7_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC7:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC7_tag;

typedef union DDR_DDRC_PMLCA8_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA8_tag;

typedef union DDR_DDRC_PMLCB8_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB8_tag;

typedef union DDR_DDRC_PMC8_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC8:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC8_tag;

typedef union DDR_DDRC_PMLCA9_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA9_tag;

typedef union DDR_DDRC_PMLCB9_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB9_tag;

typedef union DDR_DDRC_PMC9_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC9:32;                 /* Event Count */
  } B;
} DDR_DDRC_PMC9_tag;

typedef union DDR_DDRC_PMLCA10_union_tag { /* Performance Monitor Local Control A */
  vuint32_t R;
  struct {
    vuint32_t BDIST:6;                 /* Burst Distance */
    vuint32_t BGRAN:5;                 /* Burst Granularity */
    vuint32_t BSIZE:5;                 /* Burst Size */
    vuint32_t EVENT:7;                 /* Event Selector */
    vuint32_t _unused_6:3;
    vuint32_t CE:1;                    /* Condition Enable */
    vuint32_t _unused_1:4;
    vuint32_t FC:1;                    /* Freeze Counter */
  } B;
} DDR_DDRC_PMLCA10_tag;

typedef union DDR_DDRC_PMLCB10_union_tag { /* Performance Monitor Local Control B */
  vuint32_t R;
  struct {
    vuint32_t THRESHOLD:6;             /* Threshold */
    vuint32_t _unused_24:2;
    vuint32_t TBMULT:3;                /* Threshold And Burstiness Multiplier */
    vuint32_t _unused_16:5;
    vuint32_t TRIGOFFCNTL:2;           /* Trigger-Off Control */
    vuint32_t TRIGONCNTL:2;            /* Trigger-On Control */
    vuint32_t TRIGOFFSEL:4;            /* Trigger-Off Select */
    vuint32_t _unused_6:2;
    vuint32_t TRIGONSEL:4;             /* Trigger-On Select */
    vuint32_t _unused_0:2;
  } B;
} DDR_DDRC_PMLCB10_tag;

typedef union DDR_DDRC_PMC10_union_tag { /* Performance Monitor Counter */
  vuint32_t R;
  struct {
    vuint32_t PMC10:32;                /* Event Count */
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
  uint8_t DDR_DDRC_reserved0[24];
  DDR_DDRC_CS_CONFIG_tag CS_CONFIG[2]; /* Rank 0 Configuration */
  uint8_t DDR_DDRC_reserved1[120];
  DDR_DDRC_TIMING_CFG_3_tag TIMING_CFG_3; /* DDR SDRAM Timing Configuration 3 */
  DDR_DDRC_TIMING_CFG_0_tag TIMING_CFG_0; /* DDR SDRAM Timing Configuration 0 */
  DDR_DDRC_TIMING_CFG_1_tag TIMING_CFG_1; /* DDR SDRAM Timing Configuration 1 */
  DDR_DDRC_TIMING_CFG_2_tag TIMING_CFG_2; /* DDR SDRAM Timing Configuration 2 */
  DDR_DDRC_DDR_SDRAM_CFG_tag DDR_SDRAM_CFG; /* DDR SDRAM Control Configuration */
  DDR_DDRC_DDR_SDRAM_CFG_2_tag DDR_SDRAM_CFG_2; /* DDR SDRAM Control Configuration 2 */
  uint8_t DDR_DDRC_reserved2[8];
  DDR_DDRC_DDR_SDRAM_MD_CNTL_tag DDR_SDRAM_MD_CNTL; /* DDR SDRAM Mode Control */
  DDR_DDRC_DDR_SDRAM_INTERVAL_tag DDR_SDRAM_INTERVAL; /* DDR SDRAM Interval Configuration */
  DDR_DDRC_DDR_DATA_INIT_tag DDR_DATA_INIT; /* DDR SDRAM Data Initialization */
  uint8_t DDR_DDRC_reserved3[52];
  DDR_DDRC_TIMING_CFG_4_tag TIMING_CFG_4; /* DDR SDRAM Timing Configuration 4 */
  DDR_DDRC_TIMING_CFG_5_tag TIMING_CFG_5; /* DDR SDRAM Timing Configuration 5 */
  uint8_t DDR_DDRC_reserved4[4];
  DDR_DDRC_TIMING_CFG_7_tag TIMING_CFG_7; /* DDR SDRAM Timing Configuration 7 */
  DDR_DDRC_DDR_ZQ_CNTL_tag DDR_ZQ_CNTL; /* DDR SDRAM ZQ Calibration Control */
  uint8_t DDR_DDRC_reserved5[8];
  DDR_DDRC_DDR_SR_CNTR_tag DDR_SR_CNTR; /* DDR SDRAM Self-Refresh Counter */
  uint8_t DDR_DDRC_reserved6[208];
  DDR_DDRC_TIMING_CFG_8_tag TIMING_CFG_8; /* DDR SDRAM Timing Configuration 8 */
  DDR_DDRC_TIMING_CFG_9_tag TIMING_CFG_9; /* DDR SDRAM timing configuration 9 */
  DDR_DDRC_TIMING_CFG_10_tag TIMING_CFG_10; /* DDR SDRAM Timing Configuration 10 */
  DDR_DDRC_TIMING_CFG_11_tag TIMING_CFG_11; /* DDR SDRAM Timing Configuration 11 */
  DDR_DDRC_DDR_SDRAM_CFG_3_tag DDR_SDRAM_CFG_3; /* DDR SDRAM Control Configuration 3 */
  DDR_DDRC_DDR_SDRAM_CFG_4_tag DDR_SDRAM_CFG_4; /* DDR SDRAM Control Configuration 4 */
  DDR_DDRC_DDR_SDRAM_CFG_5_tag DDR_SDRAM_CFG_5; /* DDR SDRAM Control Configuration 5 */
  DDR_DDRC_DDR_SDRAM_CFG_6_tag DDR_SDRAM_CFG_6; /* DDR SDRAM Control Configuration 6 */
  DDR_DDRC_DDR_SDRAM_MD_CNTL2_tag DDR_SDRAM_MD_CNTL2; /* DDR SDRAM mode control 2 */
  uint8_t DDR_DDRC_reserved7[4];
  DDR_DDRC_DDR_SDRAM_CFG_7_tag DDR_SDRAM_CFG_7; /* DDR SDRAM Control Configuration 7 */
  uint8_t DDR_DDRC_reserved8[4];
  DDR_DDRC_DDR_SDRAM_MPR1_tag DDR_SDRAM_MPR1; /* DDR SDRAM multi-purpose register 1 */
  DDR_DDRC_DDR_SDRAM_MPR2_tag DDR_SDRAM_MPR2; /* DDR SDRAM multi-purpose register 2 */
  DDR_DDRC_DDR_SDRAM_MPR3_tag DDR_SDRAM_MPR3; /* DDR SDRAM multi-purpose register 3 */
  DDR_DDRC_DDR_SDRAM_MPR4_tag DDR_SDRAM_MPR4; /* DDR SDRAM multi-purpose register 4 */
  DDR_DDRC_DDR_SDRAM_MPR5_tag DDR_SDRAM_MPR5; /* DDR SDRAM multi-purpose register 5 */
  uint8_t DDR_DDRC_reserved9[44];
  DDR_DDRC_DDR_SDRAM_REF_RATE_tag DDR_SDRAM_REF_RATE; /* DDR Refresh Rate */
  uint8_t DDR_DDRC_reserved10[60];
  DDR_DDRC_TIMING_CFG_12_tag TIMING_CFG_12; /* DDR SDRAM Timing Configuration 12 */
  DDR_DDRC_TIMING_CFG_13_tag TIMING_CFG_13; /* DDR SDRAM Timing Configuration 13 */
  DDR_DDRC_TIMING_CFG_14_tag TIMING_CFG_14; /* DDR SDRAM Timing Configuration 14 */
  DDR_DDRC_TIMING_CFG_15_tag TIMING_CFG_15; /* DDR SDRAM Timing Configuration 15 */
  DDR_DDRC_TIMING_CFG_16_tag TIMING_CFG_16; /* DDR SDRAM Timing Configuration 16 */
  DDR_DDRC_TIMING_CFG_17_tag TIMING_CFG_17; /* DDR SDRAM Timing Configuration 17 */
  uint8_t DDR_DDRC_reserved11[1256];
  DDR_DDRC_TX_CFG_1_tag TX_CFG_1;      /* Transaction Configuration Register 1 */
  DDR_DDRC_TX_CFG_2_tag TX_CFG_2;      /* Transaction Configuration Register 2 */
  DDR_DDRC_TX_CFG_3_tag TX_CFG_3;      /* Transaction Configuration Register 3. */
  DDR_DDRC_TX_CFG_4_tag TX_CFG_4;      /* Transaction Configuration Register 4. */
  DDR_DDRC_TX_CFG_5_tag TX_CFG_5;      /* Transaction Configuration Register 5. */
  uint8_t DDR_DDRC_reserved12[784];
  DDR_DDRC_DDRDSR_2_tag DDRDSR_2;      /* DDR SDRAM Debug Status 2 */
  uint8_t DDR_DDRC_reserved13[208];
  DDR_DDRC_DDR_IP_REV1_tag DDR_IP_REV1; /* DDRC Revision 1 */
  DDR_DDRC_DDR_IP_REV2_tag DDR_IP_REV2; /* DDRC Revision 2 */
  DDR_DDRC_DDR_EOR_tag DDR_EOR;        /* DDR Enhanced Optimization Register */
  uint8_t DDR_DDRC_reserved14[252];
  DDR_DDRC_DDR_MTCR_tag DDR_MTCR;      /* DDR SDRAM Memory Test Control */
  uint8_t DDR_DDRC_reserved15[28];
  DDR_DDRC_DDR_MTP_tag DDR_MTP[10];    /* DDR SDRAM Memory Test Pattern n */
  uint8_t DDR_DDRC_reserved16[24];
  DDR_DDRC_DDR_MT_ST_EXT_ADDR_tag DDR_MT_ST_EXT_ADDR; /* DDR SDRAM Memory Test Start Extended Address */
  DDR_DDRC_DDR_MT_ST_ADDR_tag DDR_MT_ST_ADDR; /* DDR SDRAM Memory Test Start Address */
  DDR_DDRC_DDR_MT_END_EXT_ADDR_tag DDR_MT_END_EXT_ADDR; /* DDR SDRAM Memory Test End Extended Address */
  DDR_DDRC_DDR_MT_END_ADDR_tag DDR_MT_END_ADDR; /* DDR SDRAM Memory Test End Address */
  DDR_DDRC_DDR_MT_ST_EXT_ADDR2_tag DDR_MT_ST_EXT_ADDR2; /* DDR Memory Test Start Extended Address 2 */
  DDR_DDRC_DDR_MT_ST_ADDR2_tag DDR_MT_ST_ADDR2; /* DDR Memory Test Start Address 2 */
  DDR_DDRC_DDR_MT_END_EXT_ADDR2_tag DDR_MT_END_EXT_ADDR2; /* DDR Memory Test End Extended Address 2 */
  DDR_DDRC_DDR_MT_END_ADDR2_tag DDR_MT_END_ADDR2; /* DDR Memory Test End Address 2 */
  uint8_t DDR_DDRC_reserved17[384];
  DDR_DDRC_DEBUG_1_tag DEBUG_1;        /* Debug 1 */
  DDR_DDRC_DEBUG_2_tag DEBUG_2;        /* Debug 2 */
  uint8_t DDR_DDRC_reserved18[4];
  DDR_DDRC_DEBUG_4_tag DEBUG_4;        /* Debug 4 */
  uint8_t DDR_DDRC_reserved19[56];
  DDR_DDRC_DEBUG_19_tag DEBUG_19;      /* Debug 19 */
  DDR_DDRC_DEBUG_20_tag DEBUG_20;      /* Debug 20 */
  uint8_t DDR_DDRC_reserved20[20];
  DDR_DDRC_DEBUG_26_tag DEBUG_26;      /* Debug 26 */
  DDR_DDRC_DEBUG_27_tag DEBUG_27;      /* Debug 27 */
  DDR_DDRC_DEBUG_28_tag DEBUG_28;      /* Debug 28 */
  uint8_t DDR_DDRC_reserved21[144];
  DDR_DDRC_ERR_EN_tag ERR_EN;          /* Error Enable */
  uint8_t DDR_DDRC_reserved22[252];
  DDR_DDRC_DATA_ERR_INJECT_HI_tag DATA_ERR_INJECT_HI; /* Memory Data Path Error Injection Mask High */
  DDR_DDRC_DATA_ERR_INJECT_LO_tag DATA_ERR_INJECT_LO; /* Memory Data Path Error Injection Mask Low */
  DDR_DDRC_ERR_INJECT_tag ERR_INJECT;  /* Memory Data Path Error Injection Mask ECC */
  DDR_DDRC_ADDR_ERR_INJ_tag ADDR_ERR_INJ; /* Address Error Inject */
  DDR_DDRC_EXT_ADDR_ERR_INJ_tag EXT_ADDR_ERR_INJ; /* Extended Address Error Inject */
  uint8_t DDR_DDRC_reserved23[4];
  DDR_DDRC_CAPTURE_EXT_DATA_HI_tag CAPTURE_EXT_DATA_HI; /* Memory Extended Data Path Read Capture High */
  DDR_DDRC_CAPTURE_EXT_DATA_LO_tag CAPTURE_EXT_DATA_LO; /* Memory Extended Data Path Read Capture Low */
  DDR_DDRC_CAPTURE_DATA_HI_tag CAPTURE_DATA_HI; /* Memory Data Path Read Capture High */
  DDR_DDRC_CAPTURE_DATA_LO_tag CAPTURE_DATA_LO; /* Memory Data Path Read Capture Low */
  DDR_DDRC_CAPTURE_ECC_tag CAPTURE_ECC; /* Memory Data Path Read Capture ECC */
  uint8_t DDR_DDRC_reserved24[4];
  DDR_DDRC_CAPTURE_UPPER_EXT_DATA_HI_tag CAPTURE_UPPER_EXT_DATA_HI; /* Memory Upper Extended Data Path Read Capture High */
  DDR_DDRC_CAPTURE_UPPER_EXT_DATA_LO_tag CAPTURE_UPPER_EXT_DATA_LO; /* Memory Upper Extended Data Path Read Capture Low */
  DDR_DDRC_CAPTURE_UPPER_DATA_HI_tag CAPTURE_UPPER_DATA_HI; /* Memory Upper Data Path Read Capture High */
  DDR_DDRC_CAPTURE_UPPER_DATA_LO_tag CAPTURE_UPPER_DATA_LO; /* Memory Upper Data Path Read Capture Low */
  DDR_DDRC_ERR_DETECT_tag ERR_DETECT;  /* Memory Error Detect */
  DDR_DDRC_ERR_DISABLE_tag ERR_DISABLE; /* Memory Error Disable */
  DDR_DDRC_ERR_INT_EN_tag ERR_INT_EN;  /* Memory Error Interrupt Enable */
  DDR_DDRC_CAPTURE_ATTRIBUTES_tag CAPTURE_ATTRIBUTES; /* Memory Error Attributes Capture */
  DDR_DDRC_CAPTURE_ADDRESS_tag CAPTURE_ADDRESS; /* Memory Error Address Capture */
  DDR_DDRC_CAPTURE_EXT_ADDRESS_tag CAPTURE_EXT_ADDRESS; /* Memory Error Extended Address Capture */
  DDR_DDRC_ERR_SBE_tag ERR_SBE;        /* Single-Bit ECC Memory Error Management */
  uint8_t DDR_DDRC_reserved25[180];
  DDR_DDRC_REG_CRC_GRP_1_tag REG_CRC_GRP_1; /* Register CRC Code For Group 1 */
  DDR_DDRC_REG_CRC_GRP_2_tag REG_CRC_GRP_2; /* Register CRC Code For Group 2 */
  uint8_t DDR_DDRC_reserved26[8];
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
  uint8_t DDR_DDRC_reserved27[64352];
  DDR_DDRC_PMCFG_1_tag PMCFG_1;        /* Performance Monitor Configuration 1 */
  DDR_DDRC_PMCFG_2_tag PMCFG_2;        /* Performance Monitor Configuration 2 */
  DDR_DDRC_PMCFG_3_tag PMCFG_3;        /* Performance Monitor Configuration 3 */
  DDR_DDRC_PMCFG_4_tag PMCFG_4;        /* Performance Monitor Configuration 4 */
  DDR_DDRC_PMCFG_5_tag PMCFG_5;        /* Performance Monitor Configuration 5 */
  DDR_DDRC_PMCFG_6_tag PMCFG_6;        /* Performance Monitor Configuration 6 */
  uint8_t DDR_DDRC_reserved28[40];
  DDR_DDRC_PMGC0_tag PMGC0;            /* Performance Monitor Global Control */
  uint8_t DDR_DDRC_reserved29[12];
  DDR_DDRC_PMLCA0_tag PMLCA0;          /* Performance Monitor Local Control A0 */
  DDR_DDRC_PMLCB0_tag PMLCB0;          /* Performance Monitor Local Control B0 */
  DDR_DDRC_PMC0A_tag PMC0A;            /* PMC 0a */
  DDR_DDRC_PMC0B_tag PMC0B;            /* PMC 0b */
  DDR_DDRC_PMLCA1_tag PMLCA1;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB1_tag PMLCB1;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC1_tag PMC1;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved30[4];
  DDR_DDRC_PMLCA2_tag PMLCA2;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB2_tag PMLCB2;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC2_tag PMC2;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved31[4];
  DDR_DDRC_PMLCA3_tag PMLCA3;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB3_tag PMLCB3;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC3_tag PMC3;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved32[4];
  DDR_DDRC_PMLCA4_tag PMLCA4;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB4_tag PMLCB4;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC4_tag PMC4;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved33[4];
  DDR_DDRC_PMLCA5_tag PMLCA5;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB5_tag PMLCB5;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC5_tag PMC5;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved34[4];
  DDR_DDRC_PMLCA6_tag PMLCA6;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB6_tag PMLCB6;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC6_tag PMC6;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved35[4];
  DDR_DDRC_PMLCA7_tag PMLCA7;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB7_tag PMLCB7;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC7_tag PMC7;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved36[4];
  DDR_DDRC_PMLCA8_tag PMLCA8;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB8_tag PMLCB8;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC8_tag PMC8;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved37[4];
  DDR_DDRC_PMLCA9_tag PMLCA9;          /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB9_tag PMLCB9;          /* Performance Monitor Local Control B */
  DDR_DDRC_PMC9_tag PMC9;              /* Performance Monitor Counter */
  uint8_t DDR_DDRC_reserved38[4];
  DDR_DDRC_PMLCA10_tag PMLCA10;        /* Performance Monitor Local Control A */
  DDR_DDRC_PMLCB10_tag PMLCB10;        /* Performance Monitor Local Control B */
  DDR_DDRC_PMC10_tag PMC10;            /* Performance Monitor Counter */
};

/* ============================================================================
   =============================== Module: LSTCU ==============================
   ============================================================================ */

typedef union LSTCU_ERR_STAT_union_tag { /* Error Status */
  vuint32_t R;
  struct {
    vuint32_t INVP_FB:1;               /* Invalid Pointer FBIST */
    vuint32_t INVP_MB:1;               /* Invalid Pointer MBIST */
    vuint32_t INVP_LB:1;               /* Invalid Pointer LBIST */
    vuint32_t _unused_16:13;
    vuint32_t UFSF:1;                  /* Unrecoverable Fault Status */
    vuint32_t RFSF:1;                  /* Recoverable Fault Status */
    vuint32_t _unused_0:14;
  } B;
} LSTCU_ERR_STAT_tag;

typedef union LSTCU_ERR_FM_union_tag { /* Error Fault Mapping */
  vuint32_t R;
  struct {
    vuint32_t INVPFMFB:1;              /* Invalid BIST Pointer Fault Mapping During FBIST Scheduling */
    vuint32_t INVPFMMB:1;              /* Invalid BIST Pointer Fault Mapping During MBIST Scheduling */
    vuint32_t INVPFMLB:1;              /* Invalid BIST Pointer Fault Mapping During LBIST Scheduling */
    vuint32_t _unused_0:29;
  } B;
} LSTCU_ERR_FM_tag;

typedef union LSTCU_MB_RSTAT0_union_tag { /* MBIST Run Status 0 */
  vuint32_t R;
  struct {
    vuint32_t MBSTAT0:1;               /* MBIST Run Result Status 0 */
    vuint32_t _unused_16:15;
    vuint32_t _unused_0:16;
  } B;
} LSTCU_MB_RSTAT0_tag;

typedef union LSTCU_MBFM0_union_tag { /* MBIST Fault Mapping 0 */
  vuint32_t R;
  struct {
    vuint32_t MBSTATFM0:1;             /* MBIST Fault Mapping n */
    vuint32_t _unused_16:15;
    vuint32_t _unused_0:16;
  } B;
} LSTCU_MBFM0_tag;

typedef union LSTCU_STAG_union_tag { /* Stagger */
  vuint32_t R;
  struct {
    vuint32_t _unused_24:8;
    vuint32_t MB_DELAY:8;              /* MBIST Delay */
    vuint32_t _unused_8:8;
    vuint32_t _unused_0:8;
  } B;
} LSTCU_STAG_tag;

typedef union LSTCU_PH1_DUR_union_tag { /* Phase 1 Duration */
  vuint32_t R;
  struct {
    vuint32_t PH1DUR:10;               /* Phase 1 Duration */
    vuint32_t _unused_0:22;
  } B;
} LSTCU_PH1_DUR_tag;

typedef union LSTCU_DBGCTRL_union_tag { /* Debug Control */
  vuint32_t R;
  struct {
    vuint32_t MUX_SEL:1;               /* Debug Selector */
    vuint32_t _unused_0:31;
  } B;
} LSTCU_DBGCTRL_tag;

typedef union LSTCU_DBGSTAT_union_tag { /* Debug Status */
  vuint32_t R;
  struct {
    vuint32_t DBG_STAT:32;             /* Debug Status */
  } B;
} LSTCU_DBGSTAT_tag;

typedef union LSTCU_MBPTR_union_tag { /* MBIST Scheduler Pointer */
  vuint32_t R;
  struct {
    vuint32_t MBPTR:8;                 /* MBIST Pointer */
    vuint32_t MBCSM:1;                 /* MBIST Mode */
    vuint32_t _unused_1:22;
    vuint32_t MBEOL:1;                 /* MBIST End of List */
  } B;
} LSTCU_MBPTR_tag;

struct LSTCU_tag {
  uint8_t LSTCU_reserved0[8];
  LSTCU_ERR_STAT_tag ERR_STAT;      /* Error Status */
  uint8_t LSTCU_reserved1[4];
  LSTCU_ERR_FM_tag ERR_FM;          /* Error Fault Mapping */
  uint8_t LSTCU_reserved2[76];
  LSTCU_MB_RSTAT0_tag MB_RSTAT0;    /* MBIST Run Status 0 */
  uint8_t LSTCU_reserved3[284];
  LSTCU_MBFM0_tag MBFM0;            /* MBIST Fault Mapping 0 */
  uint8_t LSTCU_reserved4[220];
  LSTCU_STAG_tag STAG;              /* Stagger */
  uint8_t LSTCU_reserved5[12];
  LSTCU_PH1_DUR_tag PH1_DUR;        /* Phase 1 Duration */
  uint8_t DDR_LSTCU_reserved6[44];
  LSTCU_DBGCTRL_tag DBGCTRL;       /* Debug Control */
  uint8_t DDR_LSTCU_reserved7[4];
  LSTCU_DBGSTAT_tag DBGSTAT;       /* Debug Status */
  uint8_t DDR_LSTCU_reserved8[84];
  LSTCU_MBPTR_tag MBPTR[1];        /* MBIST Scheduler Pointer */
};

#define AON__FCCU (*(volatile struct AON_FCCU_tag *) 0x44570000UL)
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM (*(volatile struct CACHE_ECC_MCM_tag *) 0x44401000UL)
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM (*(volatile struct CACHE_ECC_MCM_tag *) 0x4D1A1000UL)
#define M7__A7_APB_MCM1 (*(volatile struct M7_A7_APB_MCM_tag *) 0x4A0A0000UL)
#define M7_1__A7_APB_MCM1 (*(volatile struct M7_A7_APB_MCM_tag *) 0x49CA0000UL)

/*= SAF =*/
/* VFCCU */
#define AON_VFCCU (*(volatile struct SAFETYBASE_VFCCU_tag *) 0x44570000UL)

/* EIM */
#define AON_EIMA (*(volatile struct EIM_tag *) 0x44550000UL)
#define NOC_EIMN (*(volatile struct EIM_tag *) 0x49210000UL)
#define M7_EIM (*(volatile struct EIM_tag *) 0x4A060000UL)
#define M7_1_EIM (*(volatile struct EIM_tag *) 0x49C60000UL)
#define NPU_EIM_NPUMIX (*(volatile struct EIM_tag *) 0x4A860000UL)
#define WAKEUP_EIMW (*(volatile struct EIM_tag *) 0x42780000UL)
#define NETC_EIM (*(volatile struct EIM_tag *) 0x4D070000UL)

/* SRAMCTL */
#define OCRAM_BASE_ADDR (0x20480000UL)
#define OCRAM_SIZE (0x00060000UL)
#define NOC_SRAMCTL (*(volatile struct SRAMCTL_tag *) 0x490A0000UL)

/* DDRC */
#define DDRC (*(volatile struct DDR_DDRC_tag *) 0x4E080000UL)

/* ERM */
#define AON_ERMA (*(volatile struct ERM_tag *) 0x44560000UL)
#define M7_ERM (*(volatile struct ERM_tag *) 0x4A070000UL)
#define M7_1_ERM (*(volatile struct ERM_tag *) 0x49C70000UL)
#define NPU_ERM_NPUMIX (*(volatile struct ERM_tag *) 0x4A870000UL)
#define WAKEUP_ERMW (*(volatile struct ERM_tag *) 0x42790000UL)
#define NETC_ERM (*(volatile struct ERM_tag *) 0x4D060000UL)

/* LSTCU */
#define AON_LSTCUA (*(volatile struct LSTCU_tag *) 0x445A0000UL)
#define NOC_LSTCUN (*(volatile struct LSTCU_tag *) 0x490B0000UL)
#define DDRC_LSTCU (*(volatile struct LSTCU_tag *) 0x4E050000UL)
#define M7_LSTCU_M7MIX (*(volatile struct LSTCU_tag *) 0x4A050000UL)
#define M7_1_LSTCU_M7MIX (*(volatile struct LSTCU_tag *) 0x49C50000UL)
#define NPU_LSTCU_NPUMIX (*(volatile struct LSTCU_tag *) 0x4A850000UL)
#define NETC_LSTCU (*(volatile struct NETC_LSTCU_tag *) 0x4D090000UL)

/* AON_FCCU */
#define AON__FCCU_GRKNTIMC0  AON__FCCU.GRKNTIMC[0].R       /* Global Reaction Timer Period */
#define AON__FCCU_GFLTRC_C0  AON__FCCU.GFLTRC_C0.R         /* Global Fault Recovery */
#define AON__FCCU_GFLTRC_C1  AON__FCCU.GFLTRC_C1.R         /* Global Fault Recovery */
#define AON__FCCU_GFLTRC_C2  AON__FCCU.GFLTRC_C2.R         /* Global Fault Recovery */
#define AON__FCCU_GFLTOVDC0  AON__FCCU.GFLTOVDC0.R         /* Global Fault Overflow Detection */
#define AON__FCCU_GFLTOVDC1  AON__FCCU.GFLTOVDC1.R         /* Global Fault Overflow Detection */
#define AON__FCCU_GFLTOVDC2  AON__FCCU.GFLTOVDC2.R         /* Global Fault Overflow Detection */
#define AON__FCCU_GRKNTIMS   AON__FCCU.GRKNTIMS.R          /* Global Reaction Timer Status */
#define AON__FCCU_GCTRL      AON__FCCU.GCTRL.R             /* Global Space Control */
#define AON__FCCU_GINTOVFS   AON__FCCU.GINTOVFS.R          /* Global DID FSM Status */
#define AON__FCCU_GOVFRKC0   AON__FCCU.GOVFRKC[0].R        /* Global Overflow Reaction */
#define AON__FCCU_GMEOUTDC   AON__FCCU.GMEOUTDC.R          /* Global Minimum EOUT Duration */
#define AON__FCCU_GEOUTTCT   AON__FCCU.GEOUTTCT.R          /* Global EOUT Timer Disable */
#define AON__FCCU_GEOUTPNC0  AON__FCCU.GLB_EOUT[0].GEOUTPNC.R /* Global EOUT Pin */
#define AON__FCCU_GEOUTPMC0  AON__FCCU.GLB_EOUT[0].GEOUTPMC.R /* Global EOUT Pin Map */
#define AON__FCCU_GEOUTMC0   AON__FCCU.GLB_EOUT[0].GEOUTMC.R /* Global EOUT Mode */
#define AON__FCCU_GEOUTTMS0  AON__FCCU.GLB_EOUT[0].GEOUTTMS.R /* Global EOUT Timer Status */
#define AON__FCCU_GEOUTDIC0  AON__FCCU.GLB_EOUT[0].GEOUTDIC.R /* Global EOUT DID */
#define AON__FCCU_GEOUTPNC1  AON__FCCU.GLB_EOUT[1].GEOUTPNC.R /* Global EOUT Pin */
#define AON__FCCU_GEOUTPMC1  AON__FCCU.GLB_EOUT[1].GEOUTPMC.R /* Global EOUT Pin Map */
#define AON__FCCU_GEOUTMC1   AON__FCCU.GLB_EOUT[1].GEOUTMC.R /* Global EOUT Mode */
#define AON__FCCU_GEOUTTMS1  AON__FCCU.GLB_EOUT[1].GEOUTTMS.R /* Global EOUT Timer Status */
#define AON__FCCU_GEOUTDIC1  AON__FCCU.GLB_EOUT[1].GEOUTDIC.R /* Global EOUT DID */
#define AON__FCCU_GDBGCFG    AON__FCCU.GDBGCFG.R           /* Global Debug */
#define AON__FCCU_GDBGSTAT   AON__FCCU.GDBGSTAT.R          /* Global Debug Status */
#define AON__FCCU_GDPFSTAT   AON__FCCU.GDPFSTAT.R          /* Global Debug Pending Fault Status */
#define AON__FCCU_GDALTRLD   AON__FCCU.GDALTRLD.R          /* Global Debug Alternate Reload Status */
#define AON__FCCU_FHCFG0     AON__FCCU.FHCFG0.R            /* Fault Handler */
#define AON__FCCU_FHSRVDS0   AON__FCCU.FHSRVDS0.R          /* Fault Handler Status */
#define AON__FCCU_FHFLTENC0_0 AON__FCCU.FHFLTENC0_0.R      /* Fault Enable */
#define AON__FCCU_FHFLTENC0_1 AON__FCCU.FHFLTENC0_1.R      /* Fault Enable */
#define AON__FCCU_FHFLTENC0_2 AON__FCCU.FHFLTENC0_2.R      /* Fault Enable */
#define AON__FCCU_FHFLTS0_0  AON__FCCU.FHFLTS0_0.R         /* Fault Status */
#define AON__FCCU_FHFLTS0_1  AON__FCCU.FHFLTS0_1.R         /* Fault Status */
#define AON__FCCU_FHFLTS0_2  AON__FCCU.FHFLTS0_2.R         /* Fault Status */
#define AON__FCCU_FHFLTRKC0_0 AON__FCCU.FHFLTRKC0_0.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_1 AON__FCCU.FHFLTRKC0_1.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_2 AON__FCCU.FHFLTRKC0_2.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_3 AON__FCCU.FHFLTRKC0_3.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_4 AON__FCCU.FHFLTRKC0_4.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_5 AON__FCCU.FHFLTRKC0_5.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_6 AON__FCCU.FHFLTRKC0_6.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_7 AON__FCCU.FHFLTRKC0_7.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_8 AON__FCCU.FHFLTRKC0_8.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_9 AON__FCCU.FHFLTRKC0_9.R      /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_10 AON__FCCU.FHFLTRKC0_10.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_11 AON__FCCU.FHFLTRKC0_11.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_12 AON__FCCU.FHFLTRKC0_12.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_13 AON__FCCU.FHFLTRKC0_13.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_14 AON__FCCU.FHFLTRKC0_14.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_15 AON__FCCU.FHFLTRKC0_15.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_16 AON__FCCU.FHFLTRKC0_16.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_17 AON__FCCU.FHFLTRKC0_17.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_18 AON__FCCU.FHFLTRKC0_18.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHFLTRKC0_19 AON__FCCU.FHFLTRKC0_19.R    /* Fault Reaction Set Configuration */
#define AON__FCCU_FHIMRKC0_00 AON__FCCU.FHIMRKC0_00.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_00 AON__FCCU.FHDLRKC0_00.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_10 AON__FCCU.FHIMRKC0_10.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_10 AON__FCCU.FHDLRKC0_10.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_20 AON__FCCU.FHIMRKC0_20.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_20 AON__FCCU.FHDLRKC0_20.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_30 AON__FCCU.FHIMRKC0_30.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_30 AON__FCCU.FHDLRKC0_30.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_40 AON__FCCU.FHIMRKC0_40.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_40 AON__FCCU.FHDLRKC0_40.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_50 AON__FCCU.FHIMRKC0_50.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_50 AON__FCCU.FHDLRKC0_50.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_60 AON__FCCU.FHIMRKC0_60.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_60 AON__FCCU.FHDLRKC0_60.R      /* Delayed Reaction Configuration */
#define AON__FCCU_FHIMRKC0_70 AON__FCCU.FHIMRKC0_70.R      /* Immediate Reaction Configuration */
#define AON__FCCU_FHDLRKC0_70 AON__FCCU.FHDLRKC0_70.R      /* Delayed Reaction Configuration */

/* CACHE_ECC_MCM */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CACHE_ECCR AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CACHE_ECCR.R /* CACHE ECC Control */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_STATUS AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_STATUS.R /* Interrupt Status */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_STAT_EN AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_STAT_EN.R /* Interrupt Status Enable */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_SIG_EN AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_SIG_EN.R /* Interrupt Enable */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_SINGLE_ERROR_INFO.R /* Code Cache Single-Bit ECC Error Information */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_SINGLE_ERROR_ADDR.R /* Code Cache Single-Bit ECC Error Address */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_MULTI_ERROR_INFO.R /* Code Cache Multibit ECC Error Information */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO.R /* System Cache Single-Bit ECC Error Information */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR.R /* System Cache Single-Bit ECC Error Address */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_MULTI_ERROR_INFO.R /* System Cache Multibit ECC Error Information */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_MULTI_ERROR_DATA.R /* System Cache Multibit ECC Error Data */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_TAG0_ECC_ERROR_INJEC.R /* Code Cache TAG0 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_TAG1_ECC_ERROR_INJEC.R /* Code Cache TAG1 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_DATA0_ECC_ERROR_INJEC.R /* Code Cache DATA0 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_DATA1_ECC_ERROR_INJEC.R /* Code Cache DATA1 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYTEM_CACHE_TAG0_ECC_ERROR_INJEC.R /* System Cache TAG0 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC.R /* System Cache TAG1 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC.R /* System Cache DATA0 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.STSTEM_CACHE_DATA1_ECC_ERROR_INJEC.R /* System Cache DATA1 ECC Error Injection */
#define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_FCCU_SW_FAULTS AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.FCCU_SW_FAULTS.R /* FCCU Software Faults */

#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CACHE_ECCR NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CACHE_ECCR.R /* CACHE ECC Control */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_STATUS NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_STATUS.R /* Interrupt Status */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_STAT_EN NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_STAT_EN.R /* Interrupt Status Enable */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_INT_SIG_EN NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.INT_SIG_EN.R /* Interrupt Enable */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_INFO NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_SINGLE_ERROR_INFO.R /* Code Cache Single-Bit ECC Error Information */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_SINGLE_ERROR_ADDR NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_SINGLE_ERROR_ADDR.R /* Code Cache Single-Bit ECC Error Address */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_ECC_MULTI_ERROR_INFO NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_ECC_MULTI_ERROR_INFO.R /* Code Cache Multibit ECC Error Information */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_SINGLE_ERROR_INFO.R /* System Cache Single-Bit ECC Error Information */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_SINGLE_ERROR_ADDR.R /* System Cache Single-Bit ECC Error Address */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_INFO NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_MULTI_ERROR_INFO.R /* System Cache Multibit ECC Error Information */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_ECC_MULTI_ERROR_DATA NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_ECC_MULTI_ERROR_DATA.R /* System Cache Multibit ECC Error Data */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_TAG0_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_TAG0_ECC_ERROR_INJEC.R /* Code Cache TAG0 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_TAG1_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_TAG1_ECC_ERROR_INJEC.R /* Code Cache TAG1 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_DATA0_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_DATA0_ECC_ERROR_INJEC.R /* Code Cache DATA0 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_CODE_CACHE_DATA1_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.CODE_CACHE_DATA1_ECC_ERROR_INJEC.R /* Code Cache DATA1 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYTEM_CACHE_TAG0_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYTEM_CACHE_TAG0_ECC_ERROR_INJEC.R /* System Cache TAG0 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_TAG1_ECC_ERROR_INJEC.R /* System Cache TAG1 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.SYSTEM_CACHE_DATA0_ECC_ERROR_INJEC.R /* System Cache DATA0 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_STSTEM_CACHE_DATA1_ECC_ERROR_INJEC NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.STSTEM_CACHE_DATA1_ECC_ERROR_INJEC.R /* System Cache DATA1 ECC Error Injection */
#define NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_FCCU_SW_FAULTS NETC__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM.FCCU_SW_FAULTS.R /* FCCU Software Faults */

/* M7_A7_APB_MCM */
#define M7__A7_APB_MCM1_ERR_INFO_EN M7__A7_APB_MCM1.ERR_INFO_EN.R /* Error Info Enable */
#define M7__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_INFO M7__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_INFO.R /* ITCM single-bit ECC Error Information */
#define M7__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_ADDR M7__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_ADDR.R /* ITCM single-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_DATA_LSB M7__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_DATA_LSB.R /* ITCM single-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_DATA_MSB M7__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_DATA_MSB.R /* ITCM single-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_INFO M7__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_INFO.R /* ITCM multi-bit ECC Error Information Register */
#define M7__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_ADDR M7__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_ADDR.R /* ITCM multi-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_DATA_LSB M7__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_DATA_LSB.R /* ITCM multi-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_DATA_MSB M7__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_DATA_MSB.R /* ITCM multi-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_INFO M7__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_INFO.R /* D0TCM single-bit ECC Error Information Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_ADDR M7__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_ADDR.R /* D0TCM single-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_DATA M7__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_DATA.R /* D0TCM single-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_INFO M7__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_INFO.R /* D0TCM multi-bit ECC Error Information Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_ADDR M7__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_ADDR.R /* D0TCM multi-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_DATA M7__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_DATA.R /* D0TCM multi-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_INFO M7__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_INFO.R /* D1TCM single-bit ECC Error Information Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_ADDR M7__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_ADDR.R /* D1TCM single-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_DATA M7__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_DATA.R /* D1TCM single-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_INFO M7__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_INFO.R /* D1TCM multi-bit ECC Error Information Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_ADDR M7__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_ADDR.R /* D1TCM multi-bit ECC Error Address Register */
#define M7__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_DATA M7__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_DATA.R /* D1TCM multi-bit ECC Error Data Register */
#define M7__A7_APB_MCM1_FCCU_SW_FAULTS M7__A7_APB_MCM1.FCCU_SW_FAULTS.R /* FCCU Software Faults */

#define M7_1__A7_APB_MCM1_ERR_INFO_EN M7_1__A7_APB_MCM1.ERR_INFO_EN.R /* Error Info Enable */
#define M7_1__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_INFO M7_1__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_INFO.R /* ITCM single-bit ECC Error Information */
#define M7_1__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_ADDR M7_1__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_ADDR.R /* ITCM single-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_DATA_LSB M7_1__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_DATA_LSB.R /* ITCM single-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_SINGLE_ERROR_DATA_MSB M7_1__A7_APB_MCM1.ITCM_ECC_SINGLE_ERROR_DATA_MSB.R /* ITCM single-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_INFO M7_1__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_INFO.R /* ITCM multi-bit ECC Error Information Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_ADDR M7_1__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_ADDR.R /* ITCM multi-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_DATA_LSB M7_1__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_DATA_LSB.R /* ITCM multi-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_ITCM_ECC_MULTI_ERROR_DATA_MSB M7_1__A7_APB_MCM1.ITCM_ECC_MULTI_ERROR_DATA_MSB.R /* ITCM multi-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_INFO M7_1__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_INFO.R /* D0TCM single-bit ECC Error Information Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_ADDR M7_1__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_ADDR.R /* D0TCM single-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_SINGLE_ERROR_DATA M7_1__A7_APB_MCM1.D0TCM_ECC_SINGLE_ERROR_DATA.R /* D0TCM single-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_INFO M7_1__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_INFO.R /* D0TCM multi-bit ECC Error Information Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_ADDR M7_1__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_ADDR.R /* D0TCM multi-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_D0TCM_ECC_MULTI_ERROR_DATA M7_1__A7_APB_MCM1.D0TCM_ECC_MULTI_ERROR_DATA.R /* D0TCM multi-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_INFO M7_1__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_INFO.R /* D1TCM single-bit ECC Error Information Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_ADDR M7_1__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_ADDR.R /* D1TCM single-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_SINGLE_ERROR_DATA M7_1__A7_APB_MCM1.D1TCM_ECC_SINGLE_ERROR_DATA.R /* D1TCM single-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_INFO M7_1__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_INFO.R /* D1TCM multi-bit ECC Error Information Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_ADDR M7_1__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_ADDR.R /* D1TCM multi-bit ECC Error Address Register */
#define M7_1__A7_APB_MCM1_D1TCM_ECC_MULTI_ERROR_DATA M7_1__A7_APB_MCM1.D1TCM_ECC_MULTI_ERROR_DATA.R /* D1TCM multi-bit ECC Error Data Register */
#define M7_1__A7_APB_MCM1_FCCU_SW_FAULTS M7_1__A7_APB_MCM1.FCCU_SW_FAULTS.R /* FCCU Software Faults */

#endif /* defined(SAFETY_BASE_MIMX94XX) */

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
#endif /* ifdef _SafetyBase_MIMX94XX_SAF_H_ */
