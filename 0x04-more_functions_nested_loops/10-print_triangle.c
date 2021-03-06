#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1 ; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
