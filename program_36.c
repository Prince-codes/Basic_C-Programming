// // check no. is armstrong or not.

#include <stdio.h>

int arm(int x);

int arm(int x)
{
  int n = 0, temp = x, temp2 = x, d, sum = 0;
  while (temp != 0)
  {
    n = n + 1;
    temp = temp / 10;
  }

  while (temp2 != 0)
  {
    d = temp2 % 10;
    sum += (d * d * d);

    temp2 /= 10;
  }

  if (x == sum)
  {
    printf("ARMSTRONG NO.");
  }
  else
  {
    printf("NOT A ARMSTRONG NO.");
  }
  return 0;
}

int main()
{
  int x;
  printf("Enter your Number : ");
  scanf("%d", &x);
  arm(x);
  return 0;
}