// Swamping two variable using pointer and function

# include <stdio.h>

int swap (int*,int*);

int swap(int* a, int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main()
{
    int a=5,b=6;
    swap(&a,&b);
    printf("new a is %d", a);
    printf("new b is %d", b);
    return 0;
}