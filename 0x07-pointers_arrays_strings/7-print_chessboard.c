#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
			if (b == 7)
			{
				_putchar('\n');
			}
		}
	}
}
