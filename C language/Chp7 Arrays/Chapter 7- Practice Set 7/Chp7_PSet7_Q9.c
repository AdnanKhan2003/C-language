// Q.8 Repeat problem 7 for a custom input given by the user.

#include <stdio.h>
void returnTable(int *arr, int num, int s);

int main()
{
    int table[3][10], num, num2, num3;
    returnTable(table[0], num, 10);
    returnTable(table[1], num2, 10);
    returnTable(table[2], num3, 10);
    return 0;
}

void returnTable(int *arr, int num, int s)
{
    printf("Enter any number to get the table \n");
    scanf("%d", &num);
    for (int i = 0; i < s; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d X %d = %d \n", num, i + 1, arr[i]);
    }
    printf("\n\n");
    printf("__________________________________________________________________________________________________________\n");
}