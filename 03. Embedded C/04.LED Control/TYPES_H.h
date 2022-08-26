/*
 * TYPES_H.h
 *
 *  Created on: Aug 26, 2022
 *      Author: Mahmoud.Hamdy
 */

#ifndef TYPES_H_H_
#define TYPES_H_H_



typedef unsigned char uint8;
typedef unsigned char uint16;
typedef unsigned char uint64;

typedef enum
{
    PORTA, PORTB, PORTC, PORTD
}PortType;

typedef enum
{
    PIN1, PIN2, PIN3, PIN4, PIN5, PIN6, PIN7, PIN8
}PinType;

typedef enum
{
    input, output
}Direction;


#endif /* TYPES_H_H_ */
