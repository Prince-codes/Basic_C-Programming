// Create a two-dimensional vector using structures in C.

#include <stdio.h>

struct vector{
    int x;
    int y;
}v;

int main(){
    printf("Enter the x and y coordinates of the vector: ");
    scanf("%d %d", &v.x, &v.y);

    printf("The vector is: (%d, %d)\n", v.x, v.y);
    return 0;
}
