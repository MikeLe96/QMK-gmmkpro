/*
 * Copyright 2018 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: LPC812
package_id: LPC812M101JDH20
mcu_data: ksdk2_0
processor_version: 4.0.1
board: LPCXpresso812
pin_labels:
- {pin_num: '10', pin_signal: PIO0_16, label: 'P1[14]/J1[9]/P2[44]/D1[3]/PIO0_16-BLUE', identifier: LED_BLUE}
- {pin_num: '1', pin_signal: PIO0_17, label: 'P1[12]/J1[10]/P2[43]/D1[4]/PIO0_17-GREEN', identifier: LED_GREEN}
- {pin_num: '17', pin_signal: PIO0_7, label: 'P1[13]/J2[1]/P2[45]/D1[1]/PIO0_7-RED', identifier: LED_RED}
- {pin_num: '18', pin_signal: PIO0_6/VDDCMP, label: 'P2[13]/J2[6]/TARGET_TX-PIO0_6', identifier: DEBUG_UART_TX}
- {pin_num: '12', pin_signal: PIO0_1/ACMP_I2/CLKIN, label: 'U4[13]/TARGET_RX-PIO0_1', identifier: DEBUG_UART_RX}
- {pin_num: '6', pin_signal: SWCLK/PIO0_3, label: 'P3[4]/P2[24]/U2[16]/TARGET_SWCLK-PIO0_3', identifier: DEBUG_SWD_SWCLK}
- {pin_num: '7', pin_signal: SWDIO/PIO0_2, label: 'P3[2]/P2[19]/U2[17]/TARGET_SWDIO-PIO0_2', identifier: DEBUG_SWD_SWDIO}
- {pin_num: '4', pin_signal: RESETN/PIO0_5, label: 'P3[10]/U4[3]/J8[3]/P2[4]/U2[3]/SW1[1]/TARGET_nRESET-PIO0_5', identifier: DEBUG_SWD_RESETN}
- {pin_num: '2', pin_signal: PIO0_13, label: 'P1[6]/J1[8]/P2[8]/PIO0_13'}
- {pin_num: '3', pin_signal: PIO0_12, label: 'P1[3]/J1[5]/P2[7]/PIO0_12'}
- {pin_num: '5', pin_signal: PIO0_4, label: 'P1[8]/J2[7]/P2[9]/PIO0_4'}
- {pin_num: '8', pin_signal: PIO0_11, label: 'U6[10]/U4[14]/P1[9]/J9[6]/J1[1]/P2[41]/PIO0_11-SCL'}
- {pin_num: '9', pin_signal: PIO0_10, label: 'U6[9]/U4[15]/P1[10]/J9[5]/J1[2]/P2[40]/PIO0_10-SDA'}
- {pin_num: '11', pin_signal: PIO0_15, label: 'P1[5]/J1[6]/P2[6]/PIO0_15'}
- {pin_num: '13', pin_signal: PIO0_9/XTALOUT, label: 'P1[11]/J2[4]/P2[14]/U2[26]/PIO0_9-XTALOUT'}
- {pin_num: '14', pin_signal: PIO0_8/XTALIN, label: 'J2[5]/P2[42]/U2[27]/PIO0_8-XTALIN'}
- {pin_num: '19', pin_signal: PIO0_0/ACMP_I1, label: 'P1[7]/J2[8]/P2[10]/PIO0_0'}
- {pin_num: '20', pin_signal: PIO0_14, label: 'P1[4]/J1[7]/P2[5]/PIO0_14'}
- {pin_num: '15', pin_signal: VDD, label: C8/C9/FB2/VDD}
- {pin_num: '16', pin_signal: VSS, label: GND}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
#include "fsl_swm.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
    BOARD_InitDEBUG_UARTPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitPins(void)
{
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLEDsPins:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '10', peripheral: GPIO, signal: 'PIO0, 16', pin_signal: PIO0_16, direction: OUTPUT, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled,
    smode: bypass, clkdiv: div0}
  - {pin_num: '1', peripheral: GPIO, signal: 'PIO0, 17', pin_signal: PIO0_17, direction: OUTPUT, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled,
    smode: bypass, clkdiv: div0}
  - {pin_num: '17', peripheral: GPIO, signal: 'PIO0, 7', pin_signal: PIO0_7, direction: OUTPUT, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled,
    smode: bypass, clkdiv: div0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLEDsPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitLEDsPins(void)
{

    const uint32_t pio0_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Disable hysteresis */
                                  IOCON_PIO_HYS_DI |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT0 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 0, pio0_config);

    const uint32_t pio15_config = (/* Selects pull-up function */
                                   IOCON_PIO_MODE_PULLUP |
                                   /* Disable hysteresis */
                                   IOCON_PIO_HYS_DI |
                                   /* Input not invert */
                                   IOCON_PIO_INV_DI |
                                   /* Disables Open-drain function */
                                   IOCON_PIO_OD_DI |
                                   /* Bypass input filter */
                                   IOCON_PIO_SMODE_BYPASS |
                                   /* IOCONCLKDIV0 */
                                   IOCON_PIO_CLKDIV0);
    /* PORT1 PIN5 (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 15, pio15_config);

    const uint32_t pio9_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Disable hysteresis */
                                  IOCON_PIO_HYS_DI |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT9 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 9, pio9_config);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitDEBUG_UARTPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '18', peripheral: USART0, signal: TXD, pin_signal: PIO0_6/VDDCMP, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
  - {pin_num: '12', peripheral: USART0, signal: RXD, pin_signal: PIO0_1/ACMP_I2/CLKIN, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled,
    smode: bypass, clkdiv: div0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UARTPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitDEBUG_UARTPins(void)
{
    /* Enables clock for switch matrix.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Swm);

    const uint32_t pio11_config = (/* Selects pull-up function */
                                   IOCON_PIO_MODE_PULLUP |
                                   /* Disable hysteresis */
                                   IOCON_PIO_HYS_DI |
                                   /* Input not invert */
                                   IOCON_PIO_INV_DI |
                                   /* Disables Open-drain function */
                                   IOCON_PIO_OD_DI |
                                   /* Bypass input filter */
                                   IOCON_PIO_SMODE_BYPASS |
                                   /* IOCONCLKDIV0 */
                                   IOCON_PIO_CLKDIV0);
    /* PORT1 PIN1 (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 11, pio11_config);

    const uint32_t pio16_config = (/* Selects pull-up function */
                                   IOCON_PIO_MODE_PULLUP |
                                   /* Disable hysteresis */
                                   IOCON_PIO_HYS_DI |
                                   /* Input not invert */
                                   IOCON_PIO_INV_DI |
                                   /* Disables Open-drain function */
                                   IOCON_PIO_OD_DI |
                                   /* Bypass input filter */
                                   IOCON_PIO_SMODE_BYPASS |
                                   /* IOCONCLKDIV0 */
                                   IOCON_PIO_CLKDIV0);
    /* PORT1 PIN6 (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 16, pio16_config);

    /* USART0_TXD connect to P0_6 */
    SWM_SetMovablePinSelect(SWM0, kSWM_USART0_TXD, kSWM_PortPin_P0_6);

    /* USART0_RXD connect to P0_1 */
    SWM_SetMovablePinSelect(SWM0, kSWM_USART0_RXD, kSWM_PortPin_P0_1);

    /* Disable clock for switch matrix. */
    CLOCK_DisableClock(kCLOCK_Swm);
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSWD_DEBUGPins:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '6', peripheral: SWD, signal: SWCLK, pin_signal: SWCLK/PIO0_3, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
  - {pin_num: '7', peripheral: SWD, signal: SWDIO, pin_signal: SWDIO/PIO0_2, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
  - {pin_num: '4', peripheral: SYSCON, signal: RESETN, pin_signal: RESETN/PIO0_5, mode: pullUp, invert: disabled, hysteresis: disabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSWD_DEBUGPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitSWD_DEBUGPins(void)
{
    /* Enables clock for switch matrix.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Swm);

    const uint32_t pio3_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Disable hysteresis */
                                  IOCON_PIO_HYS_DI |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT3 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 3, pio3_config);

    const uint32_t pio5_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Disable hysteresis */
                                  IOCON_PIO_HYS_DI |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT5 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 5, pio5_config);

    const uint32_t pio6_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Disable hysteresis */
                                  IOCON_PIO_HYS_DI |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT6 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 6, pio6_config);

    /* SWCLK connect to P0_3 */
    SWM_SetFixedPinSelect(SWM0, kSWM_SWCLK, true);

    /* SWDIO connect to P0_2 */
    SWM_SetFixedPinSelect(SWM0, kSWM_SWDIO, true);

    /* RESETN connect to P0_5 */
    SWM_SetFixedPinSelect(SWM0, kSWM_RESETN, true);

    /* Disable clock for switch matrix. */
    CLOCK_DisableClock(kCLOCK_Swm);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
