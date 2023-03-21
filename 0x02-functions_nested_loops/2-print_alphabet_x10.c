#include "main.h"


/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}

