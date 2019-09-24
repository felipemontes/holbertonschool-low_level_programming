#include <stdio.h>

/**
 * print_last_digit - writes the character c to stdout
 * @n: char
 *
 * Return: last digit of a number
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	n = n % 10;
        return (n);
}
