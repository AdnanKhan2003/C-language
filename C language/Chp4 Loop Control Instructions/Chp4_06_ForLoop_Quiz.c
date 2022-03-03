// Q.1 Write a program to print first n natural numbers using for loop

#include<stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("The value of i is %d\n", i+1);
    } // This was the solution of the 1 Question.

// Q.2 Write a program to print the value in reverse order from 5 to 1.
    // for (int i = 5; i; i--) 
    //  Any non-zero number is true.
    // Here if we put i = 0 then the program will not be executed as zero is considered as false.
    // {
    //     printf("The value of i is %d\n", i);
    // }
    return 0;
}


// Numbers:

// Natural Numbers: It includes all numbers from 1 to infinity.
// Whole Numbers: It includes all numbers from 0 to infinity.
// Integers: It includes all numbers from 1 to infinity -1 to -infinity but does not includes fractions and decimals.
// Rational Numbers: It includes all numbers from 1 to infinity but in the form of fraction for ex: p / q where both numbers are integers but q is not equal to 0.
// Irrational Numbers: Irrational numbers are numbers that cannot be expressed as a fraction or ratio of two integers. There is no finite way to express them. ( examples: √2, π, e).

// The forLoop runs in the following steps:

// 1. i is initialized to 5
// 2. The condition “i” (0 or none) is tested
// 3. The code is executed
// 4. i is decremented
// 5. Condition i is checked, and the code is executed if it's not 0.
// & so on until i is non 0.