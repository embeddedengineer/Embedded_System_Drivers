/*
 * TIMER0.c
 *
 *  Created on: Aug 8, 2019
 *      Author: abdelrhman
 */
#include "TIMER0.h"
#include "../INTERRUPTS.h"
#include "../REGISTERS.h"


struct STimer0_Settings Timer0_Configuration;
unsigned char TOV_Number ;

static void (*Ptr_To_OVFI)(void);
static void (*Ptr_To_OCMI)(void);

void TMR0_Init(struct STimer0_Settings Configuration)
{
	Timer0_Configuration = Configuration ;

	/*********************Adjust Mode***********************/
	if (Timer0_Configuration.Timer0_Mode == NORMAL )
	{
		TCCR0->WGM00 = 0;
		TCCR0->WGM01 = 0;
	}

	if (Timer0_Configuration.Timer0_Mode == CTC )
	{
		TCCR0->WGM00 = 0;
		TCCR0->WGM01 = 1;
	}

	/************************Adjust prescaler************************/
	TCCR0->value = TCCR0->value | Timer0_Configuration.Timer0_PRESCALAR;

	/**************************TMR0 Enable/Disable********************/
	if (Timer0_Configuration.Timer0_OVFI == TOIE0_enable )
	{
		TIMSK->TOIE0 = 1;
	}
	else if (Timer0_Configuration.Timer0_OVFI == TOIE0_disable)
	{
		TIMSK->TOIE0 = 0;

	}

	/**************************OCR0 Enable/Disable********************/
	if (Timer0_Configuration.Timer0_OCIE == OCIE0_enable )
	{
		TIMSK->OCIE0 = 1;
	}
	else if (Timer0_Configuration.Timer0_OCIE == OCIE0_disable)
	{
		TIMSK->OCIE0 = 0;

	}

}

void TMR0_ReadCounterValue(unsigned char *u8NumOfTicks)
{
	*u8NumOfTicks = TCNT0->value;
}

void TMR0_Set_Compare_Value(unsigned char  u8Val)
{
	OCR0->value = u8Val;
}

void TMR0_Set_Counter_Value(unsigned char  u8Val)
{
	TCNT0->value = u8Val;

}

//used for set the Number of OverFlow (Used for SW Counters)

void TMR0_Set_TOV_Number(unsigned char  u8Val)
{
	TOV_Number = u8Val;

}

void TMR0_Get_TOV_Number(unsigned char  *u8Val)
{
	*u8Val = TOV_Number ;
}


void TMR0_Get_Ticks_of_SWcounter (int *u8Val)
{
	*u8Val =  256*TOV_Number + TCNT0->value;
}


void callback_TMR0_Overflow_Interrupt (void(*Ptr_to_OVI_Function)(void))
{
	Ptr_To_OVFI = Ptr_to_OVI_Function ;

}

void callback_OCR0_Compare_Match_Interrupt(void(*Ptr_to_OCM_Function)(void))
{
	Ptr_To_OCMI = Ptr_to_OCM_Function ;
}


ISR(TIMER0_COMP_vect)
{
	(*Ptr_To_OCMI)();
}

ISR(TIMER0_OVF_vect)
{
	TOV_Number++;
	(*Ptr_To_OVFI)();
}
