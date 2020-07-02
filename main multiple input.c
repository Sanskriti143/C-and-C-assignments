#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,s;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    printf("Sum of %d+%d+%d is %d",a,b,c,s);
    return 0;
}
