// Q. 5 Write a program with a structure representing a Complex number.

#include <stdio.h>
#include <string.h>
typedef struct complexNo{
    int real;
    int img;
} cmpNo;
cmpNo sumComplex(cmpNo a, cmpNo b);

int main(){
    
    // a.real = 23;
    // a.img = 32;
    // b.real = 43;
    // b.img = 24;

    cmpNo a = {1, 3};
    cmpNo b = {2, 4};

    cmpNo c = sumComplex(a, b);
    printf("%d + i%d \n", a.real, a.img);
    printf("%d + i%d \n", b.real, b.img);
    printf("The sum of Complex numbers: %d + i%d \n", c.real, c.img);
    return 0;
}

cmpNo sumComplex(cmpNo a, cmpNo b)
{
    cmpNo c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}