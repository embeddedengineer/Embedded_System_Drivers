/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#include "GPIO/GPIO.h"
#include "LED_MATRIX/MATRIX.h"
#include "7SEGMENT/7SEGMENT.h"
#include "LCD/LCD.h"
#include "KEYPAD/KEYPAD.h"
#include <util/delay.h>
#include "REGISTERS.h"
#include "INTERRUPTS.h"



ISR(INT0_vect){
//	DigitalWrite(PORTD,PD5,HIGH);
//	_delay_ms(1000);
//	DigitalWrite(PORTD,PD5,LOW);
}

int main(void) {
	int i;
	LCD_Init();
	PinMode(DDRD,PD2,INPUT);
	PinMode(DDRD,PD5,OUTPUT);
	// 1 - Rising edge trigger.
	MCUCR->ISC00 = 1;
	MCUCR->ISC01 = 1;
	GICR->INT0   = 1;   // 2- Enable INT0.
	sei();		// 3- Enable global interrupts.

	while(1){
		for(i=0;i<25;i++) {
			LCD_Clear();
			LCD_WriteINT(i);
			_delay_ms(800);
		}
		DigitalWrite(PORTD,PD5,HIGH);
		_delay_ms(1000);
		DigitalWrite(PORTD,PD5,LOW);
	}

	return 1;
}

