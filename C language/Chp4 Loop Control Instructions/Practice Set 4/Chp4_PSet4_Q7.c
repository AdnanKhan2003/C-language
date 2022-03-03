// Q.7 Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(Consider 8x1 to 8x10)

#include <stdio.h>

int main(){
    int n = 10, sum = 0, table;
    for (int i = 1; i <= n; i++)
    {
        table = 8*i;
        sum += table;
    }
    printf("The sum of table 8 is %d \n", sum);
    return 0;
}

