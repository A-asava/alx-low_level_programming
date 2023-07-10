#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - it sets a given bit's value to 0
 * @n: pointer to number to be changed
 * @index: index of the bit that is cleared
 *
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}

