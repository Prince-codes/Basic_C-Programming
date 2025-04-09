/* If S is a 1-D array of integers, then *(S+3) refers to the fourth element (index 3) of the array:
(i) True.
(ii) False.
(iii) Depends. 
*/

#include <stdio.h>

int main(){
    int arr[3]={1,3,5};
    int* pt=&arr[0];

    printf("%d", *(pt + 2)); 
    printf("\n%d", arr[2]); 
    
    return 0;
}