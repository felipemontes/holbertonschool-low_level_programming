#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: specific char
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *A;

	A = malloc(size * sizeof(char));

	while (i < size)
	{
		A[i] = c;
		i++;
	}

	return (A);
}
