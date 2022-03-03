#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("MaiNahiBataunga2.txt", "r");
    
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);  // It is neccessary to close the file.
    
    printf("The value of num is %d \n", num);
    printf("The value of num is %d \n", num2);
    return 0;
}