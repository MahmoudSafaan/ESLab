#include <stdio.h>

#define print printf


int main()
{
    // Declare array
    int array[50], i = 0;

    // Set data
    while(i < 50)
    {
        array[i] = i + 1;
        print("Array[%d] = %d\n", i, array[i]);

        i++;
    }

    return 0;

}
