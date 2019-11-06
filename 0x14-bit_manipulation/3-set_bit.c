#include "holberton.h"
/**
 * set_bit - function to set the value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 if it works or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 32)
	{
		return (-1);
	}
	while (i <= index)
	{
		*n = (*n | 1 << index);
		i++;
	}

	return (1);
}
