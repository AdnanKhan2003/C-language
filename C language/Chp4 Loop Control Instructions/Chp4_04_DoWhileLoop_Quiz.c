// Q.1 Write a program to print the numbers from 1 to 4

#include<stdio.h>

int main(){
    // int i;
    // printf("Enter the value of i\n");
    // scanf("%d", &i);
    // do{
    //     printf("The value of i is %d\n", i);
    //     i++;
    // }while(i < 5);
    // In do while the program is executed first and then condition is checked 

    // Print the value from 1 to 5
    int i = 0;
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    do{
        printf("The number you've entered is %d\n", i);
        i++;
    }while(i < n);
    
    return 0;
}