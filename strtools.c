#include "main.h"

/**
 * _strcpy - copies str from src to dest
 * @src: source string
 * @dest: destination string
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	if (dest == NULL)
		return (NULL);
	else if (src == NULL)
		return (dest);

	for (len = 0; *(src + len) != 0; len++)
		;

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 on success, -1 on fail
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (-1);
	}
	return (0);
}

/**
 * _strncmp - function to compare strings
 * @s1: first string to compare
 * @s2: second string to compare
 * @len: length of string to compare
 * Return: 0 for success
 */

int _strncmp(char *s1, char *s2, int len)
{
	for (; *s1 && *s2 && len >= 0; len--)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (-1);
	}
	return (0);
}
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (*(src + len1) != '\0')
	{
		len1++;
	}

	while (*(dest + len2) != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len1; i++)
	{
		*(dest + (len2 + i)) = *(src + i);
	}
	return (dest);
}
/**
 * _strdup - duplicates one string into another
 * @str: the string to be duplicated
 *
 * Return: a pointer to a duplicate of the string
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; *(str + size) != '\0'; size++)
		;
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
