// Q.8 Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
int occurence(char *str, char c);

int main(){
    char str[] = "Baskarbhai";
    int val = occurence(str, 'a');
    printf("Occurences = %d \n", val);
    return 0;
}

int occurence(char *str, char c){
    int count = 0;
    while (*str != '\0')
    {
        if (*str == c)
        {
            count++;
        }
        str++;
    }
    return count;
}