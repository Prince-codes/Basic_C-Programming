// Program to check alphabet, digit, special character.

# include <stdio.h>

int main()
{
    char ch;

    printf("Enter your character : ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        printf("it is aplphabet");
    }
    else if(isdigit(ch))
    {
        printf("it is digit");
    }


    else{
        printf("It is Special chatracter");

    }
    return 0;
}