#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float s,d,r,m,di;
    printf("Enter two numbers on which calculation is to be performed:");
    scanf("%d%d",&a,&b);
    s=a+b;
    d=a-b;
    r=a%b;
    m=a*b;
    di=a/b;
    printf("Sum=%f\n",s);
    printf("Difference=%f\n",d);
    printf("Remainder=%f\n Multiplication=%f\n Division=%f\n",r,m,di);

    return 0;
}
