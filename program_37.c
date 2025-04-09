/* 16. Wap to enter grade */
#include<stdio.h>
#include<conio.h>
void main()
{
    int maths,comp,eng,T;
    double avg;
    printf("enter marks out of 100 of 3 subject:");
    scanf("%d %d %d", &maths ,&comp ,&eng);
    T=maths+comp+eng;
    avg=T/3;
    if (avg>=60)    
       printf("First Division");
    else if (avg>=45 && avg<=60)
       printf("Second Division");
    else if (avg>=33 && avg<=45)
       printf("Third Division");
    else 
       printf("Fail");
}