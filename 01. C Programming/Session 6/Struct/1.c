#include <stdio.h>
#include <stdlib.h>

struct football_team{
    int established_year;
    char rank_in_league[50];
    char captain_name[50];
};

int main(){

    struct football_team shenawy = {1907, "Captain", "EL SHENAWY"};

    printf("Year: %d\n", shenawy.established_year);
    printf("Rank: %s\n", shenawy.rank_in_league);
    printf("Name: %s\n", shenawy.captain_name);

}

