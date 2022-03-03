#include <stdio.h>

int main(){
    int a[4];
    int *b = &a[2];
    int *c = &a[4];

    // printf("%u - %u = %u \n", c, b, c-b);
    if (c > b)
    {
        printf("True \n");
    }
    else if(c < b){
        printf("False \n");
    }
    return 0;
}