// wap having a variable 'i' . Print the address of i. pass this variable to a function and print its address same?Why?

#include <stdio.h>

int address(int);
int address(int a){
    int* b=&a;
    printf("address of a is %u",b);
    return 0;
}

int main ()
{
    int a =5;
    printf("address of a in main terminal is %u\n",&a);
    address(a);
    return 0;
}


// after the execution of the program we conclude that the address of the same value in main terminal and function are different.
// because when we pass the argument to the function it inserts the copy of original one. 