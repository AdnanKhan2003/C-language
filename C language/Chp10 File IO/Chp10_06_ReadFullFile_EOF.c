#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    fptr = fopen("MaiNahiBataunga.txt", "r");
    char c = fgetc(fptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    
    return 0;
}