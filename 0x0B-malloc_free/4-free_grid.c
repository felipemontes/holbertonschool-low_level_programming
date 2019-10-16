#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function to free memory
 * @grid: grid
 * @height: height of the array
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
