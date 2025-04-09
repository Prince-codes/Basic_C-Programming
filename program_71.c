#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,d,c;
    double x1,x2;
    printf("enter value a, b,c");
    scanf("%d %d %d",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Value of x1 is = %f",x1);
    printf("Value of x2 is = %f",x2);
}
