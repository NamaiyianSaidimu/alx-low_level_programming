#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searching for an integer
 * @array: Our array of integers
 * @size: Our array's size
 * @cmp: Pointer to our function
 *
 * Description: This function compares the
 * array values
 *
 * Return: index of the first element that does
 * not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
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
