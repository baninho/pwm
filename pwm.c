#include "pwm.h"

int pwm(unsigned int intPin, unsigned int per_microseconds, float dutyCycle, unsigned int cycles) {

	unsigned int t_high;
	unsigned int i;	

	t_high = (int)(dutyCycle * (float)per_microseconds);
	i = 0;
	printf("Pin %d\n",intPin);
	printf("t_high %d\n",t_high);
	printf("duty %f\n",dutyCycle);
	printf("period %d\n",per_microseconds);
	printf("cycles %d\n",cycles);
	
	while (i < cycles) {
		
		if(an_aus(intPin, per_microseconds, t_high) == -1) {break;}
		++i;
	}
	
	digitalWrite(intPin, 0);
	
	return 0;

}

int an_aus(unsigned int intPin, unsigned int per_microseconds, unsigned int t_high) {
	if (t_high > per_microseconds)
		return -1;

	if (t_high > 0) {
		digitalWrite(intPin, 1);
		delayMicroseconds(t_high);
	}

	if (t_high < per_microseconds) {
		digitalWrite(intPin, 0);
		delayMicroseconds(per_microseconds-t_high);
	}

	return 0;
}
