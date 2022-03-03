#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    int number = 23;
    int number2 = 223, n;
    fptr = fopen("AisaHibanadiyafile.txt", "w");
    printf("Enter the value of n \n");
    scanf("%d", &n);
    // fprintf(fptr, "The value of the number is %d \n", number);
    // fprintf(fptr, "The value of the number is %d \n", number2);
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d X %d = %d \n", n, (i + 1), n*(i+1));
    }
    fclose(fptr);
    return 0;
}