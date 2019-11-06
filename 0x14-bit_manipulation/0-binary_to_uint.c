#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to int
 * @b: number to convert
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, rem = 0, base = 1;
	int bin;
	unsigned int i = 0;

	bin = atoi(b);
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
			rem = bin % 10;
			dec = dec + rem * base;
			bin = bin / 10;
			base = base * 2;
			i++;
	}

	return (dec);
}
