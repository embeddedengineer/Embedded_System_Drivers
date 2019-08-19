/*
 * TIMER0.c
 *
 *  Created on: Aug 8, 2019
 *      Author: abdelrhman
 */
#include "TIMER0.h"
#include "avr/interrupt.h"
#include "avr/io.h"


struct STimer0_Settings Timer0_Configuration;
int TOV_Number ;

static void (*Ptr_To_OVFI)(void);
static void (*Ptr_To_OCMI)(void);

void TMR0_Init(struct STimer0_Settings Configuration) {
	Timer0_Configuration = Configuration ;

	/*********************Adjust Mode***********************/
	if (Timer0_Configuration.Timer0_Mode == NORMAL ) {
		TCCR0 &= ~(1<<WGM00);
		TCCR0 &= ~(1<< WGM01);
	}

	if (Timer0_Configuration.Timer0_Mode == CTC ) {
		TCCR0 &= ~(1<<WGM00);
		TCCR0 |= (1<< WGM01);
	}

	/************************Adjust prescaler************************/
	TCCR0 = TCCR0 | Timer0_Configuration.Timer0_PRESCALAR;

	/**************************TMR0 Enable/Disable********************/
	if (Timer0_Configuration.Timer0_OVFI == TOIE0_enable ) {
		TIMSK |= 1<< TOIE0;
	}

	else if (Timer0_Configuration.Timer0_OVFI == TOIE0_disable) {
		TIMSK &= ~(1<< TOIE0);
	}

	/**************************OCR0 Enable/Disable********************/
	if (Timer0_Configuration.Timer0_OCIE == OCIE0_enable ) {
		TIMSK |= 1<< OCIE0;
	}

	else if (Timer0_Configuration.Timer0_OCIE == OCIE0_disable) {
		TIMSK &= ~(1<< OCIE0);

	}

}

void TMR0_ReadCounterValue(unsigned char *u8NumOfTicks) {
	*u8NumOfTicks = TCNT0;
}

void TMR0_Set_Compare_Value(unsigned char  u8Val) {
	OCR0 = u8Val;
}

void TMR0_Set_Counter_Value(unsigned char  u8Val) {
	TCNT0 = u8Val;

}

//used for set the Number of OverFlow (Used for SW Counters)

void TMR0_Set_TOV_Number(int  u8Val) {
	TOV_Number = u8Val;

}

void TMR0_Get_TOV_Number(int *u8Val) {
	*u8Val = TOV_Number ;
}


void TMR0_Get_Ticks_of_SWcounter (int *u8Val) {
	*u8Val =  256*TOV_Number + TCNT0;
}


void callback_TMR0_Overflow_Interrupt (void(*Ptr_to_OVI_Function)(void)) {
	Ptr_To_OVFI = Ptr_to_OVI_Function ;

}

void callback_OCR0_Compare_Match_Interrupt(void(*Ptr_to_OCM_Function)(void)) {
	Ptr_To_OCMI = Ptr_to_OCM_Function ;
}


ISR(TIMER0_COMP_vect) {
	(*Ptr_To_OCMI)();
}

ISR(TIMER0_OVF_vect) {
	TOV_Number++;
	(*Ptr_To_OVFI)();
}
