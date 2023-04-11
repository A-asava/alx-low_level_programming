#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Creates array of chars,initializes it with specific char
 * @size: The size of the array
 * @c: The specific char to initialize the array with
 *
 * Return: If size is zero or if memory allocation fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (arr);
}

