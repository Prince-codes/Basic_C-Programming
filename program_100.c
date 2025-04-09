// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

// Function to reverse the array
void count(int *arr) {
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            cnt++;
        }
    }
    printf("Number of positive integers: %d\n", cnt);
}

int main(){
    int arr[10];

    // Input array elements
    for (int i = 0; i < 10; i++) {
        printf("Enter Element: ");
        scanf("%d", &arr[i]);
    }

    // Count the number of positive integers
    count(arr);

    return 0;
}