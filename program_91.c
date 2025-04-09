// Wap to change the value of a variable to ten times of its current value ( using Function and pointer),,,,,,,,,, try the problem using call by value and verify that it does not change the value of the said variable.

#include <stdio.h>

int change(int);

int change(int a){
    a=a * 10;
    printf("the new value at the function %d", a);
    return 0;
}

int main()
{
    int c=5;

    printf("the value at main variable %d\n",c);
    change(c);
    return 0;
}