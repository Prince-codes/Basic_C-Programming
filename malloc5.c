//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, newsize;
    float *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n); //User input for the size of the array.

    ptr = (float*) calloc(n, sizeof(float)); //It initializes each memory block with a default value of 0.

    printf("The values are: \n");   
    for(int i=0; i<n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }


    printf("Enter the new size of the array: ");
    scanf("%d", &newsize); //User input for the new size of the array.
    ptr = realloc (ptr, newsize); //realloc() function to resize the memory block.

    printf("The values are: \n");   
    for(int i=0; i<newsize; i++)
    {
        printf("%.2f\n", ptr[i]);
    }

    // Note: The values in the new memory block are not initialized to 0.
    // They may contain garbage values if the new size is larger than the old size.

    free(ptr); //free() function to deallocate the memory.
    return 0;
}