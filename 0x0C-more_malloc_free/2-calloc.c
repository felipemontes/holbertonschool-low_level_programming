#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function to allocate memory using malloc
 * @nmemb: elements
 * @size: number of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;
	unsigned int b;

	b = size * nmemb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(b);

	for (i = 0; i < b; i++)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		str[i] = 0;
	}
	return (str);
}
