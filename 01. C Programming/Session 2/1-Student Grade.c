#include<stdio.h>

int main()
{
    int grade;
    printf("Please enter the student grade:\n");
    scanf("%d", &grade);

    if(grade <= 59){
        printf("Student Grade is : Fail");
    } else if (grade > 59 & grade <=69){
        printf("Student Grade is : Pass");
    } else if (grade > 69 & grade <=79){
        printf("Student Grade is : Good");
    } else if (grade > 79 & grade <=89){
        printf("Student Grade is : Very Good");
    } else {
        printf("Student Grade is : Excellent");
    }

    return 0;
}
