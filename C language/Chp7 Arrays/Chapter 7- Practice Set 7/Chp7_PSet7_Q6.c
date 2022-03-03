// Q.6 Write a program containing functions that counts the number of positive integers in an array.

#include <stdio.h>
void printPostive(int *arr, int s, int *positiveNumber, int *negativeNumber);

int main()
{
  int arr[] = {1, 2, -3, 4, 5, -6, -7, 8, -9, 10}, s = 10;
  int positiveNumber = 0, negativeNumber = 0;
  printPostive(arr, 10, &positiveNumber, &negativeNumber);

  printf("There are %d positive integers and %d negative integers in this array \n", positiveNumber, negativeNumber);

  return 0;
}

void printPostive(int *arr, int s, int *positiveNumber, int *negativeNumber)
{
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
  // return *positiveNumber;
}