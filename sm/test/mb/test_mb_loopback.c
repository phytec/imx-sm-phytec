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

/*==========================================================================*/
/* Unit test for the MB_LOOPBACK driver.                                    */
/*==========================================================================*/

/* Include Config */

/* Includes */

#include "test.h"
#include "mb_loopback.h"
#include "config_mb_loopback.h"

/* Local defines */

/* Local types */

/* Local variables */

/* Local functions */

/*--------------------------------------------------------------------------*/
/* Test MB loopback driver                                                  */
/*--------------------------------------------------------------------------*/
void TEST_MbLoopback(void)
{
    printf("**** MB Loopback Tests ***\n\n");

    /* Init out of range */
    NECHECK(MB_LOOPBACK_Init(SM_NUM_MB_LOOPBACK, 0U, false, 0U),
        SM_ERR_OUT_OF_RANGE);
    NECHECK(MB_LOOPBACK_Init(0U, SM_NUM_MB_LB_DB, false, 0U),
        SM_ERR_OUT_OF_RANGE);

    /* Ring out of range */
    NECHECK(MB_LOOPBACK_DoorbellRing(SM_NUM_MB_LOOPBACK, 0U),
        SM_ERR_OUT_OF_RANGE);
    NECHECK(MB_LOOPBACK_DoorbellRing(0U, SM_NUM_MB_LB_DB),
        SM_ERR_OUT_OF_RANGE);

    /* Abort out of range */
    NECHECK(MB_LOOPBACK_AbortSet(SM_NUM_MB_LOOPBACK, false),
        SM_ERR_OUT_OF_RANGE);
    NECHECK(MB_LOOPBACK_IsAborted(SM_NUM_MB_LOOPBACK, 0U),
        SM_ERR_OUT_OF_RANGE);
    NECHECK(MB_LOOPBACK_IsAborted(0U, SM_NUM_MB_LB_DB),
        SM_ERR_OUT_OF_RANGE);

    /* Get doorbell state */
    (void) MB_LOOPBACK_DoorbellState(0U, 0U);

    printf("\n");
}

