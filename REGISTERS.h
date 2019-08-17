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


//---------------------------------- SREG Register -----------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char C : 1;
		unsigned char Z : 1;
		unsigned char N : 1;
		unsigned char V : 1;
		unsigned char S : 1;
		unsigned char H : 1;
		unsigned char T : 1;
		unsigned char I : 1;
	};
}_SREG;

static volatile _SREG * const SREG = (volatile _SREG *)0x5F;
//---------------------------------- END ------------------------------------------------

//---------------------------------- MCUCR Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char ISC00 : 1;
		unsigned char ISC01 : 1;
		unsigned char ISC10 : 1;
		unsigned char ISC11 : 1;
	};
}_MCUCR;

static volatile _MCUCR * const MCUCR = (volatile _MCUCR *)0x55;
//---------------------------------- END ------------------------------------------------

//---------------------------------- MCUCSR Register ------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char : 6;
		unsigned char ISC2 : 1;
	};
}_MCUCSR;

static volatile _MCUCSR * const MCUCSR = (volatile _MCUCSR *)0x54;
//---------------------------------- END ------------------------------------------------

//---------------------------------- GICR Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char : 5;
		unsigned char INT2 : 1;
		unsigned char INT0 : 1;
		unsigned char INT1 : 1;
	};
}_GICR;

static volatile _GICR * const GICR = (volatile _GICR *)0x5B;
//---------------------------------- END ------------------------------------------------

//---------------------------------- GIFR Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char : 5;
		unsigned char INTF2 : 1;
		unsigned char INTF0 : 1;
		unsigned char INTF1 : 1;
	};
}_GIFR;

static volatile _GIFR * const GIFR = (volatile _GIFR *)0x5A;
//---------------------------------- END ------------------------------------------------

//---------------------------------- TCCR0 Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char CS00  : 1;
		unsigned char CS01  : 1;
		unsigned char CS02  : 1;
		unsigned char WGM01 : 1;
		unsigned char COM00 : 1;
		unsigned char COM01 : 1;
		unsigned char WGM00 : 1;
		unsigned char FOC0  : 1;
	};
}_TCCR0;

static volatile _TCCR0 * const TCCR0 = (volatile _TCCR0 *)0x53;
//---------------------------------- END ------------------------------------------------

//---------------------------------- TCNT0 Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char b0  : 1;
		unsigned char b1  : 1;
		unsigned char b2  : 1;
		unsigned char b3 : 1;
		unsigned char b4 : 1;
		unsigned char b5 : 1;
		unsigned char b6 : 1;
		unsigned char b7  : 1;
	};
}_TCNT0;
static volatile _TCNT0 * const TCNT0 = (volatile _TCNT0 *)0x52;
//---------------------------------- END ------------------------------------------------

//---------------------------------- TIMSK Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char TOIE0  : 1;
		unsigned char OCIE0  : 1;
		unsigned char TOIE1  : 1;
		unsigned char OCIE1B : 1;
		unsigned char OCIE1A : 1;
		unsigned char TICIE1 : 1;
		unsigned char TOIE2  : 1;
		unsigned char OCIE2  : 1;
	};
}_TIMSK;

static volatile _TIMSK * const TIMSK = (volatile _TIMSK *)0x59;
//---------------------------------- END ------------------------------------------------

//---------------------------------- OCR0 Register -------------------------------------
typedef union {
	unsigned char value;
	struct {
		unsigned char b0  : 1;
		unsigned char b1  : 1;
		unsigned char b2  : 1;
		unsigned char b3 : 1;
		unsigned char b4 : 1;
		unsigned char b5 : 1;
		unsigned char b6 : 1;
		unsigned char b7  : 1;
	};
}_OCR0;
static volatile _OCR0 * const OCR0 = (volatile _OCR0 *)0x5C;
//---------------------------------- END ------------------------------------------------

#endif /* REGISTERS_H_ */
