#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using only putchar().
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit; /* declare a variable to hold the current digit */

	/* loop over the digits 0-9 and letters a-f */
	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit); /* print the current digit using putchar() */

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit); /* print the current digit using putchar() */

	putchar('\n'); /* print a newline character */

	return (0); /* return 0 to indicate successful program completion */
}

