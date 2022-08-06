#include <stdio.h>

void comp (int *value, int first_run_chkr)
{
    static int prev_val = 0;
    if(first_run_chkr){
        prev_val = *value;
    }else{
        if(prev_val > *value)
        {
            printf("%d is higher than %d\n", prev_val, *value);
        }else{
            printf("%d is higher than %d\n", *value, prev_val);
        }
        prev_val = *value;
    }
}

int main()
{
    // Declare Variables
    int input, first_run = 1, keep_run = 1;

    // GET first variable

    while(keep_run)
    {
        while(first_run)
        {
            printf("Please enter the first value:\n");
            scanf("%d", &input);
            comp(&input, first_run);

            printf("Please enter the next value:\n");
            scanf("%d", &input);
            first_run = 0;
            comp(&input, first_run);
        }
        printf("Please enter the next value:\n");
        scanf("%d", &input);
        comp(&input, first_run);
    }

    return 0;
}
