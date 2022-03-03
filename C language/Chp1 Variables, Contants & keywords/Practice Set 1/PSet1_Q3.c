// Q3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit):

#include<stdio.h>

int main(){
    float celsius = 32;
    float Fahrenheit = (celsius * 9/5) + 32;
    printf("The value of this celsius temperature in fahrenheit is %f", Fahrenheit);
    return 0;
}