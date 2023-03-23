#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9) /* print the 1st digit */
	_putchar(j / 10 + '0');
	_putchar(j % 10 + '0'); /* print the 2nd digit */
	}
	_putchar('\n');
	}
}

