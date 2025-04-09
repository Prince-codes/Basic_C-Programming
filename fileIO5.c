// Write a program to read a text file character by character and write its content twice in separate file


#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr, *ptr2;
    ptr= fopen("prince2.txt","r");
    ptr2= fopen("copied.txt", "a");
    while (1)
    {
        ch= fgetc(ptr);
        printf("%c",ch);

        fputc(ch, ptr2); 
         // when all the content od a file has been read break
         if(ch== EOF)
         {
            break;
         }

    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}