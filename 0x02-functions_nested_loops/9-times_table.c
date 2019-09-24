#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int a = 0;
	int b;
	int c;

	while(a < 10 )
	{
		_putchar('0');
		b = 1;
		while(b < 10)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b++;
			if (c < 10)
			{
			_putchar(' ');
			_putchar(c + '0');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
		a++;
	}
}
