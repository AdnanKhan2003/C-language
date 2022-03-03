#include <stdio.h>

int main(){
    int i = 25; int *j; 
    j = &i;
    // Value of i
    printf("Value of i = %d \n", i);    
    // Value of i
    printf("Value of i = %d \n", *j);
    // Value of j
    printf("Value of j = %u \n", *(&j));
    // Address of i
    printf("Address of i = %u \n", &i);
    // Address of i
    printf("Address of i = %d \n", j);
    // Address of j
    printf("Address of j = %u \n", &j);
    return 0;
}


// i(any variable) = value of i(that variable)
// *j(any variable) = Take the value of the address given
// &i(any variable) = Take the address of that particulat variable
// *(&j)(any variable) = Takes the value of pointers 