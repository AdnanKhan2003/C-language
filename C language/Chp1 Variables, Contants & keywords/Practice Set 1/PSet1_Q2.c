// Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include<stdio.h>

int main(){
    float pie = 3.14;
    int radius = 2;
    int area = pie*radius*radius;
    printf("The area of a circle is %d\n", area);
//>>>> Find the volume of a cylinder:
    int volume = 2 * pie * radius;
    printf("The volume of a cylinder is %d\n", volume);
    return 0;
}