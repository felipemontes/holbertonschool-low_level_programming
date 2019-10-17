#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: variable
 * Return: On success 1.
 */
void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);
	if (mall == NULL)
	{
		exit(98);
	}
	return (mall);
}
