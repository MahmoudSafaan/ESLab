/*
 * main.c
 *
 *  Created on: Aug 26, 2022
 *      Author: Mahmoud.Hamdy
 */

#include "TYPES_H.h"
#include "REGISTER_ADDRESS_H.h"
#include "MACROS_H.h"

int main()
{
	SET_PIN(DDRC, PIN2);
	SET_PIN(PORTC, PIN2);

	CLR_PIN(DDRD, PIN2);

	while(1)
	{
		if(GET_PIN(PIND, PIN2))
		{
			TOGGLE_PIN(PORTC, PIN2);
			_delay_ms(500);
		}
	}
}
