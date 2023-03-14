#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2d array
 * @grid: the array to free
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
