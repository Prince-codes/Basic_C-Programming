// Write a program to create an array of size n using calloc where n is an integer entered by the user.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n); //User input for the size of the array.

    ptr = (float*) calloc(n, sizeof(float)); //It initializes each memory block with a default value of 0.

    printf("The values are: \n");   
    for(int i=0; i<n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    free(ptr); //free() function to deallocate the memory.
    return 0;
}