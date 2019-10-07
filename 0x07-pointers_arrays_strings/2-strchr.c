#include "holberton.h"
/**
 * *_strchr -locates a character in a string
 * @s: string
 * @c: char to locate
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == '\0')
		{
			return (0);
		}
	}
	return (0);
}
