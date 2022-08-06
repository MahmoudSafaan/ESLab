#include <stdio.h>
#include <stdbool.h>


int addition (int x, int y){
    return x + y;
}


int substract (int x, int y){
    return x - y;
}


int multiply (int x, int y){
    return x * y;
}


int subst (int x, int y){
    return x / y;
}


int checker(int x, int y, char operation){
    int res;
    switch(operation){
        case '+':
            res = addition(x, y);
            break;
        case '-':
            res = substract(x, y);
            break;
        case '*':
            res = multiply(x, y);
            break;
        case '/':
            res = subst(x, y);
            break;

        default:
            printf("Wrong Operation Entered...Please try again!");
            main();
    }
    return res;
}

int main()
{
    int num_1, num_2, res;
    char op;

    printf("The Program Operates on Given Numbers!\n");
    printf("Please enter the first number. \n");
    scanf("%d", &num_1);

    printf("Please enter the required operation (+ or - or * or /). \n");
    scanf(" %c", &op);



    printf("Please enter the second number. \n");
    scanf("%d", &num_2);


    res = checker(num_1, num_2, op);

    printf("The resutlt of %d %c %d is %d \n", num_1, op, num_2, res);
    main();
    return 0;
}

