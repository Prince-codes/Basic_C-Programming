// Create a 3x10 array to store the multiplication tables of 2, 7, and 9.

#include <stdio.h>

int main() {
    int arr[3][10];

    // Store the multiplication tables
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0) {
                arr[i][j] = 2 * (j + 1);
            } else if (i == 1) {
                arr[i][j] = 7 * (j + 1);
            } else {
                arr[i][j] = 9 * (j + 1);
            }
        }
    }

    // Print the multiplication tables
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}