#include "main.h"
#include <stdio.h>


/**
 * puts2 - prints every other character of a string,from first character
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	_putchar(str[i]);
	i++;
}
	_putchar('\n');
}

