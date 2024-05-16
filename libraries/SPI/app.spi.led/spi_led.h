/*
***************************************************************************************************
*
*   FileName : spi_led.h
*
*   Copyright (c) Telechips Inc.
*
*   Description :
*
*
***************************************************************************************************
*
*   TCC Version 1.0
*
*   This source code contains confidential information of Telechips.
*
*   Any unauthorized use without a written permission of Telechips including not limited to
*   re-distribution in source or binary form is strictly prohibited.
*
*   This source code is provided "AS IS" and nothing contained in this source code shall constitute
*   any express or implied warranty of any kind, including without limitation, any warranty of
*   merchantability, fitness for a particular purpose or non-infringement of any patent, copyright
*   or other third party intellectual property right. No warranty is made, express or implied,
*   regarding the information's accuracy,completeness, or performance.
*
*   In no event shall Telechips be liable for any claim, damages or other liability arising from,
*   out of or in connection with this source code or the use in the source code.
*
*   This source code is provided subject to the terms of a Mutual Non-Disclosure Agreement between
*   Telechips and Company.
*   This source code is provided "AS IS" and nothing contained in this source code shall constitute
*   any express or implied warranty of any kind, including without limitation, any warranty
*   (of merchantability, fitness for a particular purpose or non-infringement of any patent,
*   copyright or other third party intellectual property right. No warranty is made, express or
*   implied, regarding the information's accuracy, completeness, or performance.
*   In no event shall Telechips be liable for any claim, damages or other liability arising from,
*   out of or in connection with this source code or the use in the source code.
*   This source code is provided subject to the terms of a Mutual Non-Disclosure Agreement
*   between Telechips and Company.
*
***************************************************************************************************
*/

#ifndef MCU_BSP_SPI_LED_HEADER
#define MCU_BSP_SPI_LED_HEADER

//hsj #if ( MCU_BSP_SUPPORT_APP_SPI_LED == 1 )

/*
***************************************************************************************************
*                                             INCLUDE FILES
***************************************************************************************************
*/


#include <sal_internal.h>


/*
***************************************************************************************************
*                                             DEFINITIONS
***************************************************************************************************
*/

void SPILED_CreateAppTask
(
    void
);

void SPILED_StatusOn
(
    void
);

void SPILED_StatusOff
(
    void
);


//hsj #endif  // ( MCU_BSP_SUPPORT_APP_SPI_LED == 1 )

#endif  // MCU_BSP_SPI_LED_HEADER

