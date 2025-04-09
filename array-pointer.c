// we can track the various elements in the array through the pointer lets see an example

#include <stdio.h>

int main(){
    int arr[5]={1,3,5,7,9};
    int* pt=&arr[0];
    
    for(int i=0; i<5;i++)
    {
        printf("Element at arr[%d] is %d\n",i,*pt++);
    }
    return 0;
}

