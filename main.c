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


int main(void) {
	LCD_Init();
	KEYPAD_Init();
	unsigned char keypressed = 0;
	while(1){
		keypressed  = KEYPAD_PressedKey();
		switch (keypressed) {
			case 0: break;
			default:
				LCD_XY(0,0);
				LCD_WriteINT(keypressed);
				keypressed = 0;
				break;
		}
	}

	return 1;
}

