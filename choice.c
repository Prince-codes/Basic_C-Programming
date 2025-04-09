/* 1+2+3+4+5+.......+n 
   1+2+3+4+5+.......+n(square of all)
   s=ut+1/2at(square)*/
#include<stdio.h>

#include<math.h>
void main()
{
    int cho;
    printf("1.1+2+3+4+5+.......+n \n");
    printf("2.1+2+3+4+5+.......+n(square of all) \n");
    printf("3.s=ut+1/2at(square) \n");
    printf("enter your choice \n");
    scanf("%d",&cho);
    switch(cho)
    {
    case 1:
    {
    int n,s=0;
    printf("enter a no.");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
      s=i+s;
    }
    printf("%d",s);  
    }
    break;
    case 2:
    {
      int n,s=0;
    printf("enter a no.");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
      s=pow(i,2)+s;
    }
    printf("%d",s);  
    }
    break;
    case 3:
    {
      int s=0,u,t,a;
      printf("enter u,a,t ");
      scanf("%d %d %d",&u,&a,&t);
      s=u*t+0.5*a*pow(t,2);
      printf(" VALUE OS S = %d",s);
    }
    break;
    default:
      printf("WRONG CHOICE");
    }
}  
  














