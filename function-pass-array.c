// How to pass an array into the function
// we can pass the array into the function by using pointer

// 2=d array
// wap to create a 2d array by taking input from user, write a display function to print the content of this array
#include <stdio.h>

int arrprint(int*);

int arrprint(int* a){
    for(int i=0; i<2;i++)
    {
        printf("Element at arr[%d] is %d\n",i,*a++);
    }
    return 0;
}

int main()
{
    int arr[2][2];
    int* pt=&arr[0][0];
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter ellement : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing elements using pointer\n");
    arrprint(pt);

}