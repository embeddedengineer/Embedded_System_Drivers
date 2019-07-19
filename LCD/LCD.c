/*
 * LCD.c
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#include "LCD.h"
#include <avr/io.h>
#include <util/delay.h>

void LcdCommand( unsigned char cmnd ) {
	WRITE_H_NIBBLE(LCD_DPRT, cmnd);
	LCD_CPRT &= ~(1<<LCD_RS);
	LCD_CPRT |= (1<<LCD_EN);
	_delay_us(1);
	LCD_CPRT &= ~(1<<LCD_EN);
	_delay_us(100);
	WRITE_L_NIBBLE(LCD_DPRT, cmnd);
	LCD_CPRT |= (1<<LCD_EN);
	_delay_us(1);
	LCD_CPRT &= ~(1<<LCD_EN);
	_delay_us(100);
}

void LcdData( unsigned char data ) {
	WRITE_H_NIBBLE(LCD_DPRT, data);
	LCD_CPRT |= (1<<LCD_RS);
	LCD_CPRT |= (1<<LCD_EN);
	_delay_us(1);
	LCD_CPRT &= ~(1<<LCD_EN);
	WRITE_L_NIBBLE(LCD_DPRT, data);
	LCD_CPRT |= (1<<LCD_EN);
	_delay_us(1);
	LCD_CPRT &= ~(1<<LCD_EN);
	_delay_us(100);
}

void Init_Lcd() {
	LCD_DDDR = 0xF0;
	LCD_CDDR |= (1<<6) | (1<<7);
	LCD_CPRT &= ~(1<<LCD_EN);
	LcdCommand(_4BITS_2LINES);
	LcdCommand(DISPLAY_ON_CURSOR_OFF);
	LcdCommand(CLEAR_SCREEN);
	_delay_us(2000);
	LcdCommand(ENTRY_MODE);
}

void LcdXY(unsigned char x, unsigned char y) {
	unsigned char RowAdd[] = {0x80, 0xC0};
	LcdCommand(RowAdd[x] + y);
	_delay_us(100);
}

void LcdPrint(char * str ) {
	unsigned char i = 0;
	while(str[i] != 0) LcdData(str[i++]);
}

void LcdClear(void){
	LcdCommand(CLEAR_SCREEN);
	_delay_us(2000);
}
