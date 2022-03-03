// Quick Quiz: Write a program to create an array of size n using calloc() where n is an integer entered by the user.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int *ptr, n;
    printf("Enter the size you want: \n");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));

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