// write a program to print the address of a variable. use address to get the value of the variable

#include <stdio.h>

int main()
{
    int a=6;
    int*pt=&a;
    printf("Address of variable a is %u\n",pt);
    printf("Value at address %u is %d\n",pt, *pt);
    return 0;
}