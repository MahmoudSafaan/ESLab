#include<stdio.h>
/* Display the max and min of 4 numbers*/
int main()
{
    int input_1, input_2, input_3, input_4, maxima, minima;
    printf("Please Enter The First Value\n");
    scanf("%d", &input_1);
    printf("Please Enter The Second Value\n");
    scanf("%d", &input_2);
    printf("Please Enter The Third Value\n");
    scanf("%d", &input_3);
    printf("Please Enter The Forth Value\n");
    scanf("%d", &input_4);

    if(input_1 > input_2 | input_1 > input_3 | input_1 > input_4 ){
        maxima = input_1;
    }
    if(input_2 > input_1 | input_2 > input_3 | input_2 > input_4){
        maxima = input_2;
    }
    if(input_3 > input_1 | input_3 > input_2 | input_3 > input_4){
        maxima = input_3;
    }
    if(input_4 > input_1 | input_4 > input_2 | input_4 > input_3){
        maxima = input_4;
    }

    if(input_1 < input_2 | input_1 < input_3 | input_1 < input_4 ){
        minima = input_1;
    }
    if(input_2 < input_1 | input_2 < input_3 | input_2 < input_4){
        minima = input_2;
    }
    if(input_3 < input_1 | input_3 < input_2 | input_3 < input_4){
        minima = input_3;
    }
    if(input_4 < input_1 | input_4 < input_2 | input_4 < input_3){
        minima = input_4;
    }
    printf("The minimum value = %d\n", minima);
    printf("The maximum value = %d\n", maxima);


    return 0;
}
