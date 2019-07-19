/*
 * LCD.h
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#ifndef _LCD_H_
#define _LCD_H_

#define	LCD_DPRT  PORTB
#define	LCD_DDDR  DDRB

#define	LCD_CPRT  PORTC
#define	LCD_CDDR  DDRC

#define	LCD_RS  6
#define	LCD_EN  7

#define _4BITS_2LINES 		  0X28
#define DISPLAY_ON_CURSOR_OFF 0X0C
#define CLEAR_SCREEN 		  0X01
#define ENTRY_MODE 	          0x06

#define WRITE_H_NIBBLE(PORT, VALUE) PORT = (PORT & 0X0F) | (VALUE & 0XF0)
#define WRITE_L_NIBBLE(PORT, VALUE) PORT = (PORT & 0X0F) | ((VALUE << 4) & 0XF0)

extern void LcdCommand( unsigned char cmnd );
extern void LcdData( unsigned char data );
extern void Init_Lcd(void);
extern void LcdXY(unsigned char x, unsigned char y);
extern void LcdPrint(char * str );
extern void LcdClear(void);
#endif /* _LCD_H_ */
