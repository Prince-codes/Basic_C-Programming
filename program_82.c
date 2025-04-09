// Program of Call by value in function

#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a+b;
}

int main()
{
    int x=2,y=4;
    printf("The Sum is %d",sum(x,y));
    return 0;
}
