#include "holberton.h"
/**
 * _isdigit - checks for digits
 * @c: character to check
 * Return: 1 if is a digit
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
