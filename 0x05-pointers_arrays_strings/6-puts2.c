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

	for (i = 0; str[i] != '\0'; i += 2)
{
	_putchar(str[i]);
}
	_putchar('\0');
	_putchar('\n');
}

