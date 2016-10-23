#ifndef PWM_H
#define PWM_H

#include <wiringPi.h>
#include <stdio.h>

int pwn(unsigned int intPin, unsigned int per_microseconds, float dutyCycle, unsigned int cycles);
int an_aus(unsigned int intPin, unsigned int per_microseconds, unsigned int t_high);

#endif
