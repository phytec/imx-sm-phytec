/*
** ###################################################################
**
**     Copyright 2025 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

#ifndef DEV_SM_CPU_H
#define DEV_SM_CPU_H

/*==========================================================================*/
/*!
 * @addtogroup DEV_SM_MX94_CPU
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the SM API for the device CPUs.
 */
/*==========================================================================*/

/* Includes */

#include "sm.h"
#include "fsl_cpu.h"

/* Defines */

/*! Number of device CPUs */
#define DEV_SM_NUM_CPU      CPU_NUM_IDX

/*! Number of device peripheral LPIs */
#define DEV_SM_NUM_PERLPI   CPU_NUM_PER_LPI_IDX

/*!
 * @name Device CPU indexes
 *
 * See the CPU Mode Control (CMC) list in General Power Controller (GPC) section
 * of the i.MX95 RM.
 */
/** @{ */
#define DEV_SM_CPU_M33P     CPU_IDX_M33P   /*!< 0: CM33 (SM) */
#define DEV_SM_CPU_M7P0     CPU_IDX_M7P_0  /*!< 1: CM7_0 */
#define DEV_SM_CPU_A55C0    CPU_IDX_A55C0  /*!< 2: CA55 core 0 */
#define DEV_SM_CPU_A55C1    CPU_IDX_A55C1  /*!< 3: CA55 core 1 */
#define DEV_SM_CPU_A55C2    CPU_IDX_A55C2  /*!< 4: CA55 core 2 */
#define DEV_SM_CPU_A55C3    CPU_IDX_A55C3  /*!< 5: CA55 core 3 */
#define DEV_SM_CPU_A55P     CPU_IDX_A55P   /*!< 6: CA55 platform */
#define DEV_SM_CPU_M7P1     CPU_IDX_M7P_1  /*!< 7: M7P_1 */
#define DEV_SM_CPU_M33S     CPU_IDX_M33P_S /*!< 8: M33 Sync */
/** @} */

/*!
 * @name CPU sleep modes
 */
/** @{ */
/*! On */
#define DEV_SM_CPU_SLEEP_MODE_RUN        CPU_SLEEP_MODE_RUN
/*! Wait mode */
#define DEV_SM_CPU_SLEEP_MODE_WAIT       CPU_SLEEP_MODE_WAIT
/*! Stop mode */
#define DEV_SM_CPU_SLEEP_MODE_STOP       CPU_SLEEP_MODE_STOP
/*! Suspend mode */
#define DEV_SM_CPU_SLEEP_MODE_SUSPEND    CPU_SLEEP_MODE_SUSPEND
/** @} */

/*!
 * @name CPU sleep flags
 *
 */
/** @{ */
/*! Select between GPC or GIC for wakeup */
#define DEV_SM_CPU_SLEEP_FLAG_IRQ_MUX    0x1U
/*! Wake A55 CPU during A55 platform wakeup */
#define DEV_SM_CPU_SLEEP_FLAG_A55P_WAKE  0x2U
/** @} */

/*!
 * @name Device peripheral LPI indexes
 */
/** @{ */
#define DEV_SM_PERLPI_GPIO1     CPU_PER_LPI_IDX_GPIO1     /*!< 0: GPIO1 */
#define DEV_SM_PERLPI_GPIO2     CPU_PER_LPI_IDX_GPIO2     /*!< 1: GPIO2 */
#define DEV_SM_PERLPI_GPIO3     CPU_PER_LPI_IDX_GPIO3     /*!< 2: GPIO3 */
#define DEV_SM_PERLPI_GPIO4     CPU_PER_LPI_IDX_GPIO4     /*!< 3: GPIO4 */
#define DEV_SM_PERLPI_GPIO5     CPU_PER_LPI_IDX_GPIO5     /*!< 4: GPIO5 */
#define DEV_SM_PERLPI_GPIO6     CPU_PER_LPI_IDX_GPIO6     /*!< 5: GPIO6 */
#define DEV_SM_PERLPI_GPIO7     CPU_PER_LPI_IDX_GPIO7     /*!< 6: GPIO7 */
#define DEV_SM_PERLPI_CAN1      CPU_PER_LPI_IDX_CAN1      /*!< 7: CAN1 */
#define DEV_SM_PERLPI_CAN2      CPU_PER_LPI_IDX_CAN2      /*!< 8: CAN2 */
#define DEV_SM_PERLPI_CAN3      CPU_PER_LPI_IDX_CAN3      /*!< 9: CAN3 */
#define DEV_SM_PERLPI_CAN4      CPU_PER_LPI_IDX_CAN4      /*!< 10: CAN4 */
#define DEV_SM_PERLPI_CAN5      CPU_PER_LPI_IDX_CAN5      /*!< 11: CAN5 */
#define DEV_SM_PERLPI_LPUART1   CPU_PER_LPI_IDX_LPUART1   /*!< 12: LPUART1 */
#define DEV_SM_PERLPI_LPUART2   CPU_PER_LPI_IDX_LPUART2   /*!< 13: LPUART2 */
#define DEV_SM_PERLPI_LPUART3   CPU_PER_LPI_IDX_LPUART3   /*!< 14: LPUART3 */
#define DEV_SM_PERLPI_LPUART4   CPU_PER_LPI_IDX_LPUART4   /*!< 15: LPUART4 */
#define DEV_SM_PERLPI_LPUART5   CPU_PER_LPI_IDX_LPUART5   /*!< 16: LPUART5 */
#define DEV_SM_PERLPI_LPUART6   CPU_PER_LPI_IDX_LPUART6   /*!< 17: LPUART6 */
#define DEV_SM_PERLPI_LPUART7   CPU_PER_LPI_IDX_LPUART7   /*!< 18: LPUART7 */
#define DEV_SM_PERLPI_LPUART8   CPU_PER_LPI_IDX_LPUART8   /*!< 19: LPUART8 */
#define DEV_SM_PERLPI_LPUART9   CPU_PER_LPI_IDX_LPUART9   /*!< 20: LPUART9 */
#define DEV_SM_PERLPI_LPUART10  CPU_PER_LPI_IDX_LPUART10  /*!< 21: LPUART10 */
#define DEV_SM_PERLPI_LPUART11  CPU_PER_LPI_IDX_LPUART11  /*!< 22: LPUART11 */
#define DEV_SM_PERLPI_LPUART12  CPU_PER_LPI_IDX_LPUART12  /*!< 23: LPUART12 */
#define DEV_SM_PERLPI_WDOG3     CPU_PER_LPI_IDX_WDOG3     /*!< 24: WDOG3 */
#define DEV_SM_PERLPI_WDOG4     CPU_PER_LPI_IDX_WDOG4     /*!< 25: WDOG4 */
#define DEV_SM_PERLPI_WDOG5     CPU_PER_LPI_IDX_WDOG5     /*!< 26: WDOG5 */
#define DEV_SM_PERLPI_WDOG6     CPU_PER_LPI_IDX_WDOG6     /*!< 27: WDOG6 */
#define DEV_SM_PERLPI_WDOG7     CPU_PER_LPI_IDX_WDOG7     /*!< 28: WDOG7 */
#define DEV_SM_PERLPI_WDOG8     CPU_PER_LPI_IDX_WDOG8     /*!< 29: WDOG8 */
/** @} */

/* Types */

/* Functions */

/** @} */

/* Include SM device API */

// coverity[misra_c_2012_rule_20_1_violation:FALSE]
#include "dev_sm_cpu_api.h"

#endif /* DEV_SM_CPU_H */

