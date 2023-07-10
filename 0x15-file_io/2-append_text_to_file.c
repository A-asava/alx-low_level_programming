#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file -The func appends text at end of a file.
 * @filename: Pointer to name of the file.(path)
 * @text_content: String that is added to end of the file.
 *
 * Return: (-1) If the function fails or filename is NULL.
 *         (-1) If the file does not exist or the user lacks write permissions.
 *         Otherwise - (1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, w, lenth = 0;

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

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
	return (-1);

	w = write(fileDesc, text_content, lenth);
	if (w == -1)
	{
	close(fileDesc);
	return (-1);
	}

	close(fileDesc);
	return (1);
}
