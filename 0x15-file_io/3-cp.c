#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 *create_buffer -funtion allocates bytes for the buffer
 *@file: name of a file
 *Return: pointer to the new alloc'd buffer
 */

char *create_buffer(char *file)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (ptr);
}

/**
 *close_file - closes file descriptor
 *@fd: the file descriptor thats closed
 */

void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - function copy content of file into new file
 *@argc: number of arguments supplied
 *@argv: array of arguments supplied
 *
 *Return: on success returns (0)
 */

int main(int argc, char *argv[])
{
	int from, to, rd, w;
	char *ptr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, ptr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(ptr);
			exit(98);
		}
		w = write(to, ptr, rd);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(ptr);
			exit(99);
		}
		rd  = read(from, ptr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(ptr);
	close_file(from);
	close_file(to);

	return (0);
}
