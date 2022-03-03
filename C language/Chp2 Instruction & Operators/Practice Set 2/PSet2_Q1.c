// Q.1] Which of the following in invalid in C?

#include<stdio.h>

int main(){
// [i] int a, b = a;
    // int a; b = a; // It's wrong
    int c; int w = c; // It's right
// [ii] int b = 3 ^ 3; (Is it valid or not):
    // It is valid but the result of this will not be exponent of 3 or 3 rather it is something else:
    int b = 3 ^ 3;
    printf("The value of b is %d\n", b);
// [iii] char dt = '20 December 2021';
    char date = '2'; // It is valid
    //char date2 = '20 December 2021'; // It is not valid
    return 0;
}