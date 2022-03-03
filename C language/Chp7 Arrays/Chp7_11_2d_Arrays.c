#include <stdio.h>

int main(){
    int students = 3;
    int subjects = 5;

    int marks[3][5];
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the value of marks of Student %d in Subject %d \n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n\n");
    }
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("The value of marks of Student %d in Subject %d is: %d\n", i+1, j+1, marks[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}