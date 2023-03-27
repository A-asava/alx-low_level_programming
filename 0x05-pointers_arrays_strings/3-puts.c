#include <stdio.h>
#include "main.h"


/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
