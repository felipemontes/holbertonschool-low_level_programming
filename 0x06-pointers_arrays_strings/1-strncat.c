#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest
 * @src: src
 * @n: amout of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;
	int i;
	int len;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (a);
}
