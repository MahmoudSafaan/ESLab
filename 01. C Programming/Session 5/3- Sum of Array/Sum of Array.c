#include <stdio.h>
#define print printf
#include "functions.h"

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}, i = 0, init = 0;

    print("result = %d", arr_sum((sizeof(arr)/sizeof(arr[0])), arr));

    return 0;
}


