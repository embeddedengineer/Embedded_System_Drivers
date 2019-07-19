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
	Init_Lcd();
	LcdXY(1,3);
	LcdPrint("AbdoO");
	while(1){
	}

	return 1;
}

