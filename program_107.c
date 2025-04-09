// Write a program to decrypt the string encrypted using encrypt function in problem 106.

#include <stdio.h>

void encrypt_string(char *str)
{
    while (*str != '\0')
    {
        *str += 1; // Increment ASCII value by 1
        str++;
    }
}
void decrypt_string(char *str)
{
    while (*str != '\0')
    {
        *str -= 1; // Decrement ASCII value by 1
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

    decrypt_string(str);
    printf("Decrypted string: %s\n", str);

    return 0;
}