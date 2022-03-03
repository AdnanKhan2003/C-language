// Q.2 Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[34];
    char str2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string: \n");
    scanf("%s", str1);    

    printf("Enter the value of second string: \n");    

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1] = '\0';

    printf("The value of first string is: %s \n", str1);
    printf("The value of first string is: %s \n", str2);
    printf("Strcmp returns: %d \n", strcmp(str1, str2));
    return 0;
}