// Q.2 Write a function to convert Celcius temperature into Fahrenheit.

#include <stdio.h>
float celsiusToFahrenheit(float a);

int main(){
    float celsius, fahrenheit;
    printf("Enter the value of temperature in celsius \n");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%f Celsius = %f Fahrenheit \n", celsius, fahrenheit);
    return 0;
}

float celsiusToFahrenheit(float a){
    float fahrenheit;
    fahrenheit = (a * 9/5) + 32;
    return fahrenheit; 
}