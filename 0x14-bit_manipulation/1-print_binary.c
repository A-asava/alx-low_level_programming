#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints binary equivalent to a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << 63;
	int found_bit = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			found_bit = 1;
		}
		else if (found_bit)
			_putchar('0');

		mask >>= 1;
	}

	if (!found_bit)
		_putchar('0');
}

