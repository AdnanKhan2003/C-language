// Q.3 Write a program to calculate force of attraction on a body of mass m exerted by earth (g = 9.8m/s^2)

#include <stdio.h>
float massKg(float mass);

int main(){
    float mass, newton;
    printf("Enter the value of mass \n");
    scanf("%f", &mass);
    newton = massKg(mass);
    printf("%f Kgs = %.2f Newton \n", mass, newton);
    return 0;
}

float massKg(float mass){
    float result;
    result = mass * 9.8;
    return result;
}