#include <stdio.h>
int factorial(int x);

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("The factorial of %d is %d \n", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d) \n", x);
    if ((x == 1) || (x == 0))
    {
        return 1;
    }
    else{
        int f;
        f = x * factorial(x - 1);
        return f;
    }
}

// It works as:
    // 5 * 4 * 3 * 2 * 1
    // factorial(n) = n * factorial(n - 1)
    // Here,
    // factorial(5) = 5 * factorial(5 - 1)
    //              = 5 * 4 

    // factorial(4) = 4 * factorial(4 - 1)
    //              = 4 * 3
   
    // factorial(3) = 3 * factorial(3 - 1)
    //              = 3 * 2

    // factorial(2) = 2 * factorial(2 - 1)
    //              = 2 * 1

    // factorial(1) = 1

// Diagram:
            // factorial(5)
            // 5 * factorial(4)
            // 4 * factorial(3)
            // 3 * factorial(2)
            // 2 * factorial(1)

