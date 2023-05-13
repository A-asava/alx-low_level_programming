#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - The func prints an error message to stderr
 * and exits with provided code.
 * @code: The provided exit code.
 * @message: The error message to be printed.
 */
void error_exit(int code, char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - The func copies contents of a file into a different file.
 * @argc: Number of arguments that are passed to the program.
 * @argv: An array of strings containing the arguments passed to
 * the program.
 *
 * Return: on success (0).
 */
int main(int argc, char *argv[])
{
	int sourceFile, outputFile, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	error_exit(97, "Usage: cp sourceFile outputFile");

	sourceFile = open(argv[1], O_RDONLY);
	if (sourceFile == -1)
	error_exit(98, "Error: Can't read from file");

	outputFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (outputFile == -1)
	error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(sourceFile, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(outputFile, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
	error_exit(98, "Error: Can't read from file");

	if (close(sourceFile) == -1)
	error_exit(100, "Error: Can't close file descriptor");

	if (close(outputFile) == -1)
	error_exit(100, "Error: Can't close file descriptor");

	return (0);
}
