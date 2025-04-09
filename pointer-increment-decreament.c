

/* pointer arithmatic it says that we can increament or decreament or we can do various arithmatic operation.
for eg the value of pointer i.e. address of pointer it will increament or decreament on the basis of datatype
if int it will increament or decreament by 4 bytes like tak for all types of data types pointer */


#include <stdio.h>

int main(){
    int a=10;
    int* pt=&a;
    printf("value of pointer before increament %d\n",pt);
    pt++;
    printf("value of pointer after increament %d\n",pt);
    return 0;
}


