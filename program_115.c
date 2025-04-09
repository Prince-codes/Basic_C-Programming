// Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.

# include <stdio.h>

struct vector{
    int x;
    int y;
}v1,v2;

int sumVector(struct vector v1, struct vector v2) 
{
    printf("Sum of both Vector is (%d, %d)\n", v1.x + v2.x, v1.y + v2.y);

    return 0;
}


int main(){
    printf("Enter the x and y coordinates of the first vector: ");
    scanf("%d %d", &v1.x, &v1.y);
    
    printf("Enter the x and y coordinates of the second vector: ");
    scanf("%d %d", &v2.x, &v2.y);

    sumVector(v1, v2);
    
    return 0;
}