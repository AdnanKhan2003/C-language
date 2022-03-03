// Q.5 Write a program to sum the first ten natural numbers using a do while and for loop.

// a. Using for loops:

// #include <stdio.h>

// int main(){
//     int i, sum = 0;
//     for ( i = 0; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("The value of sum(1 to 10) is %d \n", sum);
//     return 0;
// }



// b. Using do while loops:

#include <stdio.h>

int main(){
    int i = 0, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("The value of sum(1 to 10) is %d \n", sum);
    return 0;
}