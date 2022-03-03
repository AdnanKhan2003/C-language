// Q.3 Write a program to read a text file character by character and write its content twice in a separate file.

#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;

    fptr1 = fopen("IsmeCharHai.txt", "r");
    fptr2 = fopen("IsmePasteKar.txt", "w");
    char c = fgetc(fptr1);

    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    fclose(fptr1); 
    fclose(fptr2); 
    fptr3 = fopen("IsmePasteKar.txt", "w");
    
    char c1 = fgetc(fptr1);
    while (c1 != EOF)
    {
        fputc(c1, fptr3);
        c1 = fgetc(fptr1);
    }
    fclose(fptr3);
    return 0;
}