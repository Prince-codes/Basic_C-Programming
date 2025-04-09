// program to print average of 3 number

# include <stdio.h>

int main()
{
    int a1,a2,a3;
    double avg;
    printf("Enter first no. : ");
    scanf("%d",&a1);
    printf("Enter secound no. : ");
    scanf("%d",&a2);
    printf("Enter third no. : ");
    scanf("%d",&a3);

    avg=(a1+a2+a3)/3;
    printf("The Average of Three number : %f",avg);

    return 0;

}