// ARRAY OF STRUCTURES

# include <stdio.h>

struct employee
{
    int code;
    char name[30];
    int salary;
} arr[3];

int main()
{
    for (int i=0;i<3;i++)
    {
        printf("Enter data for employee %d \n: ",i+1);
        printf("Enter code : "); scanf("%d",&arr[i].code);
        printf("Enter Salary : "); scanf("%d",&arr[i].salary);
        printf("Enter name : "); scanf("%s",&arr[i].name);
    }

    for (int i=0;i<3;i++)
    {
        printf("\nEntered data for employee %d : ", i+1);
        printf("\t%d",arr[i].code);
        printf("\t%d",arr[i].salary);
        printf("\t%s\n",arr[i].name);
    }
    return 0;
}
