// Q.1 Write a program to print the multiplication table of a given number n.

// a. Using for loops:

#include <stdio.h>

int main(){
    int i = 1;
    for ( i = 1; i <= 10; i++)
    {
        printf("10 * %d = %d \n", i, 10 * i);
    }
    return 0;
}

// b. Using while loops:

// #include <stdio.h>

// int main(){
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("10 * %d = %d \n", i, 10 * i);
//         i++;
//     }
//     return 0;
// }

// c. Using do while loop:

#include <stdio.h>

// int main(){
//     int i = 1;
//     do
//     {
//         printf("10 * %d = %d \n", i, 10 * i);
//         i++;
//     } while (i <= 10);
    
//     return 0;
// }