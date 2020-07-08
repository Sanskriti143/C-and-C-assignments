#include <stdio.h>
#include <stdlib.h>
struct emp
{
    char name[20];
    char empid[10];
    char exp[100];
    float sal[10];
}emp1,emp2,emp3,emp4,emp5;
int main()
{
    printf("Employee 1:");
    printf("\nEnter name :");
    gets(emp1.name);
    printf("\nEnter employee ID :");
    gets(emp1.empid);
    printf("\nEnter experience :");
    gets(emp1.exp);
    printf("\nEnter salary :");
    scanf("%f",&emp1.sal);

    printf("\n\nEmployee 2:");
    printf("\nEnter name :");
    fgets(emp2.name, sizeof(20), stdin);
    printf("\nEnter employee ID :");
    gets(emp2.empid);
    printf("\nEnter experience :");
    gets(emp2.exp);
    printf("\nEnter salary :");
    scanf("%f",&emp2.sal);

    printf("\n\nEmployee 3:");
    printf("\nEnter name :");
    gets(emp3.name);
    printf("\nEnter employee ID :");
    gets(emp3.empid);
    printf("\nEnter experience :");
    gets(emp3.exp);
    printf("\nEnter salary :");
    scanf("%f",&emp3.sal);

    printf("\n\nEmployee 4:");
    printf("\nEnter name :");
    gets(emp4.name);
    printf("\nEnter employee ID :");
    gets(emp4.empid);
    printf("\nEnter experience :");
    gets(emp4.exp);
    printf("\nEnter salary :");
    scanf("%f",&emp4.sal);

    printf("\n\nEmployee 5:");
    printf("\nEnter name :");
    gets(emp5.name);
    printf("\nEnter employee ID :");
    gets(emp5.empid);
    printf("\nEnter experience :");
    gets(emp5.exp);
    printf("\nEnter salary :");
    scanf("%f",&emp5.sal);

    printf("Employee 1:");
    printf("\nName :%s\nEmployee ID :%s\nExperience :%s\nSalary :%f",emp1.name,emp1.empid,emp1.exp,emp1.sal);
    printf("\n\nEmployee 2:");
    printf("\nName :%s\nEmployee ID :%s\nExperience :%s\nSalary :%f",emp2.name,emp2.empid,emp2.exp,emp2.sal);
    printf("\n\nEmployee 3:");
    printf("\nName :%s\nEmployee ID :%s\nExperience :%s\nSalary :%f",emp3.name,emp3.empid,emp3.exp,emp3.sal);
    printf("\n\nEmployee 4:");
    printf("\nName :%s\nEmployee ID :%s\nExperience :%s\nSalary :%f",emp4.name,emp4.empid,emp4.exp,emp4.sal);
    printf("\n\nEmployee 5:");
    printf("\nName :%s\nEmployee ID :%s\nExperience :%s\nSalary :%f",emp5.name,emp5.empid,emp5.exp,emp5.sal);
    return 0;
}
