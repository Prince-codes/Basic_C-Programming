/* check no. is perfect or not */
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0,r;
  printf("enter a no.");
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    r=n%i;
    if(r==0)
    {
        sum=sum+i;
    }
  }
  if (sum==n)
  {
  printf("PERFECT NO.");
  }
  else
  {
  printf("NOT A PERFECT NO.");
  }
}


