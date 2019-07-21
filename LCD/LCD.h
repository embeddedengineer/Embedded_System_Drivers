/*
 * LCD.h
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#ifndef _LCD_H_
#define _LCD_H_

#define	LCD_DPRT  PORTB->PORT
#define	LCD_DDDR  DDRB->DDR

#define	LCD_CPRT  PORTC->PORT
#define	LCD_CDDR  DDRC->DDR

#define	LCD_RS  PORTC->PC6
#define	LCD_EN  PORTC->PC7

#define _4BITS_2LINES 		  0X28
#define DISPLAY_ON_CURSOR_OFF 0X0C
#define CLEAR_SCREEN 		  0X01
#define ENTRY_MODE 	          0x06

#define WRITE_H_NIBBLE(PORT, VALUE) PORT = (PORT & 0X0F) | (VALUE & 0XF0)
#define WRITE_L_NIBBLE(PORT, VALUE) PORT = (PORT & 0X0F) | ((VALUE << 4) & 0XF0)


extern void LCD_Command( unsigned char cmnd );
extern void LCD_Data( unsigned char data );
extern void LCD_Init(void);
extern void LCD_XY(unsigned char x, unsigned char y);
extern void LCD_Print(char * str );
extern void LCD_Clear(void);
extern void LCD_WriteINT(unsigned int num);
extern void LCD_WriteFLOAT(double num);

#endif /* _LCD_H_ */
