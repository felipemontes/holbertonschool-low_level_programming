#include "holberton.h"
/**
 * _strpbrk - searches for a string
 * @s: string
 * @accept: char to match
 * Return: pointer to the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int b;

	while (s[i] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[i] == accept[b])
			{
				return (s + i);
			}
			b++;
		}
		i++;
	}
	return (0);
}
