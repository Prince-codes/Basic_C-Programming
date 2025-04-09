#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,sum=0;
    printf("enter n");
    scanf("%d",&n);       
    for (int i=1;i<=n;i++)
    {
       sum=sum*i;
       s=s+(i/sum);
    }
    printf("%d",s);
}