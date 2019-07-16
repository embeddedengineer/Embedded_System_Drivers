/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */
#include "GPIO/GPIO.h"
#include <util/delay.h>


int main(void) {

	PinMode(DDRD, PD4, OUTPUT);
	PinMode(DDRD, PD5, OUTPUT);
	PinMode(DDRD, PD6, OUTPUT);
	PinMode(DDRD, PD7, OUTPUT);

	while(1){
		DigitalWrite(PORTD,PD4, LOW);
		DigitalWrite(PORTD,PD5, HIGH);
		DigitalWrite(PORTD,PD6, HIGH);
		DigitalWrite(PORTD,PD7, HIGH);
		_delay_ms(1000);

		DigitalWrite(PORTD,PD4, HIGH);
		DigitalWrite(PORTD,PD5, LOW);
		DigitalWrite(PORTD,PD6, HIGH);
		DigitalWrite(PORTD,PD7, HIGH);
		_delay_ms(1000);

		DigitalWrite(PORTD,PD4, HIGH);
		DigitalWrite(PORTD,PD5, HIGH);
		DigitalWrite(PORTD,PD6, LOW);
		DigitalWrite(PORTD,PD7, HIGH);
		_delay_ms(1000);


		DigitalWrite(PORTD,PD4, HIGH);
		DigitalWrite(PORTD,PD5, HIGH);
		DigitalWrite(PORTD,PD6, HIGH);
		DigitalWrite(PORTD,PD7, LOW);
		_delay_ms(1000);
	}

	return 1;
}

