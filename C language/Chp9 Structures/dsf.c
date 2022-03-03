#include <stdio.h>
#include <string.h>

struct student
{
    int roll_num;
    float marks;
    char name;
};

void main()
{
    struct student s1;
    struct student *ptr;

    ptr = &s1;
    ptr->roll_num = 1;
    ptr->marks = 78.97;
    strcpy(ptr->name, "Zoro");

    printf("Roll number of student 1 is: %d", s1.roll_num);
    printf("Marks of student 1 is: %f", s1.marks);
    printf("Name of student 1 is: %c", s1.name);
}