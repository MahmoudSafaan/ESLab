#include <stdio.h>
/* Reverse Three Given Numbers Order*/
int count_digits(num)
{
    int temp = 10, counter = 1;

    while(num / temp > 0)
    {
        temp*=10;
        counter++;
    }

    printf("\n\>>> The number '%d' consists of '%d' digits\n\n", num, counter);

    return 0;
}


int reverse_digits(num)
{
    int mod, sorted;
    printf(">>> The reversed digits for number '%d' is '", num);

    while(num != 0)
    {
        mod = num % 10;
        num = num / 10;
        printf("%d", mod);
    }
    printf("'\n\n");
}


int main()
{
    int num;
    printf("The Program reverses the order of digits in given number\n");
    printf("Please enter a number\n");
    scanf("%d", &num);
    count_digits(num);
    reverse_digits(num);
    return 0;
}

