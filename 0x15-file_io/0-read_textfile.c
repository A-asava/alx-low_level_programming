#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - The func reads text files and prints to the STDOUT.
 * @filename: The name of text file that is read.
 * @letters: Count of the number of letters that are read.
 * Return: The number of bytes read & printed,
 * or 0 on failure or NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t bytes_read = 0;
	ssize_t written_bytes = 0;
	char *buffer = NULL;

	if (filename == NULL)
	return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
{
	close(file_d);
	return (0);
}

	bytes_read = read(file_d, buffer, letters);
	if (bytes_read == -1)
{
	free(buffer);
	close(file_d);
	return (0);
}

	written_bytes = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_d);

	return (written_bytes);
}

