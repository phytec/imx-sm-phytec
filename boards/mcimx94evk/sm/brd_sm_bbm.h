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
/*!
 * @addtogroup BRD_SM_MX94EVK
 * @{
 *
 * @file
 * @brief
 *
 * Header file containing the SM API for the board PCA2131.
 */
/*==========================================================================*/

#ifndef BRD_SM_BBM_H
#define BRD_SM_BBM_H

/* Includes */

#include "sm.h"
#include "dev_sm.h"
#include "fsl_pca2131.h"

/* Defines */

/*!
 * @name Board redirection defines
 * @{
 */
#define SM_BBMRTCNAMEGET       BRD_SM_BbmRtcNameGet       /*!< RTC name */
#define SM_BBMRTCDESCRIBE      BRD_SM_BbmRtcDescribe      /*!< RTC describe */
#define SM_BBMRTCTIMESET       BRD_SM_BbmRtcTimeSet       /*!< RTC time set */
#define SM_BBMRTCTIMEGET       BRD_SM_BbmRtcTimeGet       /*!< RTC time get */
#define SM_BBMRTCSTATEGET      BRD_SM_BbmRtcStateGet      /*!< RTC state get */
#define SM_BBMRTCALARMSET      BRD_SM_BbmRtcAlarmSet      /*!< RTC alarm set */
/** @} */

/*! Number of board RTC */
#define BRD_SM_NUM_RTC  1UL

/*! Total number of RTC */
#define SM_NUM_RTC  (DEV_SM_NUM_RTC + BRD_SM_NUM_RTC)

/*!
 * @name BRD_SM bbm domain indexes
 */
/** @{ */
#define BRD_SM_RTC_PCA2131  (BRD_SM_NUM_RTC + 0U)   /*!< PCA2131 RTC */
/** @} */

/* Types */

/* Functions */

/*!
 * @name Board sensor functions
 * @{
 */

/*!
 * Read raw byte data from the RTC.
 *
 * @param[in]     addr    I2C address to read
 * @param[in]     numVal  Number of bytes to read
 * @param[out]    val     Return pointer for data
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_INVALID_PARAMETERS: if \a numVal is invalid.
 * - ::SM_ERR_HARDWARE_ERROR: if I2C transfer fails.
 */
int32_t BRD_SM_BbmRtcWrite(uint32_t addr, uint32_t numVal,
    const uint32_t *val);

/*!
 * Write raw byte data to the RTC.
 *
 * @param[in]     addr    I2C address to write
 * @param[in]     numVal  Number of bytes to write
 * @param[in]     val     Pointer to data
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_INVALID_PARAMETERS: if \a numVal is invalid.
 * - ::SM_ERR_HARDWARE_ERROR: if I2C transfer fails.
 */
int32_t BRD_SM_BbmRtcRead(uint32_t addr, uint32_t numVal, uint32_t *val);

/*!
 * Get a board RTC name.
 *
 * @param[in]     rtcId        RTC name to get
 * @param[out]    rtcNameAddr  Return pointer to name
 * @param[out]    len          Return max length of all RTC names
 *
 * This function allows the caller to get the name of an RTC.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_NOT_FOUND: if \a rtcId is invalid.
 */
int32_t BRD_SM_BbmRtcNameGet(uint32_t rtcId, string *rtcNameAddr,
    int32_t *len);

/*!
 * Get a board RTC description.
 *
 * @param[in]     rtcId        RTC description to get
 * @param[out]    secWidth     Return pointer to seconds width
 * @param[out]    tickWidth    Return pointer to tick width
 * @param[out]    ticksPerSec  Return pointer to ticks per second
 *
 * This function allows the caller to get the description of an RTC.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_NOT_FOUND: if \a rtcId is invalid.
 */
int32_t BRD_SM_BbmRtcDescribe(uint32_t rtcId, uint32_t *secWidth,
    uint32_t *tickWidth, uint32_t *ticksPerSec);

/*!
 * Set a board RTC time.
 *
 * @param[in]     rtcId    Identifier of the RTC
 * @param[in]     val      Time in seconds/ticks to write to the RTC
 * @param[in]     ticks    true = ticks, false = seconds
 *
 * This function allows a caller to set the RTC time. Time can be set in units
 * of ticks or seconds.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_SUCCESS: if the RTC time was successfully set.
 * - ::SM_ERR_NOT_FOUND: if \a rtcId pertains to a non-existent RTC.
 * - ::SM_ERR_INVALID_PARAMETERS: if the time is not valid (beyond the
 *   range of the RTC).
 */
int32_t BRD_SM_BbmRtcTimeSet(uint32_t rtcId, uint64_t val, bool ticks);

/*!
 * Get a board RTC time.
 *
 * @param[in]     rtcId    Identifier of the RTC
 * @param[out]    val      Time in seconds/ticks read from the RTC
 * @param[in]     ticks    true = ticks, false = seconds
 *
 * This function allows a caller to read the RTC time. Time can be read in
 * units of ticks or seconds.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_SUCCESS: if the RTC time was successfully read.
 * - ::SM_ERR_NOT_FOUND: if \a rtcId pertains to a non-existent RTC.
 */
int32_t BRD_SM_BbmRtcTimeGet(uint32_t rtcId, uint64_t *val, bool ticks);

/*!
 * Get a board RTC state.
 *
 * @param[in]     rtcId    Identifier of the RTC
 * @param[out]    state    Bit mask of state flags
 *
 * This function allows a caller to read the RTC state.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_SUCCESS: if the RTC state was successfully read.
 * - ::SM_ERR_NOT_FOUND: if \a rtcId pertains to a non-existent RTC.
 */
int32_t BRD_SM_BbmRtcStateGet(uint32_t rtcId, uint32_t *state);

/*!
 * Set a board RTC alarm.
 *
 * @param[in]     rtcId    Identifier of the RTC
 * @param[in]     enable   Enable flag (1=enabled, 0=disabled)
 * @param[in]     val      Alarm time in seconds to write to the RTC
 *
 * This function allows a caller to enable/disable and set the time for the RTC
 * alarm. The alarm can be set in seconds only.
 *
 * @return Returns the status (::SM_ERR_SUCCESS = success).
 *
 * Return errors (see @ref STATUS "SM error codes"):
 * - ::SM_ERR_SUCCESS: if the alarm was successfully set.
 * - ::SM_ERR_NOT_FOUND: if \a rtcId pertains to a non-existent RTC.
 * - ::SM_ERR_INVALID_PARAMETERS: if the time is not valid (beyond the
 *   range of the RTC alarm).
 */
int32_t BRD_SM_BbmRtcAlarmSet(uint32_t rtcId, bool enable, uint64_t val);

/*!
 * Handle PCA2131 interrupt.
 */
void BRD_SM_BbmHandler(void);

/** @} */

#endif /* BRD_SM_BBM_H */

/** @} */

