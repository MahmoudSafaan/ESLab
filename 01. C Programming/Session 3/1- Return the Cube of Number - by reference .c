#include <stdio.h>
#include <stdbool.h>

int cube(int *x){
    *x = (*x) * (*x) * (*x);
    return *x;
}
int main()
{
    int num;

    printf("The Program Returns the Cube of Given Number!\n");
    printf("Please enter a number. \n");
    scanf("%d", &num);

    cube(&num);
    printf("The cube is %d \n", num);

    return 0;
}

