/*print factorial of a no.*/
#include<stdio.h>

void main()
{
    int n,f=1;
    printf("enter a no.");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("FACTORIAL OF A NO. %d if is %d",n,f);
}

