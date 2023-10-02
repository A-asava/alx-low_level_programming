#include "main.h"

/**
 *append_text_to_file - the function appends text at end of file
 *@filename: name of file thats appended
 *@text_content: string appended
 *
 *Return: (1) on success or (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);
	close(a);
	return (1);
}
