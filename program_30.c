#include<stdio.h>
#include<conio.h>
void main()
{
    int n1=4,n2=6,m=8,p;
    p=(m%n1!=0) ||  (m%n2!=0);
    /*while ((m%n1!=0) ||  (m%n2!=0))
        m++;*/
    printf("lcm %d",p);
}
