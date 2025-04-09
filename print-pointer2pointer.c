// wap to print the value of  a variable i by using "pointer to pointer" type of variable

#include <stdio.h>

int main()
{
    int a=9;
    int*b=&a;
    int**i=&b;

    printf("the value of variable i is %d",**i);
    return 0;
}