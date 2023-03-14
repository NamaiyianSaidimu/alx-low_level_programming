#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenating two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space,
 * on error NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int length_s1 = 0;
	int length_s2 = 0;
	int new_length;

	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length_s2++;
	}
	new_length = length_s1 + length_s2 + 1;
	new_string = malloc(new_length);
	if (new_string == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	else
	{
		for (i = 0; i < length_s1; i++)
		{
			*(new_string + i) = *(s1 + i);
		}
		for (i = length_s1; i < new_length; i++)
		{
			*(new_string + i) = *(s2 + (i - length_s1));
		}
		return (new_string);
	}
}
