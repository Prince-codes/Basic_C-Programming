// Write a program to dynamically create an array of size 6 and sorting 6 integers.


#include <stdio.h>
#include <stdlib.h>

// function to sort the array in ascending order and print the sorted array
int sort(int *ptr, int n);

int sort(int*ptr, int n){
    int temp;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
             if (ptr[i]<ptr[j])  // You can use ">" to arrange in decending order
             {
                 temp=ptr[i];
                 ptr[i]=ptr[j];
                 ptr[j]=temp;
             }
         }
    }
    
    for(int i=0;i<n;i++)
        {
            printf("%d \t", ptr[i]);
        }
    return 0;
}

int main()
{
    int n=6;
    int *ptr;
    ptr = (int*) malloc(n* sizeof(int));
   
    // takin input from user
    for(int i=0; i<n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d", &ptr[i]); 
    }
    sort(ptr, n);

    free(ptr); //free() function to deallocate the memory.
    return 0;
}