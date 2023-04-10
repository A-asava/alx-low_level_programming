#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

/* Check if program recieved two arguments */
	if (argc != 3)
{
	printf("Error\n");
	return (1);
}

/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

/* Multiply the numbers */
	result = num1 * num2;

/* Print the result */
	printf("%d\n", result);

	return (0);
}

