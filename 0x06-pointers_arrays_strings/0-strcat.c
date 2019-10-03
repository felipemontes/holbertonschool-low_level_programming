#include "holberton.h"
/**
 * *_strcat - writes the character c to stdout
 * @dest: the dest
 * @src: the src
 * Return: On success 1.
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (a);
}
