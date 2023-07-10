#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary numbers or number
 * to unsigned int
 *
 * @b: the string that contains the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_value = 0;

	if (!b)
	return (0);

	for (i = 0; b[i]; i++)
{
	if (b[i] < '0' || b[i] > '1')
	return (0);
	d_value = (d_value << 1) | (b[i] - '0');
}

	return (d_value);
}

