#include <stdio.h>

int main(){
    int a[10];
    int* x = &a[2];
    int* y = &a[7];
    printf("%p - %p = %ld\n", x, y, x - y);
}