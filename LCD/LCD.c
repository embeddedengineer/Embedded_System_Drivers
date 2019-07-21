/*
 * LCD.c
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#include "LCD.h"
#include "../REGISTERS.h"
#include <util/delay.h>
#include <stdio.h>

void LCD_Command( unsigned char cmnd ) {
	WRITE_H_NIBBLE(LCD_DPRT, cmnd);
	LCD_RS = 0;
	LCD_EN = 1;
	_delay_us(1);
	LCD_EN = 0;
	_delay_us(100);
	WRITE_L_NIBBLE(LCD_DPRT, cmnd);
	LCD_EN = 1;
	_delay_us(1);
	LCD_EN = 0;
	_delay_us(100);
}

void LCD_Data( unsigned char data ) {
	WRITE_H_NIBBLE(LCD_DPRT, data);
	LCD_RS = 1;
	LCD_EN = 1;
	_delay_us(1);
	LCD_EN = 0;
	WRITE_L_NIBBLE(LCD_DPRT, data);
	LCD_EN = 1;
	_delay_us(1);
	LCD_EN = 0;
	_delay_us(100);
}

void LCD_Init() {
	LCD_DDDR = 0xF0;
	LCD_CDDR |= (1<<6) | (1<<7);
	LCD_CPRT &= ~(1<<LCD_EN);
	LCD_Command(_4BITS_2LINES);
	LCD_Command(DISPLAY_ON_CURSOR_OFF);
	LCD_Command(CLEAR_SCREEN);
	_delay_us(2000);
	LCD_Command(ENTRY_MODE);
}

void LCD_XY(unsigned char x, unsigned char y) {
	unsigned char RowAdd[] = {0x80, 0xC0};
	LCD_Command(RowAdd[x] + y);
	_delay_us(100);
}

void LCD_Print(char * str ) {
	unsigned char i = 0;
	while(str[i] != 0) LCD_Data(str[i++]);
}

void LCD_Clear(void){
	LCD_Command(CLEAR_SCREEN);
	_delay_us(2000);
}

void LCD_WriteINT(unsigned int num){
	char Str[32];
	sprintf(Str,"%d",num);
	LCD_Print(Str);
}

void LCD_WriteFLOAT(double num){
	char Str[32];
	sprintf(Str,"%f",num);
	LCD_Print(Str);
}
