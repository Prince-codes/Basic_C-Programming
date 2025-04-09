/* check no. is palindrome or not */
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r=1,s=0,d;
  printf("enter a no.");
  scanf("%d",&n);
  d=n;
  while(n!=0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if (s==d)
  printf("no. is palindrome ");
  else
  printf("NOT A PALINDROME NO.");
}
