#include <stdio.h>
int sum(int a, int b);

int main(){
    int a = 15, b = 5;
    printf("The sum of a and b is %d \n", sum(a, b));  // Call by value
    return 0;
}

int sum(int a, int b){
    return a + b;
}


// Logic behind swap:

//  a = 6    b = 4    temp
//  a = 6    b = 4    temp = 6
//  a = 4    b = 4    temp = 6    
//  a = 4    b = 6    temp = 6