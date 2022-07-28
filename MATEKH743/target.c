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

#include <stdint.h>
#include <platform.h>
#include "drivers/io.h"
#include "drivers/timer.h"

//BUSDEV_REGISTER_SPI_TAG(busdev_imu0,   DEVHW_MPU9250,  MPU9250_SPI_BUS,   MPU9250_CS_PIN,   0,   0,  DEVFLAGS_NONE,  IMU_MPU9250_ALIGN);

const timerHardware_t timerHardware[] =
{
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),   // S1
    DEF_TIM(TIM4, CH2, PD13, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),   // S2
    DEF_TIM(TIM4, CH3, PD14, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),   // S3
    DEF_TIM(TIM4, CH4, PD15, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),   // S4
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
