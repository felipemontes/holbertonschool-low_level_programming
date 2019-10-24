#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers
 * @separator: string to be printes between numbers
 * @n: numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		int let = va_arg(arg, int);

		if (i == n - 1)
		{
			printf("%d", let);
		}
		else
		{
			printf("%d%c ", let, *separator);
		}
	}
	printf("\n");
	va_end(arg);
}
