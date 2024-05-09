/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

#ifndef _BOARDS_SMARTKNOB_H
#define _BOARDS_SMARTKNOB_H

// For board detection
#define SMARTKNOB

/*
*   Hardware definitions for SmartKnob
*/

//------------- INTERRUPT -------------//
#ifndef SMARTKNOB_INTERRUPT
#define SMARTKNOB_INTERRUPT 0
#endif

//------------- SPI0 -------------//
#ifndef SMARTKNOB_SPI0
#define SMARTKNOB_SPI0 0
#endif

#ifndef SMARTKNOB_SPI0_MOSI
#define SMARTKNOB_SPI0_MOSI 7
#endif

#ifndef SMARTKNOB_SPI0_MISO
#define SMARTKNOB_SPI0_MISO 4
#endif

#ifndef SMARTKNOB_SPI0_SCK
#define SMARTKNOB_SPI0_SCK 6
#endif

//------------- SPI1 -------------//
#ifndef SMARTKNOB_SPI1
#define SMARTKNOB_SPI1 1
#endif

#ifndef SMARTKNOB_SPI1_MOSI
#define SMARTKNOB_SPI1_MOSI 11
#endif

#ifndef SMARTKNOB_SPI1_MISO
#define SMARTKNOB_SPI1_MISO 8
#endif

#ifndef SMARTKNOB_SPI1_SCK
#define SMARTKNOB_SPI1_SCK 14
#endif

#ifndef SMARTKNOB_SPI1_ACK
#define SMARTKNOB_SPI1_ACK 10
#endif

//------------- I2C -------------//
#ifndef SMARTKNOB_I2C0
#define SMARTKNOB_I2C0 0
#endif

#ifndef SMARTKNOB_I2C0_SDA
#define SMARTKNOB_I2C0_SDA 12
#endif

#ifndef SMARTKNOB_I2C0_SCL
#define SMARTKNOB_I2C0_SCL 13
#endif

//------------- LCD -------------//
#ifndef SMARTKNOB_LCD_RESET
#define SMARTKNOB_LCD_RESET 28
#endif

#ifndef SMARTKNOB_LCD_BACKLIGHT
#define SMARTKNOB_LCD_BACKLIGHT 29
#endif

#ifndef SMARTKNOB_LCD_DC
#define SMARTKNOB_LCD_DC SMARTKNOB_SPI0_MISO
#endif

#ifndef SMARTKNOB_LCD_CS
#define SMARTKNOB_LCD_CS 5
#endif

#ifndef SMARTKNOB_LCD_SCK
#define SMARTKNOB_LCD_SCK SMARTKNOB_SPI0_SCK
#endif

#ifndef SMARTKNOB_LCD_MOSI
#define SMARTKNOB_LCD_MOSI SMARTKNOB_SPI0_MOSI
#endif

//------------- BLDC MOTOR -------------//
#ifndef SMARTKNOB_BLDC_UH
#define SMARTKNOB_BLDC_UH 23
#endif

#ifndef SMARTKNOB_BLDC_UL
#define SMARTKNOB_BLDC_UL 18
#endif

#ifndef SMARTKNOB_BLDC_VH
#define SMARTKNOB_BLDC_VH 20
#endif

#ifndef SMARTKNOB_BLDC_VL
#define SMARTKNOB_BLDC_VL 16
#endif

#ifndef SMARTKNOB_BLDC_WH
#define SMARTKNOB_BLDC_WH 19
#endif

#ifndef SMARTKNOB_BLDC_WL
#define SMARTKNOB_BLDC_WL 17
#endif

#ifndef SMARTKNOB_BLDC_DIAG
#define SMARTKNOB_BLDC_DIAG 15
#endif

//------------- STRAIN -------------//
#ifndef SMARTKNOB_STRAIN_CLK
#define SMARTKNOB_STRAIN_CLK 26
#endif

#ifndef SMARTKNOB_STRAIN_DATA
#define SMARTKNOB_STRAIN_DATA 27
#endif

//------------- MICROPHONE -------------//
#ifndef SMARTKNOB_MIC_CLK
#define SMARTKNOB_MIC_CLK 21
#endif

#ifndef SMARTKNOB_MIC_DATA
#define SMARTKNOB_MIC_DATA 22
#endif

//------------- WIFI -------------//
#ifndef SMARTKNOB_NINA_GPIO_0
#define SMARTKNOB_NINA_GPIO_0 2
#endif

#ifndef SMARTKNOB_NINA_RESET
#define SMARTKNOB_NINA_RESET 3
#endif

//------------- FLASH -------------//

#define PICO_BOOT_STAGE2_CHOOSE_AT25SF128A 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (16 * 1024 * 1024)
#endif

// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

//------------- UART1 -------------//
#ifndef SMARTKNOB_UART1
#define SMARTKNOB_UART1 1
#endif

#ifndef SMARTKNOB_UART1_TX
#define SMARTKNOB_UART1_TX 8
#endif

#ifndef SMARTKNOB_UART1_RX
#define SMARTKNOB_UART1_RX 9
#endif

#endif
