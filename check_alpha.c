// Program to check alphabet

// "isalpha(<variable_name>)" : it is used to check wheather the character is alphabet or not

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

    else{
        printf("It is not alphabet");

    }
    return 0;
}