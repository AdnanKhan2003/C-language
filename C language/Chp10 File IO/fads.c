#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    ptr = fopen("FileIOKhatamHoneWalaHai.txt", "w");
    char c;
    int n = 3;

    fputc('c', ptr);
    fclose(ptr);
    return 0;
}