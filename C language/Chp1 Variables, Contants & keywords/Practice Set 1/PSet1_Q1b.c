// Q1. Write a c program to calculate the area of a rectangle:
// b) using inputs supplied by the user:

#include<stdio.h>

int main(){
    int length, breadth;
    printf("Enter the length of a rectangle\n");
    scanf("%d", &length);
    printf("Enter the breadth of a rectangle\n");
    scanf("%d", &breadth);
    printf("The area of a rectangle is %d\n", length*breadth);
    return 0;
}