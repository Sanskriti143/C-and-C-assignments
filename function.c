#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int res1,num1,y,power,num2,random,upl,lwl;
    char str1[10],str2[10],str3[10],str4[10],str5[10],str6[10],str7[10];
    float sqroot,num3,val1,num4,val2;

    //comparing two strings
    printf("Enter two strings :");
    scanf("%s",&str1);
    scanf("\n%s",&str2);
    res1 = strcmp(str1,str2);
    printf("Result =%d",res1);
    if(res1==0)
        printf("\nStrings are equal..");
    else
        if(res1 < 0)
             printf("\nFirst unmatched character has less value of first string");
        else
             printf("\nFirst unmatched character has higher value of first string");

    //copying one string to other variable
    printf("\n\nEnter a string to copied:");
    scanf("%s",&str3);
    strcpy(str4 , str3);
    printf("The copied string is copied that is : %s", str4);

    //Reverse the string
    printf("\n\nEnter the string to be reversed :");
    scanf("%s",&str5);
    printf("After reversing the string becomes : %s", strrev(str5));

    //Change the string to uppercase
    printf("\n\nThe string to be changed in uppercase is: %s");
    scanf("%s",&str6);
    printf("String in uppercase : %s", strupr(str6));

    //Change the string to lowercase
    printf("\n\nThe string to be changed in lowercase is :");
    scanf("%s",&str7);
    printf(" The string in lowercase : %s", strlwr(str7));

    //Calculate power of a number
    printf("\n\nEnter a number:");
    scanf("%d",&num1);
    printf("The power to which it is to be raised :");
    scanf("%d",&y);
    power = pow(num1,y);
    printf("The number raised to the given power is : %d", power);

    //Square root of a number
    printf("\n\n Enter a number whose square root is to found :");
    scanf("%d",&num2);
    sqroot = sqrt(num2);
    printf("Square root of the given number %d is : %f",num2,sqroot);

    //Smallest integer value greater than the entered number
    printf("\n\nEnter a real number :");
    scanf("%f", &num3);
    val1 = ceil(num3);
    printf("The smallest integer value greater than %f is : %f", num3, val1);

    //Largest integer value smaller than the entered number
    printf("\n\nEnter a real number :");
    scanf("%f",&num4);
    val2 = floor(num4);
    printf("The largest integer value smaller than %f is : %f", num4, val2);

    //Random number generation
    printf("\n\nEnter upper limit :");
    scanf("%d",&upl);
    printf("Enter lower limit :");
    scanf("%d",&lwl);
    srand(time(0));
    random = rand() % upl + lwl;
    printf("Random number is : %d",random);

    return 0;
}
