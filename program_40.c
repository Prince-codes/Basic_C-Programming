// 5. WAP to enter any no. and check whether it is even or odd , if it is odd then check it is divisible by 7 or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter  a no:");
    scanf("%d",&n);
    if (n%2==0)
     printf("no. is even");
    else 
       printf("no. is odd \n");
       if (n%7==0)
       printf("divisible by 7");
       else 
       printf("but not divisible by 7");
}
