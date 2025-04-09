// calculation perimeter of rectangle


// including header file

# include <stdio.h>

int main()
{
    int len,width; 
    double perimeter=0.0; // initializing variable

    printf("Enter Length : "); // takin input in variables
    scanf("%d",&len);

    printf("Enter Width : ");
    scanf("%d",&width);

    perimeter = 2*(len+width); // calculating perimeter

    printf("Perimeter of Rectangle : %f",perimeter); // printing perimeter

    return 0;

}