#include <stdio.h>
int factorial(int b);

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("The factorial of %d is %d \n", a, factorial(a));
    return 0;
}

int factorial(int b){
    int f;
    if ((b == 1) || (b == 0)) // 5 * 4 * 3 * 2 * 1 
    {
        return 1;
    }
    else{
        f = b * factorial(b - 1);  // It is called recursion because this function calls itself:
        return f;
    }
}