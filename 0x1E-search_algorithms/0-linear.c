#include "search_algos.h"
/**
 * linear_search - searches for a value
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index or -1 if don't find the value
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
