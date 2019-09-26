#include "holberton.h"
/**
 * mul - multiplies two intergers
 * @a: interger to multiply
 * @b: second interger
 * Return: 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	int c = 0;

	c = a * b;
	return (c);
}
