################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/src/stm32f401xx_gpio.c 

OBJS += \
./drivers/src/stm32f401xx_gpio.o 

C_DEPS += \
./drivers/src/stm32f401xx_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/src/%.o drivers/src/%.su drivers/src/%.cyclo: ../drivers/src/%.c drivers/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I../Inc -I"/Users/vishnu/Desktop/personalcodes/stm32_projects/01_LED_Blink/drivers/inc" -I"/Users/vishnu/Desktop/personalcodes/stm32_projects/01_LED_Blink/drivers/src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-drivers-2f-src

clean-drivers-2f-src:
	-$(RM) ./drivers/src/stm32f401xx_gpio.cyclo ./drivers/src/stm32f401xx_gpio.d ./drivers/src/stm32f401xx_gpio.o ./drivers/src/stm32f401xx_gpio.su

.PHONY: clean-drivers-2f-src

