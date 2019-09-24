#include <ctype.h>

/**
 * _isalpha - checks for lower case characters
 * @c: character
 * Return: 1 if is lower or upper case.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
