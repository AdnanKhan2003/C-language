// Q.5 Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.

#include <stdio.h>

int main(){
    int i =234;
    int *ptr = &i;
    int **ptrPtr = &ptr;

    printf("The value of i is %d \n", **ptrPtr);
    return 0;
}