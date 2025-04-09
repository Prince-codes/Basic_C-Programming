#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    double x,s;
    printf("enter side a, b,c");
    scanf("%d %d %d",&a,&b,&c);
    s=(pow(a,3)/2)+(pow(b,2)/2)+(c/2);
    x=sqrt(s);
    printf("value of x = %f",x);
}

