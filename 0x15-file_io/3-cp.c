#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_Buffer(char *file);
void close_file(int file_d);

/**
 * create_Buffer - The func allocates bytes for a buffer (1024).
 * @file: Name of the file buffer is storing characters for.
 *
 * Return: Pointer to our newly-allocated buffer.
 */
char *create_Buffer(char *file)
{
	char *Buffer;

	Buffer = malloc(sizeof(char) * 1024);

	if (Buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (Buffer);
}

/**
 * close_file - This func Closes file descriptors.
 * @file_d: File descriptor to be closed.
 */
void close_file(int file_d)
{
	int c;

	c = close(file_d);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d);
		exit(100);
	}
}

/**
 * main - The function copies contents of a file into a different file.
 * @argc: Number of arguments taken by the program.
 * @argv: Array of pointers to the arguments taken by the program
 *
 * Return:  on success (0)
 *
 * Description: In the case argument count is incorrect - exit code 97.
 * In case file_from does not exist | cannot be read - exit code 98.
 * In case file_to can't be created | written into - exit code 99.
 * In case file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int to, from, w, r;
	char *Buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	Buffer = create_Buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, Buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(Buffer);
			exit(98);
		}

		w = write(to, Buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(Buffer);
			exit(99);
		}

		r = read(from, Buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(Buffer);
	close_file(from);
	close_file(to);

	return (0);
}
