#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - copy of a string in parameter
 * @str: the string to copy
 *
 * Description: A function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * Return: NULL on failure, pointer on success
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i;
	unsigned int length = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}

	duplicate = malloc(length + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= length + 1; i++)
		{
			duplicate[i] = *(str + i);
		}
		return (duplicate);
	}
	free(duplicate);
}
