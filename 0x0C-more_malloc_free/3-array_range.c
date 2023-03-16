#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creating an array of ints
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i;
	int *int_array = malloc(sizeof(int) * (max - min + 1));

	if (int_array == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < max - min; i++)
		{
			int_arry[i] = i + min;
		}
		return (int_array);
	}
}
