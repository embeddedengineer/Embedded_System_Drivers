/*
 * TIMER0.h
 *
 *  Created on: Aug 8, 2019
 *      Author: abdelrhman
 */

#ifndef _TIMER0_H_
#define _TIMER0_H_


/**************************TCCR0 Registers*************************************/
#define FOC0 	7
#define WGM00	6
#define COM01 	5
#define COM00	4
#define WGM01	3
#define CS02 	2
#define CS01 	1
#define CS00 	0
/**************************Enable TMR0 Pin*************************************/
#define TOIE0	0
#define OCIE0	1


enum WAVE_FORM_GEN   //Timer/Counter0 Output Compare Match Interrupt Enable
{
	CTC,
	NORMAL
};

enum TOVFIE0
{
	TOIE0_enable,
	TOIE0_disable
};

enum OCMIE0   //Timer/Counter0 Output Compare Match Interrupt Enable
{
	OCIE0_enable ,
	OCIE0_disable
};



enum TMR0_PRESCALAR
{
	NO_CLK_SRC = 0, //Timer Disable
	NO_PRESCALING = 1,
	PRESCALING_CLK8 = 2,
	PRESCALING_CLK64 = 3,
	PRESCALING_CLK256 = 4,
	PRESCALING_CLK1024 = 5,
	EXT_CLK_FALLING = 6,
	EXT_CLK_RISING = 7
};


typedef struct STimer0_Settings
{
	enum TOVFIE0 Timer0_OVFI ;
	enum OCMIE0 Timer0_OCIE;
	enum WAVE_FORM_GEN Timer0_Mode ;
	enum TMR0_PRESCALAR Timer0_PRESCALAR;
}Timer0_Settings;

extern void TMR0_Init(struct STimer0_Settings Configuration);
extern void TMR0_ReadCounterValue(unsigned char* u8NumOfTicks);
extern void TMR0_Set_Compare_Value(unsigned char u8Val);

extern void TMR0_Set_TOV_Number(int u8Val);
extern void TMR0_Get_TOV_Number(int *u8Val);
extern void TMR0_Set_Counter_Value(unsigned char  u8Val);
////SW Counter
extern void TMR0_Get_Ticks_of_SWcounter (int *u8Val);

//ISR
extern void callback_TMR0_Overflow_Interrupt (void(*Ptr_to_OVI_Function)(void));
extern void callback_OCR0_Compare_Match_Interrupt(void(*Ptr_to_OCM_Function)(void));

#endif /* _TIMER0_H_ */
