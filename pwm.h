#ifndef PWM_H
#define PWM_H

#include <wiringPi.h>
#include <stdio.h>

extern int pwn(unsigned int, unsigned int, float*, unsigned int);
extern int an_aus(unsigned int, unsigned int, unsigned int);

#endif
