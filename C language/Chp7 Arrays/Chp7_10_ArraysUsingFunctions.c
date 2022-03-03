#include <stdio.h>
int printArray(int arr[], int s);
// int printArray(int *ptr, int s);

int main(){
    int arr[] = {22, 43, 98, 92, 29, 23, 29};
    printArray(arr, 7);
    return 0;
}

int printArray(int arr[], int s){
    for (int i = 0; i < s; i++)
    {
        printf("The Value of marks of Student %d is %d \n", i+1, arr[i]);
    }
    
}
// int printArray(int *ptr, int s){
//     for (int i = 0; i < s; i++)
//     {
//         printf("The Value of marks of Student %d is %d \n", i+1, *(ptr+i));
//     }
    
// }