#include "holberton.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
