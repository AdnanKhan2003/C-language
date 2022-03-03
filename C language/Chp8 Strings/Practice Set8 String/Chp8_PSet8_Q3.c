// Q.3 Write your own version of strlen function from <string.h>

#include <stdio.h>
int strle(char *str);

int main(){
    char str[] = "Important";
    int l = strle(str);
    printf("The length of string str is %d \n", l);
    return 0;
}

int strle(char *str){
    int l = 0, i = 0;
    while (*str != '\0')
    {
        l++;
        str++;
    }
    return l;
}