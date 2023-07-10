#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * to get from one number to another number
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_diff_count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		bit_diff_count += diff & 1;
		diff >>= 1;
	}

	return (bit_diff_count);
}
