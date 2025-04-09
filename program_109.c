// Write a program to check whether a given character is present in a string or not.


#include <stdio.h>

int main()
{
    char str[100], ch;
    int flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            flag=1;
        }
    }
    if (flag==1)
        printf("The character '%c' is present in the string.\n", ch);

    else
        printf("The character '%c' is not present in the string.\n", ch);

    return 0;
}