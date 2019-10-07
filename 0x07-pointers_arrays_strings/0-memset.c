#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: constant to use
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *str = (char *)s;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}
	return (str);
}
