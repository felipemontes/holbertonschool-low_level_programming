#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - checks for lower case characters
 * @n: character
 * Return: the sign of a number
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
