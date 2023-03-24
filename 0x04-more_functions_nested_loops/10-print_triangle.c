#include "main.h"

/**
 * print_triangle - prints a triangle of "#" characters of given size
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 1; i <= size; i++)
	{
	for (j = size; j > 0; j--)
	{
		if (j <= i)
		_putchar('#');
			else
			_putchar(' ');
	}
	_putchar('\n');
	}
}

