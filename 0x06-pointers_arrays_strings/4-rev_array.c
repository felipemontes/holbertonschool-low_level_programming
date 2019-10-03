#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int div;
	int temp;
	int i;

	div = n / 2;
	for (i = 0; i < div; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
