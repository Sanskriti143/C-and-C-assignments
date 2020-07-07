#include <stdio.h>

int main()
{
    int num=0,sum=0;
    do
    {
        printf("\nEnter a number:");
        scanf("%d",&num);
        sum=sum+num;
    }while(num!=0);
    printf("SUM OF THE NUMBERS = %d",sum);
    return 0;
}
