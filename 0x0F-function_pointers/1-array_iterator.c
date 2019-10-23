#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function to executes a funtion
 * @array: array
 * @size: size of array
 * @action: function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
