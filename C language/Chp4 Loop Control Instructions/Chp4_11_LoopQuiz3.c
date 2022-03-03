#include <stdio.h>

int main(){
// Q.1 Print the value from 1 to 10:
    int i = 0;
    int n;
    // printf("Enter the value of n \n");
    // scanf("%d", &n); 
    // while (i < n)
    // {
    //     printf("The value of n is %d \n", i);
    //     i++;
    // }
    
// Q.2 Print the value from 10 to 1 in reverse order:
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for ( i = n; i; i--)
    {
        printf("The value of n is %d \n", i);
    }
    return 0;
}