#include "search_algos.h"
/**
 * binary_search - searches for a value
 * @array: pointer to first element
 * @size: size of the array
 * @value: value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int low = 0;
	int high = size - 1;
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d", array[i]);
			}
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (value < array[mid])
		{
			high = mid - 1;
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value == array[mid])
		{
			return (mid);
		}
	}
	return (-1);
}
