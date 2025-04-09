// Write a program to read three integers from a file

#include <stdio.h>

int main()
{
    int n;
    FILE *pt;
    pt = fopen("prince.txt", "r");

    fscanf(pt, "%d", &n);
    printf("%d\n", n);

    fscanf(pt, "%d", &n);
    printf("%d\n", n);

    fscanf(pt, "%d", &n);
    printf("%d\n", n);

    return 0;
}