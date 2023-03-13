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
	/*unsigned int i = 0;*/

	duplicate = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		duplicate = str;
		return (duplicate);
	}
	free(duplicate);
}
