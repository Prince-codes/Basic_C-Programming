/*  No loop program 
9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 
9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9 
9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 
9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9 
9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 
9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9 
9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9
9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9
9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9
9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9
9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9
9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9
9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9
9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 
*/



#include <stdio.h>

int main() {
    int n; // Size of the pattern
    scanf("%d", &n);

    int size = 2 * n - 1; // Total size of the pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min;

            // Find the minimum distance to the edge
            if (i < j) {
                min = i;
            } else {
                min = j;
            }

            if (min > size - i - 1) {
                min = size - i - 1;
            }

            if (min > size - j - 1) {
                min = size - j - 1;
            }

            // Print the value
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}