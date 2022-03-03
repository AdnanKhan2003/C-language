// Q.1 Use the library function to calculate the area of square:

// #include <stdio.h>
// int square(int a);

// int main(){
//     int b;
//     b = square(2);
//     printf("The area of a square is %d \n", b);
//     return 0;
// }

// int square(int a){
//     int areaOfSquare;
//     areaOfSquare = a * a;
//     return areaOfSquare;
// }



#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter the value of side \n");
    scanf("%d", &side);
    printf("The area of a square is %f \n", pow(side, 2));
    return 0;
}
