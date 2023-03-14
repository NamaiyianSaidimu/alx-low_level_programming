#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array
 * @width: array width
 * @height: array height
 *
 * Return: piinter to a 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array_2d;
	int i;
	int j;

	array_2d = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int *) * width);
	}
	if (array_2d == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array_2d[i][j] = 0;
			}
		}
		return (array_2d);
	}
	free(array_2d);
}
