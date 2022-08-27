 /*
 * REGISTERS_ADDRESSES.h
 *
 *  Created on: Mar 22, 2022
 *      Author:  Ahmed Younis
 */

#ifndef MCAL_REGISTERS_ADDRESSES_H_
#define MCAL_REGISTERS_ADDRESSES_H_

#define SREG   *((volatile unsigned char*)0x5F)

#define    PORTA    *((volatile uint8*) 0x3B)
#define    DDRA     *((volatile uint8*) 0x3A)
#define    PINA     *((volatile uint8*) 0x39)

#define    PORTB    *((volatile uint8*) 0x38)
#define    DDRB     *((volatile uint8*) 0x37)
#define    PINB     *((volatile uint8*) 0x36)

#define    PORTC    *((volatile uint8*) 0x35)
#define    DDRC     *((volatile uint8*) 0x34)
#define    PINC     *((volatile uint8*) 0x33)

#define    PORTD    *((volatile uint8*) 0x32)
#define    DDRD     *((volatile uint8*) 0x31)
#define    PIND     *((volatile uint8*) 0x30)

#endif /* MCAL_REGISTERS_ADDRESSES_H_ */
