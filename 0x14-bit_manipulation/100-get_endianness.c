#include "main.h"

/**
 * get_endianness - checks if a machine is little endian
 * or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *p = (unsigned char *)&i;

	if (*p == 1)
	return (1);
	else
	return (0);
}
