#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to int
 * @b: number to convert
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0;
	int len = 0;
	int i = 0, a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}

	a = len - 1;
	for (; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		else
		{
			res += (b[a] - '0') << i;
			i++;
		}
	}

	return (res);
}
