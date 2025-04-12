// Write a program to create a dynamic array of 5 floats using malloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=5;
    float *ptr;
    ptr = (float*) malloc(n* sizeof(float));

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
    free(ptr); // free() function to deallocate the memory.
    return 0;
}