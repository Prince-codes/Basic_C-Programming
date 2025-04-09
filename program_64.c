// 2. WAP to enter 3 no. and display the smallest no.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three no:");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b && a<c)
      printf(" a is smallest no %d",a);
    else if (b<c)
      printf("b is smallest no %d",b);
    else 
       printf("c is smallest no %d",c);
    getch();
}