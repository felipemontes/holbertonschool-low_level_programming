#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: char
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
		printf("%d", n);
		if (n == 98)
		{
		}
		else
		{
			printf(", ");
		}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
		printf("%d", n);
		if (n == 98)
		{
		}
		else
		{
			printf(", ");
		}
		}
	}
printf("\n");
}
