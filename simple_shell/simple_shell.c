#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry point of the shell program
 *
 * Description: This is the main entry point of the shell program.
 *
 * It collects user input, parses it into tokens, and executes the commands.
 *
 * It displays shell prompt, enabling the user to enter commands for execution.
 *
 * This shell supports built-in command like "exit" and "env", and it can execute
 *
 * other shell commands by forking a child process and using the execve system call.
 *
 * Return: Always (0)
 */

int main(void)
{
	char *shellPrompt = "$ ";
	char *inputLine = NULL;
	char *inputLineCopy = NULL;
	size_t bufferSize = 0;
	ssize_t numCharsRead;
	const char *delimiter = " \n";
	int numTokens = 0;
	char *currentToken;
	int index;
	int i;
	char **args = 0;

	while (1)
	{
		bufferSize = 0;
		write(STDOUT_FILENO, shellPrompt, strlen(shellPrompt));
		numCharsRead = getline(&inputLine, &bufferSize, stdin);

		if (inputLine == NULL)
		{
			perror("Shell Error: memory allocation");
			break;
		}

		if (numCharsRead == -1)
		{
			write(STDOUT_FILENO, "Shell Exiting...\n", 18);
			break;
		}

		inputLineCopy = malloc(sizeof(char) * (numCharsRead + 1));
		if (inputLineCopy == NULL)
		{
			perror("Shell Error: memory allocation");
			break;
		}

		_strcpy(inputLineCopy, inputLine);

		currentToken = strtok(inputLine, delimiter);
		while (currentToken != NULL)
		{
			numTokens++;
			currentToken = strtok(NULL, delimiter);
		}
		numTokens++;

		args = (char **)malloc(sizeof(char *) * numTokens);
		currentToken = strtok(inputLineCopy, delimiter);
		for (index = 0; currentToken != NULL; index++)
		{
			args[index] = malloc(sizeof(char) * (_strlen(currentToken) + 1));
			_strcpy(args[index], currentToken);
			currentToken = strtok(NULL, delimiter);
		}
		args[index] = NULL;

		if (args != NULL && args[0] != NULL)
		{
			if (_strcmp(args[0], "exit") == 0)
			{
				write(STDOUT_FILENO, "Exiting shell...\n", 17);
				break;
			}
			else if (_strcmp(args[0], "env") == 0)
			{
				print_environment();
			}
			else
			{
				execmd(args);
			}
		}

		for (i = 0; i < numTokens; i++)
		{
			if (args[i] != NULL)
			{
				free(args[i]);
				args[i] = NULL;
			}
		}
		free(args);
		free(inputLineCopy);
	}

	free(inputLine);
	return (0);
}

