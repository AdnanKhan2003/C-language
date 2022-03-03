// Q.4 Take name and salary of two employees as input from the user and write them to a text file in the following format:
// name1, 3300
// name2, 7700

#include <stdio.h>
#include <string.h>
typedef struct employee{
    char name[20];
    int salary;
} details;

int main(){
    details d1, d2;
    FILE *fptr;
    fptr = fopen("Data.txt", "w");

    printf("Enter the Name of the 1st employee: \n");
    scanf("%s", &d1.name);
    printf("Enter the Salary of the 1st employee: \n");
    scanf("%d", &d1.salary);

    printf("Enter the Name of the 2nd employee: \n");
    scanf("%s", &d2.name);
    printf("Enter the Salary of the 2nd employee: \n");
    scanf("%d", &d2.salary);


    fprintf(fptr, "%s, ", d1.name);
    fprintf(fptr, "%d, ", d1.salary);
    fprintf(fptr, "\n");
    fprintf(fptr, "\n");
    fprintf(fptr, "%s, ", d2.name);
    fprintf(fptr, "%d, ", d2.salary);
    return 0;
}
