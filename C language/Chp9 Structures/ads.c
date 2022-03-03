#include <stdio.h>
#include <string.h>
struct employee {
    int id;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1 = {23, 2.2, "dsa"};
    struct employee *ptr;
    ptr = &e1;
    ptr->id = 12;

    printf("ID = %d \n Salary = %.1f \n Name = %s \n", e1.id, e1.salary, e1.name);
    printf("ID = %d \n", ptr->id);
    return 0;
}