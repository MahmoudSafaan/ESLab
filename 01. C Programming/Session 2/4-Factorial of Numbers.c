#include<stdio.h>
/* Factorial of given number */
int main()
{
    int current_value = 0, fact = 1, stop_value;
    printf("This program reads value from user and shows the factorial of a given number\n");
    printf("Pleas enter a number\n");
    scanf("%d", &stop_value);

    while(current_value <= stop_value){
        if(current_value == 0){
            current_value = 1;
        }else{
            fact *= current_value;
            current_value++;
        }
    }
    printf("The factorial of %d = %d\n", stop_value, fact);
    return 0;
}
