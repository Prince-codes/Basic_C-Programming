// average of 3 nos.

// no arguments    no return value
/*#include<stdio.h>

void avg();
void main()
{
    avg();
}
void avg()
{
    int a,b,c,aver;
    printf("enter 3 nos.");
    scanf("%d %d %d",&a,&b,&c);
    aver=a+b+c/3;
    printf("average of 3 nos. is  =  %d",aver);
}*/

// no arguments    return value
/*#include<stdio.h>

int avg();
void main()
{
    int av;
    av=avg();
    printf("average of 3 nos. is = %d",av);
}
int avg()
{
    int a,b,c,av;
    printf("enter 3 nos.");
    scanf("%d %d %d",&a,&b,&c);
    return((a+b+c)/3);
}*/

//  arguments   no return value
/*#include<stdio.h>

void avg(int,int,int);
void main()
{
    int a,b,c;
    printf("enter 3 nos.");
    scanf("%d %d %d",&a,&b,&c);
    avg(a,b,c);
}
void avg(int a, int b, int c)
{
    int av;
    av=(a+b+c)/3;
    printf("average of 3 nos. is = %d",av);
}*/

//  arguments  return value
/*#include<stdio.h>

int avg(int,int,int);
void main()
{
    int a,b,c,av;
    printf("enter 3 nos.");
    scanf("%d %d %d",&a,&b,&c);
    av=avg(a,b,c);
    printf("average of 3 nos. is = %d",av);
}
int avg(int a, int b, int c)
{
    return((a+b+c)/3);
}*/
