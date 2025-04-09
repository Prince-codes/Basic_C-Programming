// program to check the given character is digit or not

# include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if (isdigit(ch))
    {
        printf("the entered character is digit");
    }

    else{
        printf("the entered character is not digit");
    }
    return 0;
}