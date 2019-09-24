#include <ctype.h>

/**
 * _islower - checks for lower case characters
 * @c: character
 * Return: 1 if lowercase
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
