#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to allocate
 *
 * Return: a pointer to the allocated memory
 *         if malloc fails,function causes normal process to terminate
 *         with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

