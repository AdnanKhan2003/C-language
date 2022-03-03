// Q.4 Write a function slice() to slice a string. It should change the original string such that it is now the sliced strings. Take m and n as the start and ending position for slice.

#include <stdio.h>
void slice(char *str, int m, int n);

int main(){
    char str[] = "Important";
    slice(str, 2, 6);
    printf("The value of string str after slicing is %s \n", str);
    return 0;
}

void slice(char *str, int m, int n){
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}