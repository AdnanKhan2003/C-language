// Q.6 Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>
#include <string.h>
struct complex
{
    int real;
    int img;
};
void display(struct complex c);

int main()
{
    struct complex cNo[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of Real number: \n");
        scanf("%d", &cNo[i].real);
        printf("Enter the value of Imaginary number: \n");
        scanf("%d", &cNo[i].img);
    }

    for (int i = 0; i < 5; i++)
    {
        display(cNo[i]);
    }

    return 0;
}

void display(struct complex c)
{
    printf("The value of Real number is: %d \n", c.real);   
    printf("The value of Imaginary number is: %d \n", c.img);   
}