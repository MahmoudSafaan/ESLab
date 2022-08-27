/*
 * LCD.h
 *
 *  Created on: Aug 27, 2022
 *      Author: Mahmoud.Hamdy
 */

#ifndef HALL_LCD_H_
#define HALL_LCD_H_

#include "../STD_TYPES.h"
#include "../MCAL/DIO.h"
#include "LCD_CONFIG.h"

void LCD_Init();
void LCD_WriteCmd(uint8 cmd);
void LCD_WriteChar(uint8 data);

#endif /* HALL_LCD_H_ */
