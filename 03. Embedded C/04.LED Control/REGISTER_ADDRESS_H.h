/*
 * REGISTER_ADDRESS_H.h
 *
 *  Created on: Aug 26, 2022
 *      Author: Mahmoud.Hamdy
 */

#ifndef REGISTER_ADDRESS_H_H_
#define REGISTER_ADDRESS_H_H_

#define PORTC *((volatile unsigned char*)0X35)
#define DDRC *((volatile unsigned char*)0X34)
#define PINC *((volatile unsigned char*)0X33)

#define PORTD *((volatile unsigned char*)0X32)
#define DDRD *((volatile unsigned char*)0X31)
#define PIND *((volatile unsigned char*)0X30)


#endif /* REGISTER_ADDRESS_H_H_ */
