#include "holberton.h"
/**
 * print_line - prints lines in the terminal
 * @n: number of lines to print
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
