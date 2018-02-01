################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/system_stm32f7xx.c 

OBJS += \
./Drivers/CMSIS/system_stm32f7xx.o 

C_DEPS += \
./Drivers/CMSIS/system_stm32f7xx.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/system_stm32f7xx.o: C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/system_stm32f7xx.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


