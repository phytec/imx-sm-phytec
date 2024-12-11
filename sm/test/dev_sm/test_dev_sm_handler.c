/*
** ###################################################################
**
** Copyright 2023-2024 NXP
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

/*==========================================================================*/
/* Unit test for the device SM API.                                         */
/*==========================================================================*/

/* DEV_00010 */

/* Include Config */

/* Includes */

#include "test.h"
#include "dev_sm.h"

/* Local defines */

/* Local types */

/* Local variables */

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Test IRQ handlers                                                        */
/*--------------------------------------------------------------------------*/
void TEST_DevSmHandler(void)
{
    printf("TEST_DevSmHandler\n");
#ifndef SIMU
    SM_TestModeSet(SM_TEST_MODE_DEV_LVL1);

    NVIC_EnableIRQ(NMI_INT_TRIGGER);
    SCB->ICSR |= 1U << SCB_ICSR_PENDNMISET_Pos;

#ifdef BUS_FAULT_INT_TRIGGER
    BusFault_Handler(0x0U);
#endif

#ifdef USAGE_FAULT_INT_TRIGGER
    UsageFault_Handler(0x0U);
#endif

#ifdef MEM_MANAGEMENT_FAULT_INT
    MemManage_Handler(0x0U);
#endif

#ifdef HARD_FAULT_INT_TRIGGER
    HardFault_Handler(0x0U);
#endif

#ifdef WDOG1_IRQ_HANDLER
    NVIC_EnableIRQ(WDOG1_IRQ_HANDLER);
    NVIC_SetPendingIRQ(WDOG1_IRQ_HANDLER);
#endif

#ifdef WDOG2_IRQ_HANDLER
    NVIC_EnableIRQ(WDOG2_IRQ_HANDLER);
    NVIC_SetPendingIRQ(WDOG2_IRQ_HANDLER);
#endif

#ifdef WDOG3_IRQ_HANDLER
    NVIC_EnableIRQ(WDOG3_IRQ_HANDLER);
    NVIC_SetPendingIRQ(WDOG3_IRQ_HANDLER);
#endif

#ifdef WDOG4_IRQ_HANDLER
    NVIC_EnableIRQ(WDOG4_IRQ_HANDLER);
    NVIC_SetPendingIRQ(WDOG4_IRQ_HANDLER);
#endif

#ifdef WDOG5_IRQ_HANDLER
    NVIC_EnableIRQ(WDOG5_IRQ_HANDLER);
    NVIC_SetPendingIRQ(WDOG5_IRQ_HANDLER);
#endif

#ifdef TMPSNS_ANA1_IRQ_HANDLER
    NVIC_EnableIRQ(TMPSNS_ANA1_IRQ_HANDLER);
    NVIC_SetPendingIRQ(TMPSNS_ANA1_IRQ_HANDLER);
#endif

#ifdef TMPSNS_ANA2_IRQ_HANDLER
    NVIC_EnableIRQ(TMPSNS_ANA2_IRQ_HANDLER);
    NVIC_SetPendingIRQ(TMPSNS_ANA2_IRQ_HANDLER);
#endif

#ifdef TMPSNS_CRTX1_IRQ_HANDLER
    NVIC_EnableIRQ(TMPSNS_CRTX1_IRQ_HANDLER);
    NVIC_SetPendingIRQ(TMPSNS_CRTX1_IRQ_HANDLER);
#endif

#ifdef TMPSNS_CRTX2_IRQ_HANDLER
    NVIC_EnableIRQ(TMPSNS_CRTX2_IRQ_HANDLER);
    NVIC_SetPendingIRQ(TMPSNS_CRTX2_IRQ_HANDLER);
#endif

#ifdef ELE_GRP1_IRQ_HANDLER
    NVIC_EnableIRQ(ELE_GRP1_IRQ_HANDLER);
    NVIC_SetPendingIRQ(ELE_GRP1_IRQ_HANDLER);
#endif

#ifdef ELE_GRP2_IRQ_HANDLER
    NVIC_EnableIRQ(ELE_GRP2_IRQ_HANDLER);
    NVIC_SetPendingIRQ(ELE_GRP2_IRQ_HANDLER);
#endif

#ifdef ELE_GRP3_IRQ_HANDLER
    NVIC_EnableIRQ(ELE_GRP3_IRQ_HANDLER);
    NVIC_SetPendingIRQ(ELE_GRP1_IRQ_HANDLER);
#endif

#ifdef CM7_LOOKUP_IRQ_HANDLER
    NVIC_EnableIRQ(CM7_LOOKUP_IRQ_HANDLER);
    NVIC_SetPendingIRQ(CM7_LOOKUP_IRQ_HANDLER);
#endif

#ifdef MU1_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU1_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU1_A_IRQ_HANDLER);
#endif

#ifdef MU2_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU2_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU2_A_IRQ_HANDLER);
#endif

#ifdef MU3_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU3_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU3_A_IRQ_HANDLER);
#endif

#ifdef MU3_B_IRQ_HANDLER
    NVIC_EnableIRQ(MU3_B_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU3_B_IRQ_HANDLER);
#endif

#ifdef MU4_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU4_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU4_A_IRQ_HANDLER);
#endif

#ifdef MU4_B_IRQ_HANDLER
    NVIC_EnableIRQ(MU4_B_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU4_B_IRQ_HANDLER);
#endif

#ifdef MU5_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU5_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU5_A_IRQ_HANDLER);
#endif

#ifdef MU6_A_IRQ_HANDLER
    NVIC_EnableIRQ(MU6_A_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU6_A_IRQ_HANDLER);
#endif

#ifdef MU6_B_IRQ_HANDLER
    NVIC_EnableIRQ(MU6_B_IRQ_HANDLER);
    NVIC_SetPendingIRQ(MU6_B_IRQ_HANDLER);
#endif

    SM_TestModeSet(SM_TEST_MODE_OFF);
#endif
}
