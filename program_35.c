//WAP to add two nos.

// no arguments    no return value
/*#include<stdio.h>
#include<conio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("answer= %d",c);
}*/







//  arguments    no return value
/*#include<stdio.h>
#include<conio.h>
void add(int a,int b);
void main()
{
    int a,b;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int a , int b)
{
    int c;
    c=a+b;
    printf("answer= %d",c);
}*/






//  no arguments   return value
/*#include<stdio.h>
#include<conio.h>
int add();
void main()
{
    int c;
    c=add();
    printf("answer= %d",c);  
}
int add()
{
    int a,b;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    return(a+b);
}*/




//  arguments   return value
/*#include<stdio.h>
#include<conio.h>
int add(int , int);
void main()
{
    int a,b,c;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    c=add(a,b); 
    printf("answer= %d",c);
}
int add(int x , int y)
{
     return(x+y);
}*/