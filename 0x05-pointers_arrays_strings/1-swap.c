#include "holberton.h"
/**
 * swap_int - swap value of two intergers
 * @a: var1
 * @b: var2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
