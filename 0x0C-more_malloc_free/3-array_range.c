#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array pf intergers
 * @min: min number
 * @max: max num
 * Return: void
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min;

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		array[i] = min++;
	}
	return (array);
}
