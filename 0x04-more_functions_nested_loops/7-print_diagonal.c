#include "holberton.h"
/**
 * print_diagonal - prints lines in the terminal
 * @n: number of diagonals to print
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int a;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= n; ++a)
	{
		for (b = 1; b <= n; ++b)
		{
			if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
