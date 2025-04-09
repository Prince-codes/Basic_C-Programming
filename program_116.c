// Write a program to illustrate the use of arrow operator → in C.

#include <stdio.h>

struct employee
{
    int code;
    int salary;
    char name[30];
}e1;

int main()
{
    printf("\nEnter data for employee 1 : ");
    printf("\nEnter code : "); scanf("%d",&e1.code);
    printf("\nEnter Salary : "); scanf("%d",&e1.salary);
    printf("\nEnter name : "); scanf("%s",&e1.name);

    struct employee *ptr;
    ptr = &e1; // ptr points to e1
    printf("%d\t",ptr->code); 
    printf("%d\t",ptr->salary); 
    printf("%s\t",ptr->name); 

    return 0;
}