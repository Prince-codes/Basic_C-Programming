// 4. WAP to enter any no. and check whether its square is even or odd.
#include<stdio.h>

void main()
{
    int n, sq;
    printf("enter  a no:");
    scanf("%d",&n);
    sq=n*n;
    if (sq%2==0)
      printf("no. is even %d",sq);
    else 
      printf("no. is odd %d",sq);
}
