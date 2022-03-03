#include <stdio.h>

int main(){
    char ptr1[44] = "Hello";
    char *ptr2 = "Bye";

    int val = strcmp(ptr1, ptr2);
    printf("The value given by ptr1 is %d \n", val);
    printf("It returns 1 because the first mismatching number's ASCII value in the first string is greater than the second mismatching number in the second string's ASCII value \n\n");


    char ptr3[44] = "Hello";
    char *ptr4 = "Hello";

    int val2 = strcmp(ptr3, ptr4);
    printf("The value given by ptr3 is %d \n", val2);
    printf("It returns 0 because both the values of strings are equal thus they have same ASCII values\n\n");


    char ptr5[44] = "Hello";
    char *ptr6 = "Zimbabwe";

    int val3 = strcmp(ptr5, ptr6);
    printf("The value given by ptr5 is %d \n", val3);
    printf("It returns -1 because the first mismatching number's ASCII value in the first string is smaller than the second mismatching number in the second string's ASCII value \n\n");
    return 0;
}