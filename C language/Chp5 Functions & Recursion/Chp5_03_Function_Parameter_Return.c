// #include <stdio.h>
// int sum(int a, int b);  // Function Prototype

// int main(){
//     int c;
//     c = sum(55, 5);  // Function Call
//     printf("The value of the following is %d \n", c);
//     return 0;
// }

// int sum(int a, int b){  // Function Definition
//     int result;
//     result = a + b;
//     return result;
// }


// Note: Variables in int main() function and other functions are different:


#include <stdio.h>
int add(int d, int e);

int main(){
    int f;   // This f variable is different from the variable f in add fumction & the only same thing is its name:
    f = add(23, 7);
    printf("The sum of the following is %d \n", f);
    return 0;
}

int add(int d, int e){
    int f;
    f = d + e;
    return f;
}