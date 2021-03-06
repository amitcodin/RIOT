/*
 * Copyright(C) 2016,2017, Imagination Technologies Limited and/or its
 *                 affiliated group companies.
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 *
 */

/**
 * @defgroup    boards_pic32-wifire Digilent PIC32 WiFire
 * @ingroup     boards
 * @brief       peripheral configuration for the Digilent PIC32 WiFire
 * @{
 *
 * @file
 * @brief       peripheral configuration for the Digilent PIC32 WiFire
 *
 * @author       Neil Jones <Neil.Jones@imgtec.com>
 */
#ifndef _PERIPH_CONF_H_
#define _PERIPH_CONF_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief The peripheral clock is required for the UART Baud rate calculation
 *        It is configured by the 'config' registers (see pic32_config_settings.c)
 */
#define PERIPHERAL_CLOCK (100000000)  /* Hz */

/**
 * @brief   Timer definitions
 * @{
 */
#define TIMER_NUMOF         (1)
#define TIMER_0_CHANNELS    (3)
/** @} */

/**
  * @brief   UART Definitions
  *          There are 6 UARTS available on this CPU.
  *          We route debug via UART4 on this board,
  *          this is the UART connected to the FTDI USB <-> UART device.
  *
  *          Note Microchip number the UARTS 1->4.
  * @{
  */
#define UART_NUMOF          (6)
#define DEBUG_VIA_UART      (4)
#define DEBUG_UART_BAUD     (9600)
/** @} */

#ifdef __cplusplus
}
#endif

#endif
/** @} */
