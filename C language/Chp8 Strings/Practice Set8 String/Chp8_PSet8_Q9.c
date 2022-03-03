// Q.9 Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
void present(char *str, char c);

int main(){
    char str[] = "Mainahibataunga";
    present(str, 'd');
    printf("%s \n", str);
    return 0;
}

void present(char *str, char c){
    int count = 0;
    while (*str != '\0')
    {
        if (*str == c)
        {
            count++;
        }
    }
    if (count < 1)
    {
        printf("The string is absent \n");
    }
    else{
        printf("The string is present \n");
    }
}