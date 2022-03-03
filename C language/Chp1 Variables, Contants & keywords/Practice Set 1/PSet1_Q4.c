// Q4. Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.:

#include<stdio.h>

int main(){
    int Principal = 100, Rate = 2, Years = 2;
    int SimpleInterest = Principal * Rate * Years / 100;
    printf("The Simple Interest is %d\n", SimpleInterest);
    return 0;
}