// WAP to check a no. is positive or negative.
 
// no arguments  no return value
/*#include<stdio.h>
#include<conio.h>
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
}*/

// no arguments   return value
/*#include<stdio.h>
#include<conio.h>
int check();
void main()
{
  int c;
  c=check();
  if (c==1)
   printf("positive no");
  else
    printf("negative no");
}
int check()
{
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   if (n>0)
   {
    return 1;
   }
   else
   {
    return -1;
   }
}*/

//  arguments  no return value
/*#include<stdio.h>
#include<conio.h>
void check(int);
void main()
{
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   check(n);  
}
void check(int n)
{
  if (n>0)
     printf("positive no");
   else
     printf("negative no");
}*/

//  arguments  return type
/*#include<stdio.h>
#include<conio.h>
int check(int);
void main()
{
  int n,c;
  printf("enter a no.");
  scanf("%d",&n);
  c=check(n);  
  if (c==1)
    printf("positive no");
  else
    printf("negative no");
}
int check(int n)
{
  if (n>0)
  {
   return 1;
  }
  else
  {
    return -1;
  }
}*/
