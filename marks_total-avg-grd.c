// 7. WAP to enter marks of 4 subject .calculate total and average assign grade total>=200, grade is  A otherwise grade is  B.
#include<stdio.h>

void main()
{
    int maths,comp,eng,hindi,T;
    double total;
    printf("enter marks out of 100:");
    scanf("%d %d %d %d", &maths ,&comp ,&eng , &hindi);
    T=maths+comp+eng+hindi;
    total=T/4;
    if (total>=200)
      printf("Grade is A %f",total);
    else 
      printf("Grade is B %f",total);
}
