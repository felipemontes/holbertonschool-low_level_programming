#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	char b;

	for (i = 0; str[i] != '\0' ; i += 2)
	{
		b = str[i];
		_putchar(b);
	}
	_putchar('\n');
}
