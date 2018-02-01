################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/main.c \
C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/stm32f7xx_hal_msp.c \
C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/stm32f7xx_it.c 

OBJS += \
./Example/User/main.o \
./Example/User/stm32f7xx_hal_msp.o \
./Example/User/stm32f7xx_it.o 

C_DEPS += \
./Example/User/main.d \
./Example/User/stm32f7xx_hal_msp.d \
./Example/User/stm32f7xx_it.d 


# Each subdirectory must supply rules for building sources it contributes
Example/User/main.o: C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Example/User/stm32f7xx_hal_msp.o: C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/stm32f7xx_hal_msp.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Example/User/stm32f7xx_it.o: C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Src/stm32f7xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/GreenFox/uart/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"C:/TMP/F7_demo_rep/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


