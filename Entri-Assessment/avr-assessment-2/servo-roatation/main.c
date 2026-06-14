#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdint.h>

#include "adc.h"
#include "phase_correct.h"

uint16_t read_servo_position(void)
{
    uint16_t adc_value;
    uint16_t pulse_width;
    adc_value = read_adc(0);
    pulse_width = 1000 +((uint32_t)adc_value * 1000) / 1023; //mapping
    return pulse_width;
}

int main(void)
{
    uint16_t servo_pulse;
    adc_init();
    Phase_correct_init();
    while(1)
    {
        servo_pulse = read_servo_position();
        OCR1A = servo_pulse;
    }
}
/*
ADC Range:

adc_value = 0 to 1023

Required Servo Pulse Range:

0°   = 1000

90°  = 1500

180° = 2000

Mapping Formula:

Output = Min + (Input × Output Range) / Input Range

Where:

Min          = 1000

Input        = adc_value

Output Range = 2000 - 1000

             = 1000

Input Range  = 1023

Therefore:

pulse_width = 1000 +

             ((adc_value * 1000) / 1023)

Verification:

ADC = 0

pulse_width = 1000 +

             ((0 * 1000) / 1023)

pulse_width = 1000

ADC = 512

pulse_width = 1000 +

             ((512 * 1000) / 1023)

pulse_width ≈ 1500

ADC = 1023

pulse_width = 1000 +

             ((1023 * 1000) / 1023)

pulse_width = 2000

*/