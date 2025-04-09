// Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date d1, struct Date d2) {
    if (d1.year < d2.year) return -1;
    if (d1.year > d2.year) return 1;

    if (d1.month < d2.month) return -1;
    if (d1.month > d2.month) return 1;

    if (d1.day < d2.day) return -1;
    if (d1.day > d2.day) return 1;

    return 0; // Dates are the same
}

int main() {
    struct Date d1, d2;

    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    int result = compareDates(d1, d2);
    if (result == -1) {
        printf("The first date is earlier.\n");
    } else if (result == 1) {
        printf("The first date is later.\n");
    } else {
        printf("Both dates are the same.\n");
    }

    return 0;
}