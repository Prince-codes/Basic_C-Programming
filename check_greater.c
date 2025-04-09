// greater or smaller

# include <stdio.h>

int main()
{
    int a1,a2;

    printf("Enter first number : ");
    scanf("%d",&a1);
    printf("Enter second number : ");
    scanf("%d",&a2);

    if (a1>a2)
    {
        printf("first number is greater");

    }

    else{
        printf("second number is greater");
    }

    return 0 ;
}