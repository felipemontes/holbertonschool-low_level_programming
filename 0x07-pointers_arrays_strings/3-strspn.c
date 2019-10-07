#include "holberton.h"
/**
 * _strspn - gets the length of a prefix
 * @s: string
 * @accept: characters to match
 * Return: numbers of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; s[i] != accept[n]; n++)
		{
			if (accept[n] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
