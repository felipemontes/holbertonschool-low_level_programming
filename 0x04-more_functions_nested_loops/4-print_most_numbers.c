#include "holberton.h"
/**
 * print_most_numbers - prints some characters
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
