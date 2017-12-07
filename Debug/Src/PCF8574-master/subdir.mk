################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/PCF8574-master/example.c \
../Src/PCF8574-master/example_msp.c \
../Src/PCF8574-master/pcf8574.c 

OBJS += \
./Src/PCF8574-master/example.o \
./Src/PCF8574-master/example_msp.o \
./Src/PCF8574-master/pcf8574.o 

C_DEPS += \
./Src/PCF8574-master/example.d \
./Src/PCF8574-master/example_msp.d \
./Src/PCF8574-master/pcf8574.d 


# Each subdirectory must supply rules for building sources it contributes
Src/PCF8574-master/%.o: ../Src/PCF8574-master/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F411xE -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Inc" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Michal/Desktop/User-Interface-to-Bombel-new_branch/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


