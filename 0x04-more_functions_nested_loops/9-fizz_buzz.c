#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100. For multiples of three,
 *              print Fizz instead of the number. For multiples of five,
 *              print Buzz instead of the number. For multiples of both
 *              three and five, print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");

	return (0);
}

