//Program of Call by reference in function

#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b){
    *a=6;            // it changes the value from inside the function using pointer. the value couldn't change without using pointer in function. 
    return *a + *b;
}

int main()
{
    int x=2,y=4;

    printf("The Sum is %d\n",sum(&x,&y));
    printf("new x is %d\n",x);
    return 0;
}