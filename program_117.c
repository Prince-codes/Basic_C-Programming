// Write a program with a structure representing a complex number using ‘typedef’ keywords.

#include <stdio.h>

typedef struct complex{
    float real; // Real part
    float imag; // Imaginary part
}complex_no;

int main()
{
    complex_no c1, c2, sum;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}

