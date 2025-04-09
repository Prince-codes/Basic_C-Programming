// Write your own version of strlen function from <string.h>

#include <stdio.h>
#include <string.h>     

int my_strlen(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read user input including spaces
    
    int length = my_strlen(str);
    printf("Length of the string '%s' is: %d\n", str, length);
    return 0;
}