#include <stdio.h>

int main(){
    int i = 23;
    int *j = &i;

// 1. Addition of a number to a pointer:
  /*printf("The value of address of i is %d \n", j);
    j++;
    printf("The value of address of i is %d \n", j); */



// 2. Subtraction of a number to a pointer:
    printf("The value of address of i is %d \n", j);
    j--;
    printf("The value of address of i is %d \n", j);
    return 0;
}