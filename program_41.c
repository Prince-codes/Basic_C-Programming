/* 12.Wap to check  divisible by 5 or 2*/
#include <stdio.h>
#include <conio.h>
void main()
{
  int n;
  printf("enter  a no:");
  scanf("%d", &n);
  if ((n % 2 == 0) || (n % 5 == 0))
  {
    if ((n % 2 == 0) || (n % 5 != 0))
      printf("divisible by 2 not 5");
    else if ((n % 5 == 0) || (n % 2 != 0))
      printf("divisible by 5 not 2");
  }
  else
    printf("not divisible by 2 or 5");
}
