#include "holberton.h"
/**
 * print_number - function to print any interger
 *@n: variable
 * Return: void
 */
void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		number = number * -1;
		_putchar ('-');
	}
	if (n / 10)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}
