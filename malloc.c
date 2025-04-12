// DYNAMIC  MEMORY ALLOCATION program
// This program allocates memory dynamically using malloc() function
// and stores 5 integer values in it. It then prints the values and frees the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int *ptr;
    ptr = (int*) malloc(n* sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2; 
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    printf("The values are: \n");   
    for(int i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr); //free() function to deallocate the memory.
    return 0;
}