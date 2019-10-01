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
	int div = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		div = (len - 1) / 2;
		for (i = div; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		div = len / 2;
		for (a = div; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
