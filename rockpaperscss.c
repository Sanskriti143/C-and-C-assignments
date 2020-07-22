#include <stdio.h>
#include <time.h>

int main()
{
    int random;
    char str[10];
    srand(time(0));
    random = rand() % 3 + 1;

    printf(" Please choose rock, paper, scissors : ");
    scanf("%s",str);
    printf("\n You choose : %s",str);
    printf(" \nComputer choose : ");

    if (random == 1)
        printf(" Rock ");
    if (random == 2)
        printf(" Paper ");
    if (random == 3)
        printf(" Scissors ");

    if(random == 1)
    {
        if(str[0]=='r'||str[0]=='R')
            printf("\nSame choice...");
        else if(str[0]=='p'||str[0]=='P')
            printf("\nYou won...");
        else
            printf("\nYou lost...");
    }
    if(random == 2)
    {
        if(str[0]=='r'||str[0]=='R')
            printf("\nYou lost...");
        else if(str[0]=='p'||str[0]=='P')
            printf("\nSame choice...");
        else
            printf("\nYou won...");
    }
    if(random == 3)
    {
        if(str[0]=='r'||str[0]=='R')
            printf("\nYou won...");
        else if(str[0]=='p'||str[0]=='P')
            printf("\nYou lost...");
        else
            printf("\nSame choice...");
    }

    return 0;
}
