//  2  3  5   8    13   

//  no arguments  no return value
/*#include<stdio.h>
#include<conio.h>
void pattern();
void main()
{
    pattern();
}
void pattern()
{
    int n,a=2,b=3,c=0;
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
}*/

//  arguments  no return value
#include<stdio.h>
#include<conio.h>
void patt(int,int,int,int);
void main()
{
    int n,a=2,b=3,c=0;
    printf("enter a no.");
    scanf("%d",&n);
    printf("%d \t",a);
    printf("%d \t",b);
    patt(n,a,b,c);
}
void patt(int n,int a,int b,int c)
{
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d \t",c);
        a=b;
        b=c;
    }
}

//   without arguments  and  return value
/*#include<stdio.h>
#include<conio.h>
int pattern();
void main()
{
    int p=0;
    p=pattern();
    printf("%d \t",p);
}
int pattern()..................................
{
    int i=1,n,a=2,b=3,c=0;
    printf("enter a no.");
    scanf("%d",&n);
    printf("%d \t",a);
    printf("%d \t",b);
    while (i<=n)
    {
    c=a+b;
    return c;
    a=b;
    b=c;
    i++;
    }
}*/

