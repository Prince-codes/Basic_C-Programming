//  1 to n sum.

// no arguments no return type
/*#include<stdio.h>

void sum();
void main()
{
    sum();
}
void sum()
{
    int i,s=0,n;
    printf("enter n ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum of series = %d",s);
}*/

//  arguments  return type
/*#include<stdio.h>

int sum(int);
void main()
{
    int p,n;
    printf("enter n ");
    scanf("%d",&n);
    p=sum(n);
    printf("sum of series = %d",p);
}
int sum(int n)
{
    int s=0;
    for (int i=1;i<=n;i++)
    {
        s=s+i;
    }
    return(s); 
}*/

//  no arguments return type
/*#include<stdio.h>

int sum();
void main()
{
    int p;
    p=sum();
    printf("sum of series = %d",p);
}
int sum()
{
    int n,s=0;
    printf("enter n ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        s=s+i;
    }
    return(s); 
}*/

//  arguments  no return type
/*#include<stdio.h>

void sum(int);
void main()
{
    int n,s=0;
    printf("enter n ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        s=s+i;
    }
    sum(s);
}
void sum(int s)
{
    printf("sum of series = %d",s);
}*/