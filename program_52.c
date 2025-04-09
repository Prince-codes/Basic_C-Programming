/* WAP to find the odd number up to 100 */
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1; i<=100 ; i++)
    {
        if (i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}
