/* 15.Wap to display grade*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("enter marks out of 100: ");
    scanf("%d",&marks);
    if (marks>=80)    
       printf("Distinction");
    else if (marks<=80 && marks>=60)
       printf("First Division");
    else if (marks<=60 && marks>=45)
       printf("Second Division");
    else if (marks<=45 && marks>=40)
       printf("Pass");
    else 
       printf("Promotion Not Granted");
}
