#include<stdio.h>
/* Summation of Even numbers from 0 to number given by the used*/
int main()
{
    int current_value = 0, sum = 0, stop_value, eq;
    printf("This program reads value from user and shows the summation of even numbers from zero to given number\n");
    printf("Pleas enter a number\n");
    scanf("%d", &stop_value);

    while(current_value <= stop_value){
        if(current_value % 2 == 0){
            sum += current_value;
            current_value += 1;
        }else{
            current_value += 1;
        }
    }
    printf("Total of even numbers from Zero to %d = %d\n", stop_value, sum);
    eq = (stop_value / 2) * ((stop_value / 2) + 1);
    printf("You have %d even numbers from Zero to %d\n", eq / 2, stop_value);
    printf("Total of even numbers based on equation= %d\n", eq);
    return 0;
}
