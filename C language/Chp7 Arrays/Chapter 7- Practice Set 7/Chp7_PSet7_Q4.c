// Q.4 Repeat problem 3 for a general input provided by the user using scanf()

#include <stdio.h>

int main(){
    int arr[10];
    int n, s = 10;

    printf("Enter any number to get the table \n");
    scanf("%d", &n);

    for (int i = 0; i < s; i++)
    {
        arr[i] = n*(i+1);
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d * %d = %d \n", n, i+1, arr[i]);
    }
    return 0;
}