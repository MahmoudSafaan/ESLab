#include <stdio.h>
#include <stdbool.h>
/* Checks if given number is prime or not */
int prime_chkr(num)
{
    int i, prime = true;

    /* Checks if the given number is a corner case */
    if (num == 0 | num == 1){
        prime = false;
    }
    /* if the number is divisible by i, then the number
    is not prime */
    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

  // flag is 0 for prime numbers
  if (prime){
    printf("%d is a prime number.\n", num);
  }else{
    printf("%d is not a prime number.\n", num);
  }


}



int main()
{
    int num, counter = 0;

        printf("The Program checks if given number is prime or not!\n");
        printf("Please enter a number. \n");
        scanf("%d", &num);

        prime_chkr(num);
    return 0;
}
