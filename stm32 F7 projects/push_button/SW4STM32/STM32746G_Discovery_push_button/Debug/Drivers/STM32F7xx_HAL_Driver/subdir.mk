################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_uart.c 

OBJS += \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_cortex.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma_ex.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash_ex.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_gpio.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_i2c.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr_ex.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc_ex.o \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_uart.o 

C_DEPS += \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_cortex.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma_ex.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash_ex.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_gpio.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_i2c.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr_ex.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc_ex.d \
./Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_uart.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_cortex.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_dma_ex.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_flash_ex.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_gpio.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_i2c.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_pwr_ex.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_rcc_ex.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/STM32F7xx_HAL_Driver/stm32f7xx_hal_uart.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_uart.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Log" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/Fonts" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Utilities/CPU" -I"C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


