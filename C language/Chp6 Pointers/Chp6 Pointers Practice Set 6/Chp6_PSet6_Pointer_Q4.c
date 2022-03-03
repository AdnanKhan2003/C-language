// Q. 4 Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>
void sumAverage(int a, int b, int *sum, float *average);

int main(){
    int num1 = 3, num2 = 6, sum;
    float average;
    sumAverage(num1, num2, &sum, &average);
    printf("The sum of a and b is %d \n", sum);
    printf("The average of a and b is %.2f \n", average);
    return 0;
}

void sumAverage(int a, int b, int *sum, float *average){
    *sum = (a + b);
    *average = (float)(*sum) / 2;
}