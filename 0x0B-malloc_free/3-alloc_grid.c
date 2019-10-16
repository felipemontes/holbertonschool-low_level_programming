#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - return a pointer of a two dim
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of a 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, b;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			grid[i][b] = 0;
		}
	}
	return (grid);
}
