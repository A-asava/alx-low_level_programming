#include "main.h"

/**
 *get_endianness - function checks for endiannes in  machine
 *Return: if big (0) if little (1)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	return (*ptr);
}
