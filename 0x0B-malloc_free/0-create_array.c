#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creating an array of chars
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Description: A function that creates an array
 * of chars, and initializes it with a specific char
 *
 * Return: NULL if size is zero, otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array[0] = c;
	}
	return (array);
}
