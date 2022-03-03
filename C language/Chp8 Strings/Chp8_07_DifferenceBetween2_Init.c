#include <stdio.h>

int main(){
    // char ptr[] = "Mai nahi bataunga";  We cannot change the value by reinitialising of array
    char *ptr = "Mai nahi bataunga";
    ptr = "Batatu hu rukja panchayati \n";
    printf("%s", ptr);
    return 0;
}