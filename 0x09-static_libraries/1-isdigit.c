/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
int is_digit = 0;
int i;

/* Iterate over the digits 0 through 9 and check if c matches */
	for (i = 48; i <= 57; i++)
	{
	if (c == i)
	{
		is_digit = 1;
		break;
	}
	}

		return (is_digit);
}

