#include <stdio.h>

int main(){
    // Int:
    int i = 34;
    int *j = &i;
    // Float:
    float a = 34.23;
    float *b = &a;
    // Char:
    char c = 'a';
    char *d = &c;

    /* >>>>> For Int:  <<<<<< */
/*  printf("The address of j is %d \n", j);
    // j++;
    j--;
    printf("The address of j is %d \n", j);  */

/*  >>>>> For Float: <<<<< */
/*  printf("The address of a is %d \n", b);
    // b++;
    b--;
    printf("The address of a is %d \n", b);  */

/*  >>>>>  For char   <<<<<  */
    printf("The address of c is %d \n", d);

    return 0;
}