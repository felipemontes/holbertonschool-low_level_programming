#include <stdio.h>

/**
 * _abs - writes the character c to stdout
 * @n: character
 *
 * Return: absolute value
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
