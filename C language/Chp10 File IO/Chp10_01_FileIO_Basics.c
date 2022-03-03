#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    // ptr = fopen("MaiNahiBataunga.txt", "r"); // >> For reading the file.
    ptr = fopen("MaiNahiBataunga2.txt", "w"); // >> For writing to the file.
    fclose(ptr);  // It is neccessary to close the file.
    return 0;
}