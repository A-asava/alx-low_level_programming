#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all single digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop from 0 to 9 and print each number */
	for (i = 0; i < 10; i++)
		printf("%d", i);

	/* Print a newline character to move to the next line */
	printf("\n");

	return (0);
}

