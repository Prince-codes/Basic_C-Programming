/* Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700 */

#include <stdio.h>
struct employee
{
    char name[40];
    int salary;
} e[2];

int main()
{
    FILE *pt;
    pt = fopen("employee.txt", "a");

    for (int i = 0; i < 2; i++)
    {
        printf("Enter name : ");
        scanf("%s", &e[i].name);

        printf("Enter salary : ");
        scanf("%d", &e[i].salary);

        fprintf(pt, "%d. %s %d\n", i+1, e[i].name,e[i].salary);
    }

    fclose(pt);
    printf("Data feeded Sucessfully");
    return 0;
}