#include "main.h"

/**
 *clear_bit - sets the value of a given bit
 *@n: pointer
 *@index: position
 *Return: (1) on success and (-1) otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
