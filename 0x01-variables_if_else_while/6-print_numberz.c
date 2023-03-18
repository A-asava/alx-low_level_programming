#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit numbers of base 10
 *              starting from 0, followed by a new line, using only
 *              putchar().
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop from 0 to 9 and print each number using putchar() */
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	/* Print a newline character to move to the next line */
	putchar('\n');

	return (0);
}

