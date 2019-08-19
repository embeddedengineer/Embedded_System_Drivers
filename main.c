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



void BlinkLedAfter3Secs(void){
	PORTD |= (1<<5);
	_delay_ms(500);
	PORTD &= ~(1<<5);
	_delay_ms(3000);
}

int main(void) {
	DDRD |= (1<<5);
	LCD_Init();
	LCD_XY(0,0);
	LCD_WriteINT(2);
	Timer0_Settings TMR_Settings;
	TMR_Settings.Timer0_Mode = NORMAL;
	TMR_Settings.Timer0_PRESCALAR = PRESCALING_CLK8;
	TMR_Settings.Timer0_OVFI = TOIE0_enable;
	TMR0_Init(TMR_Settings);
	TMR0_Set_Counter_Value(0);
	callback_TMR0_Overflow_Interrupt(BlinkLedAfter3Secs);
	sei();
	while(1){
	}

	return 1;
}

