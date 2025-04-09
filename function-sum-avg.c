// wap  using a function which calculates the sum and average of two numbers. using pointers and print the value of sum and averege in main()

#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b)
{
    return *a + *b;
}

float avg(int*, int*);

float avg(int* a, int* b)
{
    return (*a + *b)/2;
}

int main()
{
    int a=9,b=10;
    int s=sum(&a,&b);
    float avrg= avg(&a,&b);

    printf("the sum of two no is %d",s);
    printf("the Average of two no is %.2f",avrg);
    return 0;
}