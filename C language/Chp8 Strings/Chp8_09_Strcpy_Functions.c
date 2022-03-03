#include <stdio.h>
#include <string.h>

int main(){
    char *ptr1 = "MaiNahiBataunga";
    char ptr2[44];
    strcpy(ptr2, ptr1);
    printf("The value of ptr2 is %s \n", ptr2);
    return 0;
}