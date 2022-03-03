#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->id = 23;
    printf("ID = %d \n", ptr->id);
    return 0;
}

// (->): Arrow Operator