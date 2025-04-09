// Create an array of 5 complex numbers and display them  with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>

typedef struct complex{
    float real; // Real part
    float imag; // Imaginary part
}complex_no;

int main()
{
    complex_no c[5]; // Array of 5 complex numbers
    int i;

    // Input complex numbers from user
    for(i = 0; i < 5; i++){
        printf("Enter real and imaginary parts of complex number %d: ", i + 1);
        scanf("%f %f", &c[i].real, &c[i].imag);
    }

    // Display complex numbers
    printf("\nThe complex numbers are:\n");
    for(i = 0; i < 5; i++){
        printf("Complex number %d: %.2f + %.2fi\n", i + 1, c[i].real, c[i].imag);
    }

    return 0;
}