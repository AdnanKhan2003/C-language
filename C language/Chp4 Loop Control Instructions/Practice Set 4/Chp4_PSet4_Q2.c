// Q.2 Write a program to print a multiplication table of 10 in reversed order

#include <stdio.h>

int main(){
    int i = 10;
    for ( i = 10; i; i--)
    {
        printf("8 * %d = %d\n", i, 8 * i);
    }
    
    return 0;
}