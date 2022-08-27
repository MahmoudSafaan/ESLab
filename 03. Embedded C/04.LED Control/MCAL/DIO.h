/*
 * DIO.h
 *
 *  Created on: Aug 26, 2022
 *      Author:  Ahmed Younis
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include "../STD_TYPES.h"
#include "../MACROS.h"
#include "REGISTERS_ADDRESSES.h"

//#define  DIO_PORTA      0
//#define  DIO_PORTB      1
//#define  DIO_PORTC      2
//#define  DIO_PORTD      3
//#define  DIO_PIN0       0
//#define  DIO_PIN1       1
//#define  DIO_PIN2       2
//#define  DIO_PIN3       3
//#define  DIO_PIN4       4
//#define  DIO_PIN5       5
//#define  DIO_PIN6       6
//#define  DIO_PIN7       7
//#define  DIO_PIN_INPUT    0
//#define  DIO_PIN_OUTPUT   1
//#define  DIO_PIN_LOW      0
//#define  DIO_PIN_HIGH     1

typedef enum DIO_ports
{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}PORTS;

typedef enum DIO_pins
{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
}PINS;



#define  DIO_PORT_Output  0xFF
#define  DIO_PORT_Input   0x00


typedef enum DIO_pin_direction
{
	DIO_PIN_INPUT,
	DIO_PIN_OUTPUT
}PIN_DIRECTION;


typedef enum DIO_pin_status
{
	DIO_PIN_LOW,
	DIO_PIN_HIGH
}PIN_DIRECTION;

#define  DIO_Port_HIGH  0xFF
#define  DIO_Port_LOW   0x00


void  DIO_SetPortDir(uint8 Port , uint8 Dir);
void  DIO_SetPinDir(uint8 Port ,uint8 Pin ,uint8 Dir);

void  DIO_SetPortVal(uint8 Port , uint8 Val);
void  DIO_SetPinVal(uint8 Port ,uint8 Pin ,uint8 Val);

uint8  DIO_GetPortVal(uint8 Port);
uint8  DIO_GetPinVal(uint8 Port ,uint8 Pin);

void DIO_TogllePin(uint8 Port ,uint8 Pin);

#endif
