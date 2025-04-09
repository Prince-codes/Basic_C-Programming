// Various loop Program to print 0-10 value

# include <stdio.h>

int main()
{
    // For Loop
    for (int i = 0; i <= 10; i++)
    {
        printf("%d \n",i);
    }

    printf("\n");

    // While loop
    int j=0;
    while (j<=10){
        printf("%d \n",j);
        j++;
    }

    printf("\n");

    // Do-While loop
    int k=0;
    do
    {
       printf("%d \n",k);
       k++;
    } while (k<=10);


    return 0;
}