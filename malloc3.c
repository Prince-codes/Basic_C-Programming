//This program allocates memory dynamically using calloc() function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    float *ptr;
    ptr = (float*) calloc(n, sizeof(float)); //It initializes each memory block with a default value of 0.

    ptr[0] = 12.55;
    ptr[1] = 22.564; 
    ptr[2] = 23.564;
    ptr[3] = 24.564;
    ptr[4] = 25.564;
    printf("The values are: \n");   
    for(int i=0; i<n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    free(ptr); //free() function to deallocate the memory.
    return 0;
}