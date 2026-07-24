# STM32 GPIO Driver Assessment

## Overview

This project demonstrates the integration of a custom GPIO driver with the onboard peripherals of the **STM32 NUCLEO-F401RE** development board. All GPIO operations are performed using the custom GPIO driver APIs without any direct register access in the application code.

---

## Board Information

- **Board:** STM32 NUCLEO-F401RE
- **Microcontroller:** STM32F401RET6
- **Core:** ARM Cortex-M4

---

# Assessment Tasks

## Task 1 – Button Controlled LED

### Objective

Configure the onboard USER button to control the onboard USER LED.

### Pin Mapping

| Peripheral | GPIO |
|------------|------|
| USER Button | PC13 |
| USER LED | PA5 |

### Description

- Configure PA5 as GPIO Output.
- Configure PC13 as GPIO Input.
- Poll the button state continuously.
- When the button is pressed:
  - If LED is OFF → Turn ON.
  - If LED is ON → Turn OFF.
- The LED state remains unchanged after releasing the button.
- A software delay is used for button debounce to prevent multiple toggles from a single press.

### Expected Result

- One button press toggles the LED exactly once.
- No flickering or repeated toggles.

---

# Task 2 – Alternating External LED Blink

### Objective

Blink two external LEDs alternately.

### Pin Mapping

| LED | GPIO |
|-----|------|
| LED1 | PA6 |
| LED2 | PA7 |

### Hardware Connection

```
PA6 -----> 220Ω -----> LED1 -----> GND

PA7 -----> 220Ω -----> LED2 -----> GND
```

### Description

- Configure PA6 and PA7 as GPIO Outputs.
- Blink LEDs alternately using a software delay.
- LED1 ON while LED2 OFF.
- LED1 OFF while LED2 ON.
- Continue this sequence indefinitely.

### Timing

- LED1 ON = 250 ms
- LED2 ON = 250 ms

Total cycle = **500 ms**

### Expected Result

The LEDs blink continuously in opposite phases.

---

# Software Design

## GPIO Driver APIs Used

- GPIO_PeriClockControl()
- GPIO_Init()
- GPIO_ReadFromInputPin()
- GPIO_WriteToOutputPin()
- GPIO_ToggleOutputPin()

No direct register access is performed in `main.c`.

---

# Project Structure

```
Button_press_and_alter_led/

├── Core/
├── Inc/
├── Src/
│   └── main.c
├── Startup/
├── drivers/
│   ├── inc/
│   └── src/
├── Debug/
├── flash.sh
└── README.md
```

---

# Program Flow

```
Initialize GPIO Driver
        │
        ▼
Configure PA5 (LED)
        │
        ▼
Configure PC13 (Button)
        │
        ▼
Configure PA6 & PA7 (External LEDs)
        │
        ▼
while(1)
{
    Read Button

    If Pressed
        Toggle PA5

    LED1 ON
    LED2 OFF
    Delay

    LED1 OFF
    LED2 ON
    Delay
}
```

---

# Build

```bash
make
```

---

# Flash

```bash
./flash.sh
```

---

# Observations

- The onboard LED toggles correctly with each button press.
- Button debounce prevents unwanted multiple toggles.
- External LEDs blink alternately with a smooth transition.
- All GPIO operations are performed using the custom GPIO driver APIs.

---

# Assessment Requirements Checklist

| Requirement | Status |
|------------|--------|
| GPIO driver APIs only | ✅ |
| No direct register access in application | ✅ |
| Button toggles onboard LED | ✅ |
| LED state retained after release | ✅ |
| Two external LEDs blink alternately | ✅ |
| Busy-wait delay used | ✅ |
| Code comments included | ✅ |
| Tested on STM32 NUCLEO-F401RE | ✅ |

---

# Author

**Vishnu TR**

Embedded Systems Firmware Development

STM32 Bare-Metal GPIO Driver Assessment