// Q. 4 Write a program to illustrate the use of an arrow operator -> in C.

#include <stdio.h>
#include <string.h>
typedef struct employee{
    int id;
    float salary;
    char name[20];
} emp;

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;

    ptr->id = 23;
    ptr->salary = 23.32;
    strcpy(ptr->name, "abc");

    // OR  

    // (*ptr).id = 23;
    // (*ptr).salary = 23.32;
    // strcpy((*ptr).name, "abc");

    printf("ID = %d \n", e1.id);
    printf("ID = %.2f \n", e1.salary);
    printf("ID = %s \n", e1.name);
    return 0;
}
