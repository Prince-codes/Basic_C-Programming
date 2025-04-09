//Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.


# include <stdio.h>

int main()
{
    int n;
    FILE *pt;
    pt= fopen("table.txt","a");
    printf("Enter the number for table generation : ");
    scanf("%d",&n);
    for(int i=1;i<=10; i++){
        fprintf(pt, "%d X %d = %d\n",n,i,n*i);
    }
    fclose(pt);
    printf("Data feeded Sucessfully");
    return 0;

}