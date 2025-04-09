//  1,10,2,9,3,8,4,7,....10,1.

// no arguments no return type
/*#include<stdio.h>

void series();
void main()
{
    series();
}
void series()
{
   int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",i+1);
        printf("%d ",10-i);
    }
}*/

// arguments  return type
/*#include<stdio.h>

void series(int);
void main()
{
    for (i=0;i<10;i++)
    {
        s=series(i);
        printf("%d ",i+1);.....................
        printf("%d ",10-i);
    }
    
}
void series(int i)
{
   return i;
}*/

// arguments  no return type
/*#include<stdio.h>

void series(int);
void main()
{
    int i;
    series(i);
}
void series(int i)
{
    for (i=0;i<10;i++)
    {
        printf("%d ",i+1);
        printf("%d ",10-i);
    }
}*/

//  no arguments return type 


