// Q.6 Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function. The values must be taken as an input from the user. Write problem 5’s structure using typedef keyword.

#include <stdio.h>
#include <string.h>
typedef struct complex
{
    int real, img;
} comp;
void display(comp c);

int main()
{
    comp complexNumber[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of Real number: \n");
        scanf("%d", &complexNumber[i].real);
        printf("Enter the value of Imaginary number: \n");
        scanf("%d", &complexNumber[i].img);
    }
    
    for (int i = 0; i < 5; i++)
    {
        display(complexNumber[i]);
    }

    return 0;
}

void display(comp c)
{
    printf("The value of Real number is: %d \n", c.real);
    printf("The value of Imaginary number is: %d \n", c.img);
}