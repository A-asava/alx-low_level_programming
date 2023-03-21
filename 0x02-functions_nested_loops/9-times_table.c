#include "main.h"
#include <stdio.h>


/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, k;

	{
	for (i = 0; i < 10; i++)
	for (j = 0; j < 10; j++)
	{
		k = i * j;
	if (j == 0)
	{
	putchar('0');
	}
	else if (k < 10)
	{
		putchar(',');
		putchar(' ');
		putchar(' ');
		putchar(k + '0');
	}
	else
	{
		putchar(',');
		putchar(' ');
		putchar((k / 10) + '0');
		putchar((k % 10) + '0');
	}
	}
	putchar('\n');
	}
}

