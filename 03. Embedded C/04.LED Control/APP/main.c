/*
 * main.c
 *
 *  Created on: Mar 22, 2022
 *      Author:  Ahmed Younis
 */
#include <util/delay.h>
#include <stdio.h>

#include "../MCAL/REGISTERS_ADDRESSES.h"
#include "../MCAL/DIO.h"

#include "../HALL/LED.h"

#include "../MACROS.h"
#include "../STD_TYPES.h"

int main()
{
	while(1)
	{
		LED0_Init();
		LED0_TurnOn();
		_delay_ms(1000);
		LED0_TurnOff();
	}





/*
DIO_SetPinDir(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
DIO_SetPinVal(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);


DIO_SetPinDir(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);

while(1)
{

	if(DIO_GetPinVal(DIO_PORTD, DIO_PIN2))
	{

		DIO_TogllePin(DIO_PORTC, DIO_PIN2);
	_delay_ms(300);
	}


}*/

return 0;
}

