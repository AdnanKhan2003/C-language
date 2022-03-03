// Q. 5 Write a program to modify a file containing an integer to double its value.
// If old value = 2, then new file value = 4

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr1;
    FILE *fptr2;
    int num1, num2;
    fptr1 = fopen("Qdata5.txt", "r");

    fscanf(fptr1, "%d", &num1);
    fclose(fptr1);

    fptr2 = fopen("Qdata5.txt", "w");
    num2 = num1 * 2;

    fprintf(fptr2, "%d", num2);
    return 0;
}