/**
 * _strstr - Finds the first occurrence of a substring in a string
 * @haystack: Pointer to the string to search
 * @needle: Pointer to the substring to find
 *
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
char *p1, *p2, *p3;

	if (*needle == '\0')
	return (haystack);

	for (p1 = haystack; *p1 != '\0'; p1++)
{
		p2 = p1;
		p3 = needle;

	while (*p3 != '\0' && *p2 == *p3)
{
		p2++;
		p3++;
}

	if (*p3 == '\0')
		return (p1);
}

		return (0);
}

