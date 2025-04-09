// write a function and paas the value by reference,(value by reference means passing pointers as argument in function)

#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b)
{
    return *a + *b;
}


int main(){
    int a=5,b=7;
    int c= sum(&a,&b);
    printf("sum is the %d", c);
    return 0;

}

