/* 9. Wap to accept the marks obtained in 5 subject and hence find the sum and average ,
if the average is 40% or more than than display "Promotion granted" otherwise "promotion not granted".
subject is of 100 marks.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int math, eng , comp , phy , chem , sum , average;
    printf("enter  marks of 5 subject:");
    scanf("%d %d %d %d %d",&math,&eng,&comp,&phy,&chem);
    sum = math+phy+eng+comp+chem;
    average=sum/5;
    if (average>=40)
     printf("promotion granted");
    else 
      printf("promotion not granted");
}
