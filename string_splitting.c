//  String line splitting

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read a line of input from the user
    scanf("%[^\n]", s);

    // Reallocate memory to fit the actual length of the input string
    s = realloc(s, strlen(s) + 1);
    if (s == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Split the string into tokens separated by spaces
    char *token = strtok(s, " ");

    // Print each token on a new line
    while (token != NULL) {
        printf("%s\n", token); // Corrected the format specifier
        token = strtok(NULL, " ");
    }

    // Free the allocated memory
    free(s);

    return 0;
}