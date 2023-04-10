 #include "main.h"


/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
/*
 * Check if c is within the ASCII range of uppercase letters,
 * which is between 'A' and 'Z' (inclusive).
 */
	if (c >= 'A')
	{
	if (c <= 'Z')
		return (1); /* c is uppercase */
	}
		return (0); /* c is not uppercase */
}

