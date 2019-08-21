/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#include "LED_MATRIX/MATRIX.h"
#include "7SEGMENT/7SEGMENT.h"
#include "LCD/LCD.h"
#include "KEYPAD/KEYPAD.h"
#include <util/delay.h>
#include "TIMER0/TIMER0.h"
#include "avr/io.h"
#include "avr/interrupt.h"

ISR(TIMER1_OVF_vect){
	PORTD ^= (1<<5);
}



int main(void) {
	DDRD |= (1<<5) | (1<<4) | (1<<6) | (1<<7);
	PORTD |= (1<<5) | (1<<4) | (1<<6) | (1<<7);
	TCCR1A = 0x00;
	TCCR1B = 0x05;
	TCNT1H = 3036>>8;
	TCNT1L = 3036 & 0x00FF;
	TIMSK |= (1<<2);
	sei();

	while(1){
		PORTD ^= (1<<4);
		_delay_ms(1000);
	}

	return 1;
}

