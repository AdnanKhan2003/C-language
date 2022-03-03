// Q.2 Write a program to print a multiplication table of 10 in reversed order

#include <stdio.h>

int main(){
    int i = 10;
    for ( i = 10; i; i--)
    {
        printf("10 * %d = %d \n", i, 10 * i);
    }
    return 0;
}