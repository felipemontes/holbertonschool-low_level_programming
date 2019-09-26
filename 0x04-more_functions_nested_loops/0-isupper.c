#include "holberton.h"
/**
 * _isupper - checks for upper case character
 * @c: character to check
 * Return: 1 if uppercase
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
