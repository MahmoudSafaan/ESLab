/*
 * LCD.c
 *
 *  Created on: Aug 27, 2022
 *      Author: Mahmoud.Hamdy
 */

#include "LCD.h"

void LCD_Init()
{
	#if LCD_MODE==8
		// CLEAR DISPLAY DATA
	#else

	#endif
}

void LCD_WriteCmd(uint8 cmd)
{
	//setting discrete signal to low
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_RS, DIO_PIN_LOW);
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_RW, DIO_PIN_LOW);
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_LOW);
	//transmitting the high value
	LCD_4BIT_DATA_PORT = (cmd&0xf0)|(LCD_4BIT_DATA_PORT&0x0f);

	//setting discrete signal of enable to high
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_HIGH);
	//delay for the signal change
	_delay_ms(1);
	//setting discrete signal of enable to low
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_LOW);

	//transmitting the low value
	//by shifting values of the low to the left by 4 steps
	//>> port 0x0f to keep the current values of the port pins "xxxx" 0000 xxxx
	//	 and modify the "0000" part
	LCD_4BIT_DATA_PORT = (cmd<<4)|(LCD_4BIT_DATA_PORT&0x0f);

}

void LCD_WriteChar(uint8 data)
{
	//setting discrete signal to low
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_RS, DIO_PIN_HIGH);
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_RW, DIO_PIN_LOW);
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_LOW);
	//transmitting the high value
	LCD_4BIT_DATA_PORT = (data&0xf0)|(LCD_4BIT_DATA_PORT&0x0f);

	//setting discrete signal of enable to high
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_HIGH);
	//delay for the signal change
	_delay_ms(1);
	//setting discrete signal of enable to low
	DIO_SetPinVal(LCD_4BIT_CMD_PORT, LCD_E, DIO_PIN_LOW);

	//transmitting the low value
	LCD_4BIT_DATA_PORT = (data<<4)|(LCD_4BIT_DATA_PORT&0x0f);

}
