#include <stdio.h>
struct employee
{
        int id;
        float salary;
        char name[12];
};
    

int main(){
    
    struct employee e1, e2, e3;
    printf("Enter the ID of first employee: \n");
    scanf("%d", &e1.id);
    printf("Enter the salary of first employee: \n");
    scanf("%f", &e1.salary);
    printf("Enter the name of first employee: \n");
    scanf("%s", e1.name);


    printf("Enter the ID of second employee: \n");
    scanf("%d", &e2.id);
    printf("Enter the salary of second employee: \n");
    scanf("%f", &e2.salary);
    printf("Enter the name second employee: \n");
    scanf("%s", e2.name);


    printf("Enter the ID of third employee: \n");
    scanf("%d", &e3.id);
    printf("Enter the salary of third employee: \n");
    scanf("%f", &e3.salary);
    printf("Enter the name of third employee: \n");
    scanf("%s", e3.name);
    return 0;
}