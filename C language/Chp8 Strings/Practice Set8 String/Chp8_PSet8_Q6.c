// Q.6 Write a program to encrypt a string by adding 1 to the ASCII value of its characters.

#include <stdio.h>
void encrypt(char *str);

int main(){
    char str[] = "My name is mai nahi bataunga";
    encrypt(str);
    printf("The encrypted value of str is %s \n", str);
    return 0;
}

void encrypt(char *str){
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr += 1;
        ptr++;
    }    
}