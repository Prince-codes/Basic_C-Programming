# include <stdio.h>

int main()
{
    int x;
    printf("Enter your no.");
    scanf("%d",&x);

    if (x>0)
    {
        printf("this input is prime no");

    }
    else{
        printf("This input is not prime no ");
    }

    return 0;
}