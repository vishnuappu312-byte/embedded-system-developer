#!/bin/bash

# Find the first .elf file in any Debug directory
ELF=$(find . -type f -path "*/Debug/*.elf" | head -n 1)

if [ -z "$ELF" ]; then
    echo "❌ No .elf file found. Build the project first."
    exit 1
fi

BIN="${ELF%.elf}.bin"

echo "Converting ELF to BIN..."
arm-none-eabi-objcopy -O binary "$ELF" "$BIN"

echo "Flashing $BIN ..."
st-flash --reset write "$BIN" 0x08000000

echo "✅ Done!"
