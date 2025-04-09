// WAP to check a no. is positive or negative.
 
// no arguments  no return value
#include<stdio.h>

void check();
void main()
{
   check();
}
void check()
{
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   if (n>0)
     printf("positive no");
   else
     printf("negative no");
}

