// Q.1 Write a program to read three integers from a file.

#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fptr;
  fptr = fopen("../MaiNahiBataunga2.txt", "r");
  int num1, num2, num3;

  fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
  fclose(fptr);

  printf("The value of num1, num2 and num3 is %d, %d and %d \n", num1, num2, num3);
  return 0;
}