#include "holberton.h"
/**
 * get_bit - function to return the given index
 * @index: index
 * @n: value
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 32)
	{
		return (-1);
	}
	while (i < index)
	{
		n = n >> 1;
		i++;
	}

	return (n & 1);
}
