#include "main.h"

/**
 *get_bit - returns a valu of a bit given index
 *@n: number
 *@index: position of the bit
 *Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	value = (n >> index) & 1;

	return (value);
}
