//Program to check character i.e. upper, lower

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your Character : ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z' ){
        printf("Upper");
    }

    else if (ch>='a' && ch<='z'){
        printf("Lower");
    }

    else{
        printf("Somthing mistake");
    }
    return 0;
}
