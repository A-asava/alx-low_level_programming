/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @s: Pointer to the string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
{
		s[i] -= 'a' - 'A';
}
}

	return (s);
}

