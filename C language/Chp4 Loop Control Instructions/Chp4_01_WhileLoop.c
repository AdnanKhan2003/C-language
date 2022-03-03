#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    // 1. >> This program will lead to infinite loop.
    // int i = 11;
    // while (a > 10)
    // {
    //     printf("%d\n", a);
    //     // a++;
    // } 

    // 2. >> This program will print the value from the number user have input till 10.
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}