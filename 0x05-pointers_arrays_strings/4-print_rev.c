#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int b;

	while (s[i] != '\0')
	{
		i++;
	}
	b = i - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
