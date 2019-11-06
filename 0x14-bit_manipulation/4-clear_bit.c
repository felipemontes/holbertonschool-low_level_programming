#include "holberton.h"
/**
 * clear_bit - function to set the value of a bit to 0
 * @n: number
 * @index: index number to be changed
 * Return: 1 if it worked or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 64)
	{
		return (-1);
	}
	while (i <= index)
	{
		*n = (*n & ~(1 << index));
		i++;
	}
	return (1);

}
