#!/bin/bash

# Build
make -C Debug -j11 all || exit 1

# Create BIN
arm-none-eabi-objcopy -O binary Debug/stm32driver.elf Debug/stm32driver.bin || exit 1

# Flash STM32
st-flash write Debug/stm32driver.bin 0x08000000 || exit 1

echo ""
echo "✅ Build and Flash Successful!"
