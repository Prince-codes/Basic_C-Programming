#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,sq=0,s=0,x;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for (int i=1;i<=n;i++)
    {
        sq=sqrt(pow(x,i));
        s=s+(1/sq);
    }
    printf("%d",s);
}