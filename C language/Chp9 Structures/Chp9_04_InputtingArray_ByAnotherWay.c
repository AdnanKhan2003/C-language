#include <stdio.h>
struct employee
{
    int id;
    float salary;
    char name[20];
};


int main(){
    struct employee Adnan = {12, 21.23, "MaiNahiBataunga"};
    
    printf("Code is: %d \n", Adnan.id);
    printf("Code is: %f \n", Adnan.salary);
    printf("Code is: %s \n", Adnan.name);
    return 0;
}