#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
void show(struct employee e1);

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->id = 23;
    ptr->salary = 23.2;
    strcpy(ptr->name, "abc");

    show(e1);
    return 0;
}

void show(struct employee e1){
    printf("ID = %d \n", e1.id);
    printf("ID = %f \n", e1.salary);
    printf("ID = %s \n", e1.name);
}