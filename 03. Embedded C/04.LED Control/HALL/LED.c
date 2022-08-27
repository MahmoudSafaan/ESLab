/*
 * LED.c
 *
 *  Created on: Aug 27, 2022
 *      Author: ahmed
 */
#include "LED.h"

void LED0_Init()
{
	DIO_SetPinDir(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_TurnOn()
{
	DIO_SetPinVal(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}

void LED0_TurnOff()
{
	DIO_SetPinVal(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}


void LED0_Toggle()
{
	DIO_TogllePin(DIO_PORTC, DIO_PIN2);
}










