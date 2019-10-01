#include "holberton.h"
/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int a;
	int div;

	while (str[len] != '\0')
	{
		len++;
	}
	div = len / 2;
	if (len % 2 == 1)
	{
		div = div - 1;
		for (i = div; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (a = div; a < len; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
