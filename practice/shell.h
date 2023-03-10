#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/* builtin functions*/
int _len(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);

void *_realloc(void *ptr, unsigned int old, unsigned int newer);
char **splitter(char *str, char *delim);
#endif
