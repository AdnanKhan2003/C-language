// Q. 5 Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int *ptr, n = 7;

    ptr = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d X %d = %d \n", n, i + 1, ptr[i]);
    }
        
    ptr = realloc(ptr, 15 * sizeof(int));
    printf("After reallocating... \n\n");
    for (int i = 0; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
        printf("%d X %d = %d \n", n, i + 1, ptr[i]);
    }

    return 0;
}