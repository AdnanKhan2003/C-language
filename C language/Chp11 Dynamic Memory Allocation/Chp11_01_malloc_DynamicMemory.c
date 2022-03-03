#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int));

    // Sizeof Operator:
    // printf("The size of int is: %d \n", sizeof(int));
    // printf("The size of char is: %d \n", sizeof(char));
    // printf("The size of float is: %d \n", sizeof(float));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d \n", i+1, ptr[i]);
    }
    
    return 0;
}