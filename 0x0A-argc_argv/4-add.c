#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - the entry point of the program
 * @argc: number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

/* Initialize the sum */
	sum = 0;

/* Check if there are arguments */
	if (argc == 1)
{
	printf("0\n");
	return (0);
}

/* Loop through the arguments */
	for (i = 1; i < argc; i++)
{
/* Check if the argument contains non-digit symbols */
	for (j = 0; argv[i][j]; j++)
{
	if (!isdigit(argv[i][j]))
{
		printf("Error\n");
		return (1);
}
}

/* Convert the argument to an integer and add it to the sum */
	sum += atoi(argv[i]);
}

/* Print the sum */
	printf("%d\n", sum);

	return (0);
}

