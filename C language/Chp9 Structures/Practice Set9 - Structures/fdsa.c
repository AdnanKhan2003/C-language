#include <stdio.h>
#include <string.h>
typedef struct complex
{
    int real, img;
} comp;
comp complexsum(comp c1, comp c2);

int main()
{
    comp c1[2], c2[2], c3;
    comp *ptr1 = c1;
    comp *ptr2 = c2;
    comp *ptr3 = &c3;

    ptr1->real = (1, 3);
    ptr1->img = (7, 3);
    (*ptr3) = complexsum(*ptr2, *ptr2);

    printf("Value of complex number 1 is: %d + i%d \n", (*ptr1).real, (*ptr1).img);
    printf("Value of complex number 2 is: %d + i%d \n", (*ptr2).real, (*ptr2).img);
    printf("Value of complex number 3 is: %d + i%d \n", (*ptr3).real, (*ptr3).img);
    return 0;
}

comp complexsum(comp c1, comp c2)
{
    comp result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;
}