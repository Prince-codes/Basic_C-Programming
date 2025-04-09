// Write your own version of strcpy function from <string.h>

#include <stdio.h>

void copy (char *dest, const char *src)
{
    // Move the destination pointer to the end of the existing content
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;  // Copy the character from source to destination
        dest++;        // Move to the next character in destination
        src++;         // Move to the next character in source
    }
    *dest = '\0';      // Null-terminate the destination string
}

int main()
{
    char s1[100],s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    copy(s1, s2);
    printf("After copying, first string: %s\n", s1);
    return 0;
}