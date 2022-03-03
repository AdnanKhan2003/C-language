#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int id;
    float salary;
    char name[20];
} e;
void show(e e1);

int main()
{
    e e1;
    e *ptr;
    ptr = &e1;

    ptr->id = 33;
    ptr->salary = 33.2;
    strcpy(ptr->name, "abc");

    show(e1);
    return 0;
}

void show(e e1)
{
    printf("ID = %d \n", e1.id);
    printf("Salary = %f \n", e1.salary);
    printf("Name = %s \n", e1.name);
}