#include "holberton.h"
/**
 * print_square - prints squares in the terminal
 * @size: number of lines to print
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
        int a;
	int b;

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
		for( a = 1; a <= size; a++)
		{
			for(b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
        }
}
