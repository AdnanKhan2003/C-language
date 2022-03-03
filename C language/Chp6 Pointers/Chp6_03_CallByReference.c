#include <stdio.h>
void swap(int *a, int *b);
void wrongSwap(int a, int b);

int main(){
    int a = 6, b = 4;
    printf("The value of a and b before swap is %d and %d \n", a, b);
    // wrongSwap(a, b);  // Call by value:
    swap(&a, &b);        // Call by reference:
    printf("The value of a and b after swap is %d and %d \n", a, b);
    return 0;
}

void wrongSwap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}