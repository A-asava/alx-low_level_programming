#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[12];
    int days_in_feb;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days_in_feb = 29;
    }
    else
    {
        days_in_feb = 28;
    }
    days_in_month[0] = 31;
    days_in_month[1] = days_in_feb;
    days_in_month[2] = 31;
    days_in_month[3] = 30;
    days_in_month[4] = 31;
    days_in_month[5] = 30;
    days_in_month[6] = 31;
    days_in_month[7] = 31;
    days_in_month[8] = 30;
    days_in_month[9] = 31;
    days_in_month[10] = 30;
    days_in_month[11] = 31;

    int total_days = 0;
    for (int i = 0; i < month - 1; i++)
    {
        total_days += days_in_month[i];
    }
    total_days += day;

    if (days_in_feb == 29 && month > 2)
    {
        total_days--;
    }

    printf("Day of the year: %d\n", total_days);
}

