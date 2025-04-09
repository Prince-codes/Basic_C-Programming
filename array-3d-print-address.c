// Create a three–dimensional array and print the address of its elements in increasing order.

#include <stdio.h>

int main() {
    int arr[3][3][3];

    // Print the address of each element
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Address of arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}