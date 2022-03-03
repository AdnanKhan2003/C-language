// Q.3 A do-while loop is executed:
// a. At least once
// b. At least twice
// c. At most once

// >> a. atleast once

#include <stdio.h>

int main(){
    int i = 14;
    do
    {
        printf("The value of i is %d \n", i);
        i++;
    } while (i <= 10);
    
    return 0;
}