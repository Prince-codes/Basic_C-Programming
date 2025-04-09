// taking array input in one line seperated with spaces

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, sum = 0, s = 0;
    
    // Read the size of the array
    scanf("%d", &n);
    
    // Declare the array with the size n
    int arr[n];
    
    // Read the array elements
    do {
        // Take input at position and increment s (size)
        scanf("%d", &arr[s++]);
        
        // If '\n' (newline) has occurred or the whole array is filled, then it will exit the loop
    } while (getchar() != '\n' && s < n);
    
    // Calculate the sum of the array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Print the sum
    printf("%d", sum);
    
    return 0;
}