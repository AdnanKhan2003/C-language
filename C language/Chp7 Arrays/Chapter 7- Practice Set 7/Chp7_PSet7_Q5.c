// Q.5 Write a program containing a function that reverses the array passed to it.

#include <stdio.h>
void printArrayReverse(int *ptr, int s);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArrayReverse(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %dth element is %d \n", i+1, arr[i]);
    }
    
    return 0;
}

void printArrayReverse(int *ptr, int s){
    for (int i = 0; i < s/2; i++)
    {
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[s-i-1];
        ptr[s-i-1] = temp;
    }
}
