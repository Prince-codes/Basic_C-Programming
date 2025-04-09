// program to calculate area of triangle

# include <stdio.h>
# include <math.h>

int main()
{
    float semp=0.0, area=0.0, s1,s2,s3;

    printf("Enter first side : ");
    scanf("%f",&s1);
    printf("\nEnter second side : ");
    scanf("%f",&s2);
    printf("\nEnter third side : ");
    scanf("%f",&s3);

    semp=(s1+s2+s3)/2;
    area= sqrt(semp*(semp-s1)*(semp-s2)*(semp-s3));

    printf("Area of the triangle : %f",area);

    return 0;
}