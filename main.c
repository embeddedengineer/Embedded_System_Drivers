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




int main(void) {
	unsigned char i = 255;
	DDRD |= (1<<5) | (1<<4) | (1<<6) | (1<<7);
	PORTD |= (1<<5) | (1<<4) | (1<<6) | (1<<7);
	OCR1AH = 0;
	OCR1AL = i;
	TCCR1A &= ~( (1<<6) | (1<<1) );
	TCCR1A |=  ( (1<<7) | (1<<0) );
	TCCR1B |=  ( (1<<3) | (1<<0) | (1<<2));
	TCCR1B &= ~( (1<<4) | (1<<1));

	while(1){
		for(i = 255; i > 0 ; i-=15){
			OCR1AL = i;
			_delay_ms(100);
		}
	}

	return 1;
}

