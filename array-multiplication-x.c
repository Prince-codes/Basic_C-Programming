// Write a program to create an array of 10 integers and store multiplication table for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int n, i;
    int arr[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}