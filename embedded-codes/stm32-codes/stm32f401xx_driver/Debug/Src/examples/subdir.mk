################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/examples/alternate_led_blink.c \
../Src/examples/button_interrupt.c \
../Src/examples/button_press.c \
../Src/examples/delay.c \
../Src/examples/led_blink.c 

OBJS += \
./Src/examples/alternate_led_blink.o \
./Src/examples/button_interrupt.o \
./Src/examples/button_press.o \
./Src/examples/delay.o \
./Src/examples/led_blink.o 

C_DEPS += \
./Src/examples/alternate_led_blink.d \
./Src/examples/button_interrupt.d \
./Src/examples/button_press.d \
./Src/examples/delay.d \
./Src/examples/led_blink.d 


# Each subdirectory must supply rules for building sources it contributes
Src/examples/%.o Src/examples/%.su Src/examples/%.cyclo: ../Src/examples/%.c Src/examples/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I../Inc -I"/Users/vishnu/Desktop/personalcodes/stm32_projects/stm32f401xx_driver/drivers/inc" -I"/Users/vishnu/Desktop/personalcodes/stm32_projects/stm32f401xx_driver/drivers/src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-examples

clean-Src-2f-examples:
	-$(RM) ./Src/examples/alternate_led_blink.cyclo ./Src/examples/alternate_led_blink.d ./Src/examples/alternate_led_blink.o ./Src/examples/alternate_led_blink.su ./Src/examples/button_interrupt.cyclo ./Src/examples/button_interrupt.d ./Src/examples/button_interrupt.o ./Src/examples/button_interrupt.su ./Src/examples/button_press.cyclo ./Src/examples/button_press.d ./Src/examples/button_press.o ./Src/examples/button_press.su ./Src/examples/delay.cyclo ./Src/examples/delay.d ./Src/examples/delay.o ./Src/examples/delay.su ./Src/examples/led_blink.cyclo ./Src/examples/led_blink.d ./Src/examples/led_blink.o ./Src/examples/led_blink.su

.PHONY: clean-Src-2f-examples

