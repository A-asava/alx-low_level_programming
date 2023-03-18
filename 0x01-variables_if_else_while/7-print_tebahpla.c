#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              followed by a new line, using only putchar().
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter; /* declare a variable to hold the current letter */

	/* loop over the lowercase alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter); /* print the current letter using putchar() */

	putchar('\n'); /* print a newline character */

	return (0); /* return 0 to indicate successful program completion */
}

