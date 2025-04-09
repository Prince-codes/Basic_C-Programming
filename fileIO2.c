// reading whole file by using loop

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr= fopen("prince2.txt","r");
    while (1)
    {
        ch= fgetc(ptr);
        printf("%c",ch);
         // when all the content od a file has been read break
         if(ch== EOF)
         {
            break;
         }

    }
    return 0;
}