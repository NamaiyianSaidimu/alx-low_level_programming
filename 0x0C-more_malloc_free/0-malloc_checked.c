#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocating memory using malloc
 * @b: memory allocated
 *
 * Return: pointer to the allocaed memory
 */

void *malloc_checked(unsigned int b)
{
	void *new_array;

	new_array = malloc(b);
	if (new_array == NULL)
	{
		exit(98);
	}
	return (new_array);
}
