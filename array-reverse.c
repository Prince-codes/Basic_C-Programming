// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

// Function to reverse the array
void rev(int *arr, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[10];
    int size = 10;

    // Input array elements
    for (int i = 0; i < size; i++) {
        printf("Enter Element: ");
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    rev(arr, size);

    // Print the reversed array
    printf("After reverse: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}