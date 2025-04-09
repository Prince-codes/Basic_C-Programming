// 11. WAP to enter age and check eligible for vote or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("enter  age :");
    scanf("%d",&age);
    if (age>=18)
       printf("eligible for vote");
    else 
       printf("not eligible for vote \n ");
       printf("years have  wait = %d",18-age);
}

