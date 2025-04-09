//pattern

#include<stdio.h>
#include<conio.h>
void main()
{
  for (int i=2;i<10;i++)
  {
    for(int j=1;j<i;j++)
    {
        if (j%i!=0)
          printf("%d",j);
    }
    printf("\n");
  }
}

//wrong