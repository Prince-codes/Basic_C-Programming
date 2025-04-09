// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.


# include <stdio.h>

int main()
{
    int arr[10];
    int* ptr=&arr[0];

    for(int i=0; i<10; i++)
    {
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
    }

    if (ptr+=2 == arr[2])
    {
        printf("This verify that the Element tracked by pointer is same as the third element of array!");
    }
    else{
        printf("Not same");
    }
    return 0;
}