/* WAP to print table */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    for(int i=1; i<=10 ; i++)
    {
       printf("%d \n",n*i);
    }
}
