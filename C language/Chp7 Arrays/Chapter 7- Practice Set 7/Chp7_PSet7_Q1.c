// Q.1 Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.


#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;

    printf("The value of arr[0] is %d \n", ptr);
    ptr++;
    printf("The value of arr[0] is %d \n", ptr);
    return 0;
}