#include "main.h"

/**
 *flip_bits - function counts number of bits expected to change
 *@n: first number
 *@m: second number
 *Return: number of bit changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, idx;
	unsigned long int curr;
	unsigned long int result = n ^ m;

	for (idx = 63 ; idx >= 0 ; idx--)
	{
		curr = result >> idx;
		if (curr & 1)
			count++;
	}
	return (count);
}
