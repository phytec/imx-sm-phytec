/*
** ###################################################################
**
** Copyright 2023 NXP
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
/* Test device SM                                                           */
/*--------------------------------------------------------------------------*/
void TEST_DevSm(void)
{

    printf("**** Device SM API Tests ***\n\n");

#ifdef SIMU
    printf("PowerUpPost(DEV_SM_PD_0)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_0));

    printf("PowerUpPost(DEV_SM_PD_1)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_1));

    printf("PowerUpPost(DEV_SM_PD_2)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_2));

    printf("PowerUpPost(DEV_SM_PD_3)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_3));

    printf("PowerUpPost(DEV_SM_PD_4)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_4));

    printf("PowerUpPost(DEV_SM_PD_5)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_5));

    printf("PowerUpPost(DEV_SM_PD_6)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_6));

#else
#ifdef DEV_SM_PD_A55C0
    printf("PowerUpPost(DEV_SM_PD_A55C0)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C0));
#endif

#ifdef DEV_SM_PD_A55C1
    printf("PowerUpPost(DEV_SM_PD_A55C1)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C1));
#endif

#ifdef DEV_SM_PD_A55C2
    printf("PowerUpPost(DEV_SM_PD_A55C2)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C2));
#endif

#ifdef DEV_SM_PD_A55C3
    printf("PowerUpPost(DEV_SM_PD_A55C3)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C3));
#endif

#ifdef DEV_SM_PD_A55C4
    printf("PowerUpPost(DEV_SM_PD_A55C4)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C4));
#endif

#ifdef DEV_SM_PD_A55C5
    printf("PowerUpPost(DEV_SM_PD_A55C5)\n");
    CHECK(DEV_SM_PowerUpPost(DEV_SM_PD_A55C5));
#endif

#ifdef DEV_SM_PD_A55P
    printf("DEV_SM_PowerUpAckComplete(DEV_SM_PD_A55P)\n");
    CHECK(DEV_SM_PowerUpAckComplete(DEV_SM_PD_A55P));
#endif

    /* To call the default case */
    printf("DEV_SM_PowerUpAckComplete(DEV_SM_NUM_POWER)\n");
    NECHECK(DEV_SM_PowerUpAckComplete(DEV_SM_NUM_POWER), SM_ERR_NOT_FOUND);
#endif

    /* Test API bounds */
    printf("\n**** Device SM BBM API Err Tests ***\n\n");

    printf("PowerUpPost(DEV_SM_NUM_POWER)\n");
    NECHECK(DEV_SM_PowerUpPost(DEV_SM_NUM_POWER), SM_ERR_NOT_FOUND);

    printf("\n");
}

