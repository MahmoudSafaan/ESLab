/* SWAPPING ENTERED VALUES USING POINTERS 8*/

#include <stdio.h>

int main()
{
    // Declare Variables
    int input_1, input_2, temp;

    // GET data
    printf("Please enter the first value: \n");
    scanf("%d", &input_1);
    printf("Please enter the second value: \n");
    scanf("%d", &input_2);

    // Declare Pointers
    int *ptr_1 = &input_1, *ptr_2 = &input_2, *ptr_temp = &temp;

    // Set 'temp' value to pointer 1
    *ptr_temp = *ptr_1; // *ptr_1  will return the value of input_1

    // Swap Data
    *ptr_1 = *ptr_2 ; *ptr_2 = *ptr_temp;

    // Show Results
    printf("The swapped values are:\n");
    printf("The first value = %d\n", input_1);
    printf("The second value = %d\n", input_2);

    return 0;

}
