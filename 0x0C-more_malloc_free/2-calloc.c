#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocating memory of an array
 * @nmemb: number of array elements
 * @size: number of bytes in each element
 *
 * Description: The function allocates memory
 * to an array of nmemb elements of size bytes,
 * initializing the memory to zero
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *new_array;

	new_array = (int *)malloc(sizeof(size) * nmemb);
	if (new_array == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{
			new_array[i] = 0;
		}
		return (new_array);
	}
}
