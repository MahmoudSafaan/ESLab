#include <stdio.h>
#include<string.h>

int main()
{
    char def_user_name[12] = "Ahmed";
    char def_user_pw[12] = "123&";

    char user_name[12], user_pw[12];

    printf("Enter user name:\n");
    scanf(" %s", &user_name);

    printf("Enter user password:\n");
    scanf(" %s", &user_pw);
    printf("user name: %s\n");

    if(strcmp(user_name, def_user_name)&strcmp(user_pw, def_user_pw)){
        printf("Correct User name & Password:\n");
    }else if(strcmp(user_name, def_user_name)){
        printf("Correct User name & Wrong Password:\n");
    }else if(strcmp(user_pw, def_user_pw)){
        printf("Wrong User name & Correct Password:\n");
    }else{
        printf("Wrong User name & Password:\n");
    }
    main();
}
