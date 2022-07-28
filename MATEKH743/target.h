/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "H743"
#define USBD_PRODUCT_STRING     "JAMH743"

#define LED0                    PA1

// *************** SPI1 IMU MPU9250 ****************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7
#define USE_IMU_MPU9250
#define IMU_MPU9250_ALIGN       CW0_DEG
#define MPU9250_SPI_BUS         BUS_SPI1
#define MPU9250_CS_PIN          PA4
//#define USE_BARO
//#define USE_BARO_BMP280
//#define BARO_SPI_BUS            BUS_SPI1
//#define BMP280_CS_PIN           PA0


// *************** I2C Magnetometre *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11
#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883

// *************** UART *****************************
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10
#define USE_UART2
#define UART2_TX_PIN            PD5
#define UART2_RX_PIN            PD6
#define USE_UART3
#define UART3_TX_PIN            PD8
#define UART3_RX_PIN            PD9
#define USE_UART4
#define UART4_TX_PIN            PB9
#define UART4_RX_PIN            PB8
#define USE_UART6
#define UART6_TX_PIN            PC6  //RADIO
#define UART6_RX_PIN            PC7  //RADIO RX
#define USE_UART7
#define UART7_TX_PIN            PE8  //TELEMETRY
#define UART7_RX_PIN            PE7  //TELEMETRY
#define USE_UART8
#define UART8_TX_PIN            PE1
#define UART8_RX_PIN            PE0
#define SERIAL_PORT_COUNT       9
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART6

#define DEFAULT_FEATURES            (FEATURE_TELEMETRY | FEATURE_CURRENT_METER | FEATURE_VBAT)
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define MAX_PWM_OUTPUT_PORTS        4
#define USE_DSHOT
