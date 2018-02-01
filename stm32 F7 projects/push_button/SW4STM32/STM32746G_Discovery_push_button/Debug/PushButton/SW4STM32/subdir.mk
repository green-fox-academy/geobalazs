################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/SW4STM32/startup_stm32f746xx.s 

OBJS += \
./PushButton/SW4STM32/startup_stm32f746xx.o 


# Each subdirectory must supply rules for building sources it contributes
PushButton/SW4STM32/startup_stm32f746xx.o: C:/Users/balazs/GFX/greenfox/geobalazs/STM32Cube_FW_F7_V1.8.0/Projects/STM32746G-Discovery/GreenFox/push_button/SW4STM32/startup_stm32f746xx.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


