#include "main.h"

/**
 * get_bit - it returns value of a bit at an index within a  decimal number
 * @n: number to be searched
 * @index: index of bit
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	return (-1);

	return ((n & (1UL << index)) ? 1 : 0);
}

