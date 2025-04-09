// WAP to print no 1 to n.

// no arguments  no return type
/*#include<stdio.h>
#include<conio.h>
void num();
void main()
{ 
    num();
}
void num()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%d \n",i);
    }
}*/

// arguments   return type
/*#include<stdio.h>
#include<conio.h>
int num(int);
void main()
{ 
    int n,t=0;
    printf("enter n");
    scanf("%d",&n);
    t=num(n);
    printf("number=%d",t);
}
int num(int n)..........................................................
{
    for (int i=1;i<=n;i++)
    {
        return(i);
    }
}*/

//  no arguments  return type
/*#include<stdio.h>
#include<conio.h>
int num();
void main()
{ 
    int t=0;
    t=num();
    printf("number=%d",t);
}
int num()
{
    int n;.................................
    printf("enter n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        return(i);
    }
}*/

//  arguments   no return type
/*#include<stdio.h>
#include<conio.h>
void num(int);
void main()
{ 
    int n;
    printf("enter n");
    scanf("%d",&n);
    num(n);
}
void num(int n)
{
    for (int i=1;i<=n;i++)
    {
        printf("%d \n",i);
    }
}*/

