// Game Project2 : Snake, Water, Gun or Rock, Paper, Scissors is a game most of us have played during school time.

// Write a C program capable of playing this game with you.
// Your program should be able to print the result after you choose Snake/Water or Gun.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int snakeGunWater(char you, char comp);

int main()
{
    char you, comp;
    int result, number;

    srand(time(0));
    number = rand() % 100 + 1;

    if (comp < 33)
    {
        comp = 's';
    }
    else if ((comp > 33) && (comp < 66))
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }

    printf("Enter 's' for Snake, 'g' for Gun and 'w' for Water: \n");
    scanf("%c", &you);

    result = snakeGunWater(you, comp);
    printf("You choose %c and computer choose %c \n", you, comp);

    if (result == 0)
    {
        printf("You Draw! \n");
    }
    else if (result == 1)
    {
        printf("You Win!! \n");
    }
    else
    {
        printf("You Loose! \n");
    }
    return 0;
}

int snakeGunWater(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    
    if ((you == 's') && (comp == 'g'))
    {
        return -1;
    }
    else if ((you == 'g') && (comp == 's'))
    {
        return 1;
    }
    
    if ((you == 's') && (comp == 'w'))
    {
        return 1;
    }
    else if ((you == 'w') && (comp == 's'))
    {
        return -1;
    }

    if ((you == 'g') && (comp == 'w'))
    {
        return -1;
    }
    else if ((you == 'w') && (comp == 'g'))
    {
        return 1;
    }


}