/*
 * 7SEGMENT.h
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#ifndef _7SEGMENT_H_
#define _7SEGMENT_H_

#define BCD_DATA PORTB
#define _7SEG_EN PORTC

#define BCD_DDR 	 DDRB
#define _7SEG_EN_DDR DDRC

extern void DrawNumber(unsigned char number, unsigned char DisplayNum);
extern void Init_7SEG(void);

#endif /* _7SEGMENT_H_ */
