#include <stdio.h>

int main(){
/* *Important Note:* */
    // Int = 4 Bytes, Float = 4, BytesChar = 1 Bytes 


/* ARITHMETIC POINTERS: */
    // 1. Addition of a number to a pointer: 
    /*    int a = 23;
        int *b = &a;
        
        printf("The value of address of a is %d \n", b);
        b++;
        printf("The value of address of a is %d \n", b); */

    // 2. Subtraction of a number from a pointer: 
    /*  int a = 23;
        int *b = &a;
        
        printf("The value of address of a is %d \n", b);
        b--;
        printf("The value of address of a is %d \n", b);  */
    
    
    // 3. Subtraction of one pointer from another: 
    /*    int a[23];
        int *b = &a[3];
        int *c = &a[4];

        printf("%u - %u = %1d \n", c, b, c-b); /*
    /*  int a = 23;
    int a[23];
    int *b = &a[2];
    int *c = &a[4];

    printf("%u - %u = %u \n", c, b, c - b);*/
    // 4. Comparison of two pointer variable:
    int a[23];
    int *b = &a[5];
    int *c = &a[7];

    printf("%u > %u is %u\n", b, c, b>c);
    return 0;
}