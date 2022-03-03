// Q.12 Write a program to check whether a given number is prime or not using do while loop.

#include <stdio.h>

int main(){
    int i = 2, n = 5, prime = 1;
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
            i++;
        }
    } while (i < n);
    if (prime == 0)
    {
        printf("%d is not a prime number rather it is a composite number\n", n);
    }
    else if (n < 2)
    {
        printf("%d is neither a prime nor a composite number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
    return 0;
}
