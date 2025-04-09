/* WAP to find the sum of odd and even no. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int e=0,odd=0,n;
    printf("enter  a no:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            e=e+i;
        }
        else if (i%2!=0) 
        {
            odd=odd+i;
        }
    }
    printf("Sum of even number %d \n",e);
    printf("Sum of odd number %d ",odd);
}
