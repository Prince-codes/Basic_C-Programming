// Program to make piramid
/*

    *
   * *
  * * *
 * * * *
* * * * *

*/ 

# include <stdio.h>

int main()
{
    int size;
    printf("Enter Size of Piramid : ");
    scanf("%d",&size);

    for (int i=1; i<=size;i++)
    {
        for (int j=size; j>=1;j--)
        {
            if (i>=j)
            {
                printf("* ");
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}