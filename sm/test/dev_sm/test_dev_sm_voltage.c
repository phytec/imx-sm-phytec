/*
** ###################################################################
**
** Copyright 2023-2025 NXP
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
/* Unit test for the device SM voltage API.                                 */
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
/* Test device SM voltage                                                   */
/*--------------------------------------------------------------------------*/
void TEST_DevSmVoltage(void)
{
    string name;
    int32_t len = 0;

    /* Device tests */
    printf("**** Device SM Voltage API Tests ***\n\n");

    /* Test API correct calls per domain */
    for (uint32_t domainId = 0U; domainId < DEV_SM_NUM_VOLT; domainId++)
    {
        printf("DEV_SM_VoltageNameGet(%u)\n", domainId);
        CHECK(DEV_SM_VoltageNameGet(domainId, &name, &len));
        printf("  name=%s\n",  name);
        printf("  len=%d\n",  len);

        printf("DEV_SM_VoltageModeNameGet(%u)\n", domainId);
        CHECK(DEV_SM_VoltageModeNameGet(domainId, &name, &len));
        printf("  name=%s\n",  name);
        printf("  len=%d\n",  len);
    }

    /* Test API correct calls per voltage mode */
    uint8_t tempMode = 0U;

    /* Get the Volt Mode */
    printf("DEV_SM_VoltageModeGet()\n");
    CHECK(DEV_SM_VoltageModeGet(0U, &tempMode));

    /* Set the Volt Mode */
    printf("DEV_SM_VoltageModeSet(%u)\n", tempMode);
    CHECK(DEV_SM_VoltageModeSet(0U, tempMode));

    /* Get the Volt Mode */
    printf("DEV_SM_VoltageModeGet(%u)\n", tempMode);
    CHECK(DEV_SM_VoltageModeGet(0U, &tempMode));

    /* Invalid domainId */
    {
        uint8_t voltMode = 0U;

        /* Set the Volt Mode */
        printf("DEV_SM_VoltageModeSet(%u)\n", voltMode);
        NECHECK(DEV_SM_VoltageModeSet(DEV_SM_NUM_VOLT, voltMode),
            SM_ERR_NOT_FOUND);

        /* Get the Volt Mode */
        printf("DEV_SM_VoltageModeGet(%u)\n", voltMode);
        NECHECK(DEV_SM_VoltageModeGet(DEV_SM_NUM_VOLT, &voltMode),
            SM_ERR_NOT_FOUND);

    }

    /* Test All Voltage Levels */
    {
        dev_sm_voltage_range_t range;

        printf("DEV_SM_VoltageDescribe\n");
        CHECK(DEV_SM_VoltageDescribe(0U, &range));

        printf("   maxLevel=%d\n", range.highestVolt);
        printf("   minLevel=%d\n", range.lowestVolt);
        printf("   stepSize=%d\n", range.stepSize);

        {
            int32_t level = 0, tempLevel = 0;

            /* Get the Level */
            CHECK(DEV_SM_VoltageLevelGet(0U, &level));

            printf("voltage level: %d\n", level);

            /* Set the Level */
            /* Intentional: Test code */
            // coverity[cert_int30_c_violation]
            CHECK(DEV_SM_VoltageLevelSet(0U, (level - BOARD_PERF_VDROP)));

            /* Get the Level */
            CHECK(DEV_SM_VoltageLevelGet(0U, &tempLevel));

            /* Ensure Correctness */
            BCHECK(tempLevel == level);
        }

        /* Invalid volt num */
        {
            int32_t level = 0;

            /* Invalid: Set the Level */
            NECHECK(DEV_SM_VoltageLevelSet(DEV_SM_NUM_VOLT, level),
                SM_ERR_NOT_FOUND);

            /* Invalid Get the Level */
            NECHECK(DEV_SM_VoltageLevelGet(DEV_SM_NUM_VOLT, &level),
                SM_ERR_NOT_FOUND);
        }

        printf("Level tests completed\n");
    }

    /* Test API bounds */
    printf("\n**** Device SM Voltage API Err Tests ***\n\n");

    /* Test API invalid domainId */
    {
        printf("DEV_SM_VoltageNameGet(%lu)\n", DEV_SM_NUM_VOLT);
        NECHECK(DEV_SM_VoltageNameGet(DEV_SM_NUM_VOLT, &name, &len),
            SM_ERR_NOT_FOUND);

        printf("DEV_SM_VoltageModeNameGet(%u)\n", DEV_SM_NUM_VOLT_MODE);
        NECHECK(DEV_SM_VoltageModeNameGet(DEV_SM_NUM_VOLT_MODE, &name,
            &len), SM_ERR_NOT_FOUND);
    }

    printf("\n");
}

