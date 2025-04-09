/*Wap to check whether the student has passed or fail.
      avg>=60  1st
      avg>=45  2nd
      avg>=33  3rd
      avg< 33  fail   */

// no arguments    no return type
/*#include<stdio.h>
#include<conio.h>
void grade();
void main()
{
    grade();
}
void grade()
{
    int a,b,c,avg=0;
    printf("enter grade of three subject out of 100");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    if (avg>=60 && avg<=100 )
      printf("first division");
    else if (avg>=45 && avg<=60)
      printf("second division");
    else if (avg>=33 && avg<=45)
      printf("third division");
    else
      printf("fail");
}*/

// arguments   return type
/*#include<stdio.h>
#include<conio.h>
int grade(int,int,int);
void main()
{
    int avg,a,b,c;
    printf("enter grade of three subject out of 100");
    scanf("%d %d %d",&a,&b,&c);
    avg=grade(a,b,c);
    if (avg>=60 && avg<=100 )
      printf("first division");
    else if (avg>=45 && avg<=60)
      printf("second division");
    else if (avg>=33 && avg<=45)
      printf("third division");
    else
      printf("fail");
}
int grade(int a, int b, int c)
{
    return ((a+b+c)/3);
}*/

//  arguments  no return type
/*#include<stdio.h>
#include<conio.h>
void grade(int);
void main()
{
    int a,b,c,avg;
    printf("enter grade of three subject out of 100");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    grade(avg);
}
void grade(int avg)
{
    if (avg>=60 && avg<=100 )
      printf("first division");
    else if (avg>=45 && avg<=60)
      printf("second division");
    else if (avg>=33 && avg<=45)
      printf("third division");
    else
      printf("fail");
}*/

//  no arguments  return type
/*#include<stdio.h>
#include<conio.h>
int grade();
void main()
{
    int avg;
    avg=grade();
    if (avg>=60 && avg<=100 )
      printf("first division");
    else if (avg>=45 && avg<=60)
      printf("second division");
    else if (avg>=33 && avg<=45)
      printf("third division");
    else
      printf("fail");
}
int grade()
{
    int a,b,c;
    printf("enter grade of three subject out of 100");
    scanf("%d %d %d",&a,&b,&c);
    return ((a+b+c)/3);
}*/
