#include "holberton.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		c++;
		str++;
	}
	_putchar('\n');
}
