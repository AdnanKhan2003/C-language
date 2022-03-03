#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i;

    /*  Address of i:  */
    printf("The address of i is %d \n", j);
    printf("The address of i is %u \n\n", &i);

    /*  Address of j:  */
    printf("The address of j is %u \n\n", &j);

    /*  Address of i:  */
    printf("The value of i is %u \n\n", *j);

    /*  Address of j:  */
    printf("The address of j is %u \n\n", *(&j));
    return 0;
}