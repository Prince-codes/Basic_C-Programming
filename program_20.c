// Program to sorting the Array in ascending order
#include <stdio.h>

int main() 
{
    int a[5],temp;
    
    for(int i=0;i<5;i++)
    {
        printf("Enter : ");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++)
    {
         for(int j=0;j<5;j++)
         {
             if (a[i]<a[j])  // You can use ">" to arrange in decending order
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
    }
    
    for(int i=0;i<5;i++)
        {
            printf("%d \t", a[i]);
        }
        

        return 0;
}