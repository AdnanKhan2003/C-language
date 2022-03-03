// Q. 1 Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int *ptr, n = 8;    

    ptr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d \n", i + 1, ptr[i]);
    }
    
    return 0;
}