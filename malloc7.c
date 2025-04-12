// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).

# include <stdio.h>
# include <stdlib.h>

int table(int *ptr, int size)
{
    for (int i = 1; i <= size; i++)
    {
        ptr[i] = 7 * i;
    }
    
    printf("\n");

    // printing tha array

    for (int i = 1; i <= size; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}

int main()
{
    int n=10;
    int *ptr= (int*) malloc(n * sizeof(int)); // allocating memory for 10 integers

    table(ptr, n); 

    n=15;
    ptr=realloc(ptr,n*sizeof(int)); // reallocating memory for 15 integers
    table(ptr, n); 

    free(ptr); // freeing the allocated memory

    return 0;
}