// Q.3] Write a program to check whether a number is divisible by 97 or not?

#include<stdio.h>

int main(){
    int number;
    printf("Enter any number \n");
    scanf("%d", &number);
    printf("Divisiblity test returns: %d\n", number%97);
    return 0;
}