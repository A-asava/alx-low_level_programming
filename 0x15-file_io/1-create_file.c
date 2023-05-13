#include "main.h"
#include <unistd.h>

/**
 * create_file - The function Creates files.
 * @filename: Pointer to name of file to be created.
 * @text_content: Pointer to a string that is writen to the file.
 *
 * Return: (-1) If the function fails.
 *         (1) Otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t w, lenth = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	char *ptr = text_content;

	while (*ptr != '\0')
	{
	lenth++;
	ptr++;
	}
	}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
	return (-1);

	w = write(file_d, text_content, lenth);
	if (w == -1)
	{
	close(file_d);
	return (-1);
	}

	close(file_d);
	return (1);
}
