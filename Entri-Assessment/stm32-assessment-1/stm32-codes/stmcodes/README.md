# STM32 GPIO Driver Assignment

## Board
STM32 NUCLEO-F401RE

## Task 1
- User Button : PC13
- User LED : PA5

Operation:
Pressing the user button toggles the onboard LED.

## Task 2
External LEDs

LED1 -> PA6 (D12)
LED2 -> PA7 (D11)

Connections:

PA6 ----330Ω---->| LED1 ---- GND
PA7 ----330Ω---->| LED2 ---- GND

Operation:
LED1 and LED2 blink alternately with a 250 ms delay.

## GPIO Driver APIs Used

- GPIO_PeriClockControl()
- GPIO_Init()
- GPIO_ReadFromInputPin()
- GPIO_WriteToOutputPin()
- GPIO_ToggleOutputPin()

## Delay

Busy-wait software delay.

## Observations

- Task 1 successfully toggles the onboard LED.
- Task 2 successfully blinks two external LEDs alternately.
- No direct register access is used in the application.