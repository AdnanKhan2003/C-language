// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: \n", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is: %.2f \n", i + 1, ptr[i]);
    }
    
    return 0;
}