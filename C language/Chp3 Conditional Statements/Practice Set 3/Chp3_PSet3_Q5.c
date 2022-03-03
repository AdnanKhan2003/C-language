// Q.5 Write a program to determine whether a character entered by the user is lowercase or not.


// >>>>  This one is more simple <<<<<<
// #include<stdio.h>

// int main(){
//     char character;
//     printf("Enter any character\n");
//     scanf("%c", &character);

//     if(( character >= 'A' ) && ( character <= 'Z' )){
//         printf("The character %c is an uppercase\n", character);
//     }
//     if(( character >= 'a' ) && ( character <= 'z' )){
//         printf("The character %c is a lowercase\n", character);
//     }
//     return 0;
// }

// OR 


// >>>>>> In this one we've used ASCII values <<<<<<<<
// 97 to 122 are for lowercase character values
// 65 to 90 are for uppercase character values

#include<stdio.h>

int main(){
    char character;
    printf("Enter any character\n");
    scanf("%c", &character);

    if ((character >= 97) && (character <= 122))
    {
        printf("%c is a lowercase\n", character);
    }
    else if ((character >= 65) && (character <= 90))
    {
        printf("%c is an uppercase\n", character);
    }
    
    else{
        printf("%c is neither uppercase nor a lowercase\n", character);
    }
    return 0;
}