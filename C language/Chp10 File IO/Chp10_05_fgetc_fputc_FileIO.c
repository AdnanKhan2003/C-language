#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    fptr = fopen("MaiNahiBataunga.txt", "r");
    char sent;


    /* fgetc(): */
    for (int i = 0; i < 15; i++)
    {
        printf("%c \n", fgetc(fptr));
    }

    

    
    /* fputc(): */
    // FILE *fptr;
    // fptr = fopen("MaiBatataHu.txt", "w");
    // char sent2;

    // fputc('c' , fptr);

    return 0;
}