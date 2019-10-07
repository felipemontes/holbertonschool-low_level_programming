#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square
 * @a: array
 * @size: size of the diagonal
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	long int sum = 0;
	long int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += *(a + i * size + j);
			}
			if (i == (size - 1) - j)
			{
				sum1 += *(a + i * size + j);
			}
		}
	}
	printf("%li, %li\n", sum, sum1);
}
