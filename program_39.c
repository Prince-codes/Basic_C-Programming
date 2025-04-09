/* 13.Wap to check character is digit or alphabet or special character*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter  character:");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
      printf("alphabet");
    else if (ch>='0' && ch<='9')
      printf("digit");
    else 
      printf("special character");
}
