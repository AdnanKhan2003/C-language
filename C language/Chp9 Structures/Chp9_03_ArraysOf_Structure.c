#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    float salary;
    char name[20];
};


int main(){
    struct employee facebook[100];
        facebook[0].id = 23;
        facebook[0].salary = 123.2;
        // facebook[0].name = "Nahi";  >> It won't work.
        strcpy(facebook[0].name, "Nahi");

        
        facebook[1].id = 13;
        facebook[1].salary = 23.2;
        strcpy(facebook[1].name, "ANahi");


        facebook[2].id = 27;
        facebook[2].salary = 13.2;
        strcpy(facebook[2].name, "HaNahi"); 
    
    printf("First employee: ID: %d \n Salary: %.1f \n Name: %s \n\n", facebook[0].id, facebook[0].salary, facebook[0].name);
    printf("Second employee: ID: %d \n Salary: %.1f \n Name: %s \n\n", facebook[1].id, facebook[1].salary, facebook[1].name);
    printf("Third employee: ID: %d \n Salary: %.1f \n Name: %s \n\n", facebook[2].id, facebook[2].salary, facebook[2].name);
    return 0;
}