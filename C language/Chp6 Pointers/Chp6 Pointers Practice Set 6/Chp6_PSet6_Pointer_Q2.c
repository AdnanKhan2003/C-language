// Q.2 Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>
void printAddress(int a, int *b);

int main(){
    int i = 4;
    int *j = &i;
    printf("The address of i before passing the address is %u \n", &i);
    printf("The address of i before passing the address is %u \n", j);
    printAddress(i, j);

    return 0;
}

void printAddress(int a, int *b){
    printf("The address of i after passing the address is %u \n", &a);
    printf("The address of i after passing the address is %u \n", b);
}