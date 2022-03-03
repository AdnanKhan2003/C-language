#include <stdio.h>

int main(){
    int marks[5];
    int *marksContainer = &marks[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks of Student %d: \n", i+1);
        scanf("%d", marksContainer);
        marksContainer++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks of Student %d is: %d \n", i+1, marks[i]);
    }
    return 0;
}