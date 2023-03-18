#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line,
 * excluding the letters q and e, using the putchar function only twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}

