// 1. WAP to enter 2 no. and display the greatest no.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d %d",&a,&b);
    if (a>b) 
      printf(" a is greatest no %d",a);
    else 
      printf("b is grestest no %d",b);
    getch();
}
