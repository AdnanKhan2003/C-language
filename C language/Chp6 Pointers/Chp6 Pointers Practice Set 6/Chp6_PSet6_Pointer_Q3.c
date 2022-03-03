// Q.3 Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.

#include <stdio.h>
int tenTimes(int *x);

int main(){
    int a = 5;
    printf("The value of a before the function is call is %d \n", a);
    tenTimes(&a);
    printf("The value of a before the function is call is %d \n", a);
    return 0;
}

int tenTimes(int *x){
    return (*x) *= 10;
}