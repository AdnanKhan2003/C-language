#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    float salary;
    char name[20];
};
void show(struct employee e1);

int main()
{
    struct employee e1 = {23, 23.2, "sf"};
    struct employee *ptr;
    ptr = &e1;

    ptr->id = 32;
    ptr->salary = 32.22;
    strcpy(ptr->name, "abc");
    show(e1);
    return 0;
}

void show(struct employee e1)
{
    printf("Id = %d \n", e1.id);
    printf("Salary = %f \n", e1.salary);
    printf("Name = %s \n", e1.name);
}