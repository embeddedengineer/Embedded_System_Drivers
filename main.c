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
#include <util/delay.h>


int main(void) {
	LCD_Init();
	unsigned char x;
	while(1){
		for(x=0;x<256;x++) {
			LCD_WriteINT(x);
			_delay_ms(650);
			LCD_Clear();
		}
	}

	return 1;
}

