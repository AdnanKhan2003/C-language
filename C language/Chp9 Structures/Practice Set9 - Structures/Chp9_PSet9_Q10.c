// Q. 10 Solve problem 9 for time using typedef keyword. TIMESTAMP FORMAT

#include <stdio.h>
#include <string.h>
typedef struct dateTime
{
    int date, month, year, hour, minutes, seconds;
} dateTime;
int dateTimeCmp(dateTime d1, dateTime d2);

int main()
{
    dateTime d1 = {31, 01, 2022, 01, 05, 23};
    dateTime d2 = {31, 01, 2022, 01, 05, 23};

    printf("%d-%d-%d %d:%d:%d \n", d1.date, d1.month, d1.year, d1.hour, d1.minutes, d1.seconds);

    int dateComparison = dateTimeCmp(d1, d2);
    printf("Date & Time Comparison returns: %d \n", dateComparison);
    return 0;
}

int dateTimeCmp(dateTime d1, dateTime d2)
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
    
    // Hour Comparison:
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }
    
    // Minutes Comparison:
    if (d1.minutes > d2.minutes)
    {
        return 1;
    }
    if (d1.minutes < d2.minutes)
    {
        return -1;
    }
    
    // Seconds Comparison:
    if (d1.seconds > d2.seconds)
    {
        return 1;
    }
    if (d1.seconds < d2.seconds)
    {
        return -1;
    }
    return 0;
}