//Find Area of triangle

#include<stdio.h>

#include<math.h>
void main()
{
    int a,b,p,c;
    double area,s;
    printf("enter side a, b,c");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    area=sqrt(p);
    printf("area of triangle=%f",area);
}
