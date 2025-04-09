/* reverse no. */
#include<stdio.h>

void main()
{
  int n,r=1,s=0;
  printf("enter a no.");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  printf("REVERSE NO. %d",s);
}
