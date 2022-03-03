// Q.1 Write a program to print the address of the variable. Use this address to get the value of this variable

#include <stdio.h>

int main(){
    int a = 5;
    int *b = &a;
    printf("The address of the variable a is %u \n", b);
    printf("The address of the variable a is %u \n", &a);
    printf("The address of the variable a is %d \n", *b);
    return 0;
}
  
  
  
  
  

// // Address of a:
// printf("The address of a is %u \n", b);
// printf("The address of a is %u \n", &a);
// // Value of a:
// printf("The value of a is %d \n", a);
// printf("The value of a is %d \n", *b);
// // Value of b:
// printf("The value of b is %d \n", *(&b));
// // Address of b:
// printf("The address of b is %u \n", &b);