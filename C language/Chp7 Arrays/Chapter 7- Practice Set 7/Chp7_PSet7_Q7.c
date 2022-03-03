// Q.7 Write a program containing functions that counts the number of positive integers in an array.

#include <stdio.h>
void printResult(int *arr, int s, int *positiveNumber, int *negativeNumber);

int main(){
    int arr[10], positiveNumber = 0, negativeNumber = 0; int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %dth element: \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    printResult(arr, 10, &positiveNumber, &negativeNumber);
    printf("There are %d positive elements and %d negative elements \n", positiveNumber, negativeNumber);
    return 0;
}

void printResult(int *arr, int s, int *positiveNumber, int *negativeNumber){
    for (int i = 0; i < s; i++)
    {
        if (arr[i] > 0)
        {
            (*positiveNumber)++;
        }
        else{
            (*negativeNumber)++;
        }
    }
}