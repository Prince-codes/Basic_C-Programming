// Quick Quiz: Write a program to store the details of 3 employees from user defined data. Use the structure declared above(code, salary, name).

# include <stdio.h>
# include <string.h>

struct employee
{
    int code;
    int salary;
    char name[30];
}e1,e2,e3;

int main()
{
    printf("Enter data for employee 1 : ");
    printf("Enter code : "); scanf("%d",&e1.code);
    printf("Enter Salary : "); scanf("%d",&e1.salary);
    printf("Enter name : "); scanf("%s",&e1.name);

    printf("\nEnter data for employee 2 : ");
    printf("Enter code : "); scanf("%d",&e2.code);
    printf("Enter Salary : "); scanf("%d",&e2.salary);
    printf("Enter name : "); scanf("%s",&e2.name);

    printf("\nEnter data for employee 3 : ");
    printf("Enter code : "); scanf("%d",&e3.code);
    printf("Enter Salary : "); scanf("%d",&e3.salary);
    printf("Enter name : "); scanf("%s",&e3.name);

    printf("\nEntered data for employee 1 : ");
    printf("\t%d",e1.code);
    printf("\t%d",e1.salary);
    printf("\t%s\n",e1.name);

    printf("Entered data for employee 2 : ");
    printf("\t%d",e2.code);
    printf("\t%d",e2.salary);
    printf("\t%s\n",e2.name);

    printf("Entered data for employee 3 : ");
    printf("\t%d",e3.code);
    printf("\t%d",e3.salary);
    printf("\t%s\n",e3.name);

    return 0;
}
