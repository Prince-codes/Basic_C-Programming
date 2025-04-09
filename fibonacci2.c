/*print fibonacci series 0 1 1 2 3 5 8 13*/
#include<stdio.h>

void main()
{
    int n,a=0,b=1,c=0;
    printf("enter a no.");
    scanf("%d",&n);
    printf("%d \t",a);
    printf("%d \t",b);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d \t",c);
        a=b;
        b=c;
    }
}