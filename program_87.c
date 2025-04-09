// Wap to change the value of a variable to ten times of its current value ( using Function and pointer)

#include <stdio.h>

int change(int*);

int change(int* a){
    *a=*a * 10;
    return *a;
}

int main()
{
    int c=5;
    int *j=&c;

    change(j);
    printf("after change %d",c);
    return 0;

}