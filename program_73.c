#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,s=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(pow(i,i));
    }
    printf("%d",s);
}