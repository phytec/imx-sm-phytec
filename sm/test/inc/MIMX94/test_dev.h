/*
** ###################################################################
**
** Copyright 2025 NXP
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

#ifndef TEST_DEV_H
#define TEST_DEV_H

/* Includes */

#include "MIMX94_SRC_GEN.h"

/* Defines */

#define ROM_CONTAINER_1  0x55CCU
#define ROM_CONTAINER_2  0xAA33U

#define NMI_INT_TRIGGER             NonMaskableInt_IRQn
#define HARD_FAULT_INT_TRIGGER      HardFault_IRQn
#define MEM_MANAGEMENT_FAULT_INT    MemoryManagement_IRQn
#define BUS_FAULT_INT_TRIGGER       BusFault_IRQn
#define USAGE_FAULT_INT_TRIGGER     UsageFault_IRQn
#define PEND_SV_SET_INT_TRIGGER     PendSV_IRQn
#define WDOG1_IRQ_HANDLER           WDOG1_IRQn
#define WDOG2_IRQ_HANDLER           WDOG2_IRQn
#define WDOG3_IRQ_HANDLER           WDOG3_IRQn
#define WDOG4_IRQ_HANDLER           WDOG4_IRQn
#define WDOG5_IRQ_HANDLER           WDOG5_IRQn
#define TMPSNS_ANA1_IRQ_HANDLER     TMPSNS_ANA_1_IRQn
#define TMPSNS_ANA2_IRQ_HANDLER     TMPSNS_ANA_2_IRQn
#define TMPSNS_CRTX1_IRQ_HANDLER    TMPSNS_CORTEXA_1_IRQ
#define TMPSNS_CRTX2_IRQ_HANDLER    TMPSNS_CORTEXA_2_IRQ
#define ELE_GRP1_IRQ_HANDLER        ELE_Group1_IRQn
#define ELE_GRP2_IRQ_HANDLER        ELE_Group2_IRQn
#define ELE_GRP3_IRQ_HANDLER        ELE_Group3_IRQn
#define CM7_LOOKUP_IRQ_HANDLER      CM7_0_LOCKUP_IRQn
#define MU1_A_IRQ_HANDLER           MU1_A_IRQn
#define MU2_A_IRQ_HANDLER           MU2_A_IRQn
#define MU3_A_IRQ_HANDLER           MU3_A_IRQn
#define MU3_B_IRQ_HANDLER           MU3_B_IRQn
#define MU4_A_IRQ_HANDLER           MU4_A_IRQn
#define MU4_B_IRQ_HANDLER           MU4_B_IRQn
#define MU5_A_IRQ_HANDLER           MU5_A_IRQn
#define MU6_A_IRQ_HANDLER           MU6_A_IRQn
#define MU6_B_IRQ_HANDLER           MU6_B_IRQn

#define HARDFAULT_IRQ_TRIGGER   HardFault_IRQn

#define HAS_FUSE_GET_SPEED

/* Local defines */

/* Types */

#endif /* TEST_DEV_H */

