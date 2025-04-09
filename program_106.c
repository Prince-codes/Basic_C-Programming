// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>

void encrypt_string(char *str)
{
    while (*str != '\0')
    {
        *str += 1; // Increment ASCII value by 1
        str++;
    }
}


int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    encrypt_string(str);
    printf("Encrypted string: %s\n", str);

    return 0;
}