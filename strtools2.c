#include "main.h"

/**
 * _puts - functiont to write strinng to standard out
 * @str: string to write
 */

void _puts(char *str)
{
	while (*str  != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * prstr - prints strings from arg
 * @args: argument pointer
 *
 * Return: count of string elements printed
 */
int prstr(va_list *args)
{
	int x = 0;
	char *ar;

	ar = va_arg(*args, char *);
	while (*ar != '\0')
	{
		_putchar(*ar);
		x++;
		ar++;
	}
	return (x);
}
/**
 * _putchar - writes the character c to sterr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(2, &c, 1));
}

/**
 * numcount - function to count number of tokens that will be created
 * @line: input to check number of tokens to make out of
 * Return: number of tokens to make
 */

int numcount(char *line)
{
	int num_tokens = 0, i, check = 1;

	for (i = 0; line[i]; i++)
	{
		if (line[i] == ' ' || line[i] == 10 || line[i] == '\t')
			check = 1;
		else if (check == 1)
		{
			check = 0;
			++num_tokens;
		}
	}
	return (num_tokens);
}
