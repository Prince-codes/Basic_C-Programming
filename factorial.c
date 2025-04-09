/*print factorial of a no.*/

// without arguments  without return type'
/*#include<stdio.h>

void fact();
void main()
{
    fact();
}
void fact()
{
    int n,f=1;
    printf("enter a no.");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("FACTORIAL OF A NO. %d",f);
}*/

//  arguments  return type
#include<stdio.h>

int fact(int);
void main()
{
    int n,p;
    printf("enter a no.");
    scanf("%d",&n);
    p=fact(n);
    printf("FACTORIAL OF A NO. %d",p);
}
int fact(int n)
{
    int f=1;
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return (f);
}
