// Q.2 Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("IsmeTableHai.txt", "w");
    int n;

    printf("Enter the number of which you want the table of: \n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d X %d = %d \n", n, i + 1, n * (i + 1));
    }

    return 0;
}