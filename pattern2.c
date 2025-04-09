//Pattern program
/*
    *
   **
  ***
 ****
*****

*/






# include <stdio.h>
int count=0;
int main ()
{
    for (int i=4; i>=0; i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf(" ");
        }
        count+=1;
        for (int k=1;k<=count;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}