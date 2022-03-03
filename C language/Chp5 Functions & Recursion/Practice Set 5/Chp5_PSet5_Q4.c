// Q. 4 Write a program using recursion to calculate nth element fibonacci series:

#include <stdio.h>
int fib(int num);

int main(){
    int fibonacci, number;
    printf("Enter any number to find nth term \n");
    scanf("%d", &number);
    fibonacci = fib(number);
    printf("%dth term is %d \n", number, fibonacci);
    return 0;
}

int fib(int num){
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else{
        return fib(num - 1) + fib(num -2);
    }
}