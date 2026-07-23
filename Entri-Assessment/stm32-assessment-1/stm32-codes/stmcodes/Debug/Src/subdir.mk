################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/alternate_led_blink.c \
../Src/button_press.c \
../Src/delay.c \
../Src/led_blink.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/alternate_led_blink.o \
./Src/button_press.o \
./Src/delay.o \
./Src/led_blink.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/alternate_led_blink.d \
./Src/button_press.d \
./Src/delay.d \
./Src/led_blink.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F401RE -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I"/Users/vishnu/Desktop/personalcodes/stmcodes/driver/inc" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/alternate_led_blink.cyclo ./Src/alternate_led_blink.d ./Src/alternate_led_blink.o ./Src/alternate_led_blink.su ./Src/button_press.cyclo ./Src/button_press.d ./Src/button_press.o ./Src/button_press.su ./Src/delay.cyclo ./Src/delay.d ./Src/delay.o ./Src/delay.su ./Src/led_blink.cyclo ./Src/led_blink.d ./Src/led_blink.o ./Src/led_blink.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

