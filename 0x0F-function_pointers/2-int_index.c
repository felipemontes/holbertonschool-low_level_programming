#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @size: size of the array
 * @array: array
 * @cmp: pointer to the function
 * Return: the index of the first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);

}
