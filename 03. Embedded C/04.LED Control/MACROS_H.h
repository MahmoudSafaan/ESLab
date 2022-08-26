/*
 * MACROS_H.h
 *
 *  Created on: Aug 26, 2022
 *      Author: Mahmoud.Hamdy
 */

#ifndef MACROS_H_H_
#define MACROS_H_H_

// changes registered binary number by ADDING the given bit
#define _SET_BIT(REG, BIT) REG|(1<<BIT)
// or define _SET_BIT(REG, BIT) REG|(1<<BIT)

// changes registered binary number by REMOVING the given bit
#define _CLR_BIT(REG, BIT) REG&~(1<<BIT)
// or define _SET_BIT(REG, BIT) REG|(1>>BIT)

// checking of the bit is one or zero
#define _GET_BIT(REG, BIT) (REG>>BIT)&1

// toggle certain bit from 1 to 0 or from 0 to 1
// 111"1" 1000
// 000"1" 0000
// ___________ result
// 111"0" 1000
// >>>>>>>>>>>>>>>>>>CHECK
#define _TOGGLE_BIT(REG, BIT) REG^(1<<BIT)



#endif /* MACROS_H_H_ */
