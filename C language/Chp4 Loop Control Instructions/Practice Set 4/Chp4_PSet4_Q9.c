// Q.8 Write a program to calculate the factorial of a given number using for while loop.

#include <stdio.h>

int main(){
    int i = 1, n, factorial = 1;
    printf("Enter any number of which you want the factorial of \n");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d \n", n, factorial);
    return 0;
}