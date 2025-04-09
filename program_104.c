// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>  
#include <string.h>

void slice(char *str, int m, int n) {
    int len = strlen(str);
    if (m < 0 || n >= len || m > n) {
        printf("Invalid slice range\n");
        return;
    }
    for (int i = m; i <= n; i++) {
        str[i - m] = str[i];
    }
    str[n - m + 1] = '\0'; // Null-terminate the sliced string
}

int main() {
    char str[100];
    int m, n;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter start and end positions for slice (m n): ");
    scanf("%d %d", &m, &n);

    slice(str, m, n);
    
    printf("Sliced string: %s\n", str);
    
    return 0;
}