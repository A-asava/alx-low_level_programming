#include "main.h"
#include <stdio.h>

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
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 365;
	int day_of_year = day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
	days_in_month[1] = 29;
	total_days = 366;
	}

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	return;
	}

	for (int i = 0; i < month - 1; i++)
	{
	day_of_year += days_in_month[i];
	}

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", total_days - day_of_year);
}

