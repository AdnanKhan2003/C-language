#include <stdio.h>
#include <string.h>

int main(){
    // (.) => Member Operation.



    struct employee
    {
        int code;
        float salary;
        char name[12];
    };
    
    struct employee e1;
        e1.code = 110;
        e1.salary = 23.23;
        strcpy(e1.name, "Nahi");



    printf("%d \n", e1.code);
    printf("%.2f \n", e1.salary);
    printf("%s \n", e1.name);    
    return 0;
}