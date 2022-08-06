#include "functions.h"

int arr_sum(int array_length, int* array_address)
{
    // Declare variables
    int i = 0, result = 0;
    // Declare pointer
    int *ptr = &array_address;
    while (i < array_length)
    {
        // loop through addresses of the array
        ptr = array_address + i;
        // addition of values
        result += *ptr;
        i++;
    }
    // GET final result
    return result;
}

}
