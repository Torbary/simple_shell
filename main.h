#ifndef MAIN_H
#define MAIN_H

/* HEADER FILES */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <limits.h>
#include <dirent.h>
#include <stdarg.h>
#include <errno.h>

/*-- ENVIRONMENT --*/

extern char **environ;

/* STRUCTS */

/**
 * struct fmt - types of data and their function
 * @ltr: the type of data
 * @type: pointer to function for type
 */
typedef struct fmt
{
	char *ltr;
	int (*type)();
} fmt;

/* helper functions */

void _puts(char *str);

char *_strdup(char *str);

char *_strcat(char *dest, char *src);

int _strcmp(char *s1, char *s2);

int _strncmp(char *s1, char *s2, int len);

int _putchar(char c);

int _printf(const char *format, ...);

/*Neccessary Functions*/

int parse(char *line, int num_tokens, char *argv[], int failcount);

int exe(char *line, char **ar, char *nln, char **arry, char **argv, int flcnt);

void myfree(char *line, char **ar, char *newline, char **array);

int checkbltin(char *line, char **ar, char *newline, char **array);

int numcount(char *line);

int chkfmt(va_list *args, const char *format, int i);

int prchr(va_list *args);

int prstr(va_list *args);

int prdgt(va_list *args);

void getdigits(int n);

void changedir(char **ar);

/*PATH manipulation Functions*/

int searchpath(char *p, char **tokens);

int findonpath(char **tokens);

void executepath(char *p, char **tokens);

#endif /* MAIN_H*/
