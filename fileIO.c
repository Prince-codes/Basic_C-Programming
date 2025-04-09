/*
"r"   -> open for reading  
"rb"  -> open for reading in binary  
"w"   -> open for writing // If the file exists, the contents will be 
overwritten 
"wb"  -> open for writing in binary 
"a"   -> open for append // If the file does not exist, it will be created 
*/


/*
// file opened in read mode

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("prince.txt", "r");
    if (ptr == NULL)
    {
        printf("File Doesn't Exist");
    }

    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d", num);
        fclose(ptr);
    }

    return 0;
}
*/

/*
// file opened in write mode
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("prince.txt", "w");
    if (ptr == NULL)
    {
        printf("File Doesn't Exist");
    }

    else
    {

        int num = 432;
        fprintf(ptr, "%d", num);

        fclose(ptr);
    }

    return 0;
}
*/


/*
file opened in append mode

# include <stdio.h>

int main()
{
    FILE *ptr;
    ptr= fopen("prince2.txt","a");
    // fgetc(ptr);         // used to read a character from file in read mode
    fputc('c',ptr);
    fclose(ptr);
    return 0;
}
*/


/*
reading file
# include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr= fopen("prince2.txt","r");
    ch=fgetc(ptr);         // used to read a character from file in read mode
    printf("%c",ch);
    fclose(ptr);
    return 0;
}
*/