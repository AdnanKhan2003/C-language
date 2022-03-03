#include<stdio.h>

int main(){
    int i = 11;
    scanf("%d", &i);
    while (( i >= 10 ) && ( i <= 20 ))
    {
        printf("The value of i is %d\n", i);
        i++;
    }
    
    return 0;
}