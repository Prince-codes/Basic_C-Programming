#include <stdio.h>
#include <math.h>

int main() {
    int number, x, temp1, temp2;
    int power = 0; 
    double sum = 0.0;

    printf("Enter your no. : ");
    scanf("%d", &number);

    temp1 = number;
    while (temp1) {
        power += 1;
        temp1 = temp1 / 10;
    }

    temp2 = number;
    while (temp2) {
        x = temp2 % 10;
        sum = sum + pow(x, power);
        temp2 = temp2 / 10;
    }

    if (number == (int)sum) {
        printf("\n It is an Armstrong number");
    } 
    
    else {
        printf("\n It is not an armstrong number");
    }

    return 0;
}
