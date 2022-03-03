// Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int x;
    int y;
} vec;
vec sumVector(vec v1, vec v2);

int main()
{
    vec v1, v2, sum;
    v1.x = 23;
    v1.y = 32;
    v2.x = 53;
    v2.y = 35;

    sum = sumVector(v1, v2);
    printf("The sum of x and y of v1 is %d \n", sum.x);
    printf("The sum of x and y of v2 is %d \n", sum.y);
    return 0;
}

vec sumVector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}