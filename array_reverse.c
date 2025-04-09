// reversing array

#include <stdio.h>


int main()
{
    int num, *arr, i;
    
    // Read the number of elements
    scanf("%d", &num);
    
    // Allocate memory for the array
    arr = (int*) malloc(num * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Read the array elements
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    // Reverse the array
    for (i = 0; i < num / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    // Print the reversed array
    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(arr);
    
    return 0;
}