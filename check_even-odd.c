// 6. WAP to enter any no. and check whether it is even or odd.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter no to check odd or even : ");
    scanf("%d",&n);

    if (n%2==0){
        printf("Even no");
    }

    else{
        printf("Odd");
    }
    return 0;

}
    