#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: dest
 * @src: src
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = (char *)dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (d);
}
