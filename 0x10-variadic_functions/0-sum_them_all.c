#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to sum a list
 * @n: numbers to sum
 * Return: result
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list lst;

	va_start(lst, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int n = va_arg(lst, int);

		sum += n;
	}
	va_end(lst);
	return (sum);
}
