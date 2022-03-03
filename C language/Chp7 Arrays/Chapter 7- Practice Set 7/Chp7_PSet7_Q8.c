// Q.8 Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.

#include <stdio.h>

int main(){
    int table[3][10], n = 10, num, num2, num3;
    printf("Enter the number to get the table \n");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        table[0][i] = num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i+1, table[0][i]);
    }
    printf("\n\n");


    printf("Enter the number to get the table \n");
    scanf("%d", &num2);

    for (int i = 0; i < n; i++)
    {
        table[1][i] = num2*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num2, i+1, table[1][i]);
    }
    printf("\n\n");


    printf("Enter the number to get the table \n");
    scanf("%d", &num3);

     
    for (int i = 0; i < n; i++)
    {
        table[2][i] = num3*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num3, i+1, table[2][i]);
    }
    printf("\n\n");
    


    

    return 0;
}