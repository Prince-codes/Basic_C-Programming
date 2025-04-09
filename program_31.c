#include<stdio.h>
void main()
{
    int a=48,b=13;
    a+=b++*15/a++ +b;
    printf(" value=%d\n",a);
    printf(" value=%d\n",b);
    //printf("answer=%d\n",c);
}