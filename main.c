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
#include "TIMER0/TIMER0.h"
#include "REGISTERS.h"
#include "INTERRUPTS.h"


void BlinkLedAfter3Secs(void){
	DigitalWrite(PORTD,PD5,HIGH);
}

int main(void) {
	PinMode(DDRD,PD5,OUTPUT);
	Timer0_Settings TMR_Settings;
	TMR_Settings.Timer0_Mode = NORMAL;
	TMR_Settings.Timer0_PRESCALAR = PRESCALING_CLK1024;
	TMR_Settings.Timer0_OVFI = TOIE0_enable;
	TMR0_Set_Counter_Value(0);
	TMR0_Set_TOV_Number(0);
	callback_TMR0_Overflow_Interrupt(BlinkLedAfter3Secs);
	TMR0_Init(TMR_Settings);
	sei();

	while(1){
	}

	return 1;
}

