// Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("MaiNahiddBataunga2.txt", "r");

    if (ptr == NULL)
    {
        printf("This file doesn't exist. \n");
    }
    else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        printf("The value of num is %d \n", num);
        printf("The value of num2 is %d \n", num2);
        fclose(ptr);  // It is neccessary to close the file.

    }
    return 0;
}
