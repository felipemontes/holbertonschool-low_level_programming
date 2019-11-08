#include "holberton.h"
/**
 * flip_bits - number of bits to flip
 * @n: number
 * @m: the other number
 * Return: the number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, iter;

	res = n ^ m;
	iter = 0;

	while (res != 0)
	{
		iter += res & 1;
		res = res >> 1;
	}
	return (iter);
}
