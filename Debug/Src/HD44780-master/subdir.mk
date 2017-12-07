################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/HD44780-master/example.c \
../Src/HD44780-master/example_msp.c \
../Src/HD44780-master/hd44780.c 

OBJS += \
./Src/HD44780-master/example.o \
./Src/HD44780-master/example_msp.o \
./Src/HD44780-master/hd44780.o 

C_DEPS += \
./Src/HD44780-master/example.d \
./Src/HD44780-master/example_msp.d \
./Src/HD44780-master/hd44780.d 


# Each subdirectory must supply rules for building sources it contributes
Src/HD44780-master/%.o: ../Src/HD44780-master/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F411xE -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Inc" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


