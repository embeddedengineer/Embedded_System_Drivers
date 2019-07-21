/*
 * REGISTER.h
 *
 *  Created on: Jul 21, 2019
 *      Author: abdelrhman
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_

//---------------------------------- Port A  Registers ----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_DDRA;

static volatile _DDRA * const DDRA = (volatile _DDRA *)0x3A;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_PORTA;

static volatile _PORTA * const PORTA = (volatile _PORTA *)0x3B;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_PINA;

static volatile _PINA * const PINA = (volatile _PINA *)0x39;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port B Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_DDRB;

static volatile _DDRB * const DDRB = (volatile _DDRB *)0x37;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_PORTB;

static volatile _PORTB * const PORTB = (volatile _PORTB *)0x38;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_PINB;

static volatile _PINB * const PINB = (volatile _PINB *)0x36;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port C Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_DDRC;

static volatile _DDRC * const DDRC = (volatile _DDRC *)0x34;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_PORTC;

static volatile _PORTC * const PORTC = (volatile _PORTC *)0x35;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_PINC;

static volatile _PINC * const PINC = (volatile _PINC *)0x33;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port D Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_DDRD;

static volatile _DDRD * const DDRD = (volatile _DDRD *)0x31;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_PORTD;

static volatile _PORTD * const PORTD = (volatile _PORTD *)0x32;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_PIND;

static volatile _PIND * const PIND = (volatile _PIND *)0x30;
//---------------------------------- END ------------------------------------------------


#endif /* REGISTERS_H_ */
