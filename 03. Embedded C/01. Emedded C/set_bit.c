#include <stdio.h>
#define print printf
#define scan scanf
// Print Binary
#define _BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define _BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')
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



int main(){

    int val_1, val_2;
    val_1 = 0b11111000;
    val_2 = 1;
    print("val_1 = "_BINARY_PATTERN, _BINARY(val_1));\
    int adding_bit = _SET_BIT(val_1, val_2);
    int removing_bit = _CLR_BIT(val_1, val_2);
    int toggle_bit = _TOGGLE_BIT(val_1, val_2);

    print("\nAdding Bit Result =  "_BINARY_PATTERN, _BINARY(adding_bit));
    print("\nCHECK = %d  ", _GET_BIT(adding_bit, val_2));
    print("\n");

    print("\nRemoving Bit Result =  "_BINARY_PATTERN, _BINARY(removing_bit));
    print("\nCHECK = %d  ", _GET_BIT(removing_bit, val_2));
    print("\n");

    print("\nVal_1 =  "_BINARY_PATTERN, _BINARY(val_1));
    print("\nTOGGLE = ", _BINARY_PATTERN, _BINARY(toggle_bit));
    print("\nCHECK = %d  ", val_1);
    print("\nCHECK = %d  ", toggle_bit);
    print("\nTOGGLE = ", _BINARY_PATTERN, _BINARY(toggle_bit));

    return 0;
}
