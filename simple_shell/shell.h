#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

#define MAX_PATH_LENGTH 1024
extern char **environ;
int main(void);
char *get_location(char *command);
void execmd(char **args);
void print_environment(void);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* SHELL_H */

