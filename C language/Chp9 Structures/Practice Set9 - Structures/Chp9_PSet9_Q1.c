// Q.1 Create a two-dimensional vector using structures in C.

#include <stdio.h>
#include <string.h>
typedef struct vector{
    int x;
    int y;
} v;

int main(){
    v v1, v2;
    v1.x = 23;
    v1.y = 33;

    printf("x = %d \n", v1.x);
    printf("y = %d \n", v1.y);
    return 0;
}