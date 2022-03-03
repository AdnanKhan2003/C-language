// Q.6 Write a program to find the greatest of four numbers entered by the user.

#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Enter the value of d\n");
    scanf("%d", &d);

    if (( a > b ) && ( a > c ) && ( a > d ))
    {
        printf("%d is the greatest number\n", a);
    }
    if (( b > a ) && ( b > c ) && ( b > d ))
    {
        printf("%d is the greatest number\n", b);
    }
    if (( c > a ) && ( c > b ) && ( c > d ))
    {
        printf("%d is the greatest number\n", c);
    }
    if (( d > a ) && ( d > b ) && ( d > c ))
    {
        printf("%d is the greatest number\n", d);
    }
    return 0;
}

