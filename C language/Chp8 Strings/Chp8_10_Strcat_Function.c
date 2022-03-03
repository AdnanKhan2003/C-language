#include <stdio.h>
#include <string.h>

int main(){
    char str1[23] = "Baskar bhai ";
    char *str2 = "Bhaskar bhai";
    strcat(str1, str2);
    printf("Now the value of str1 is %s \n", str1);
    return 0;
}