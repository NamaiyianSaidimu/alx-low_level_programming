#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function on each element
 * @array: the array to use
 * @size: the array size
 * @action: the function pointer
 *
 * Description: It executes a function action on
 * each element in the given array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
