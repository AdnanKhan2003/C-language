// Q.10 Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main(){
    int i = 2, prime = 1, n;
    printf("Enter any number \n");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime == 0)
    {
        printf("%d is not a prime number rather it is a composite number \n", n);
    }
    else if (n == 1)
    {
        printf("%d is neither a prime nor a composite number \n", n);
    }
    
    else{
        printf("%d is a prime number \n", n);
    }
    return 0;
}