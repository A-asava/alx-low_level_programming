#include "main.h"

/**
 *read_textfile -  reads a text file
 *@filename: text file that is read
 *@letters: number letters to be read
 *
 *Return: number bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, w;
	char *ptr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	rd = read(fd, ptr, letters);
	w = write(STDOUT_FILENO, ptr, rd);
	free(ptr);
	close(fd);
	return (w);
}
