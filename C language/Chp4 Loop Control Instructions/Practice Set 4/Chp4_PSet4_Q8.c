// Q.8 Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main(){
    int i = 1, factorial = 1, n;
    printf("Enter any number \n");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d \n", n, factorial);
    return 0;
}