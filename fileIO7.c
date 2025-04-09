// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("prince.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("prince.txt", "w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}