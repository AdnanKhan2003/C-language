// Q. 9 Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>
#include <string.h>
typedef struct date
{
    int date, month, year;
} dt;
int dtcmp(dt d1, dt d2);

int main()
{
    dt d1 = {2, 11, 23};
    dt d2 = {2, 11, 23};

    printf("Date = %d/%d/%d \n", d1.date, d1.month, d1.year);
    printf("Date = %d/%d/%d \n", d2.date, d2.month, d2.year);

    int dateRes = dtcmp(d1, d2);
    printf("Date Comparison returns: %d \n", dateRes);
    return 0;
}

int dtcmp(dt d1, dt d2)
{
    // Year Comparison:
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    // Month Comparison:
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    
    // Date Comparison:
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}