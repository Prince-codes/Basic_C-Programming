#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,d,c;
    double x,y;
    printf("enter side a, b,c");
    scanf("%d %d %d",&a,&b,&c);
    x=sqrt((pow(a,2)+pow(b,2)+pow(c,2))*(a+b+c));
    y=sqrt((pow(a,3)+pow(b,3))/(pow(a,2)+pow(b,2)));
    printf("Value of x1 is = %f",x);
    printf("Value of x2 is = %f",y);
}
