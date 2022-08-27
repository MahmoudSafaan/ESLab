/*
 * LCD_CONFIG.h
 *
 *  Created on: Aug 27, 2022
 *      Author: Mahmoud.Hamdy
 */

#ifndef HALL_LCD_CONFIG_H_
#define HALL_LCD_CONFIG_H_

#include "../MCAL/DIO.h"

#define LCD_MODE			4

#define LCD_8BIT_CMD_PORT	DIO_PORTD
#define LCD_8BIT_DATA_PORT	DIO_PORTC

// PORTS FOR PINS EN2, EN1, DIP
#define LCD_4BIT_CMD_PORT	DIO_PORTB
// PORTS FOR PINS A,B,C,D
#define LCD_4BIT_DATA_PORT	DIO_PORTA

#define LCD_PIN_D0			DIO_PIN0
#define LCD_PIN_D1			DIO_PIN1
#define LCD_PIN_D2			DIO_PIN2
#define LCD_PIN_D3			DIO_PIN3
#define LCD_PIN_D4			DIO_PIN4
#define LCD_PIN_D5			DIO_PIN5
#define LCD_PIN_D6			DIO_PIN6
#define LCD_PIN_D7			DIO_PIN7

// EN2--PB1
#define	LCD_RS				DIO_PIN1
// EN1--PB2
#define	LCD_RW				DIO_PIN2
// DIP--PB3
#define	LCD_E				DIO_PIN3

#endif /* HALL_LCD_CONFIG_H_ */
