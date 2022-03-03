// Q.7 Write a program to decrypt the string encrypted using the encrypt function in problem 6.

#include <stdio.h>
void decrypt(char *str);

int main(){
    char str[] = "Nz!obnf!jt!nbj!obij!cbubvohb";
    decrypt(str);
    printf("The decrypted value of str is %s \n", str);
    return 0;
}

void decrypt(char *str){
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr -= 1;
        ptr++;
    }
}