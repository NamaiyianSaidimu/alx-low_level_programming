#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates 2 string
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to concatenate with
 *
 * Return: pointer to the new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final_array;
	unsigned long int i;
	unsigned long int j;

	final_array = malloc(sizeof(s1) + (sizeof(char) * n));
	if (final_array == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (i = 0; i < sizeof(s1); i++)
		{
			final_array[i] = s1[i];
		}
		for (j = sizeof(s1); j < (sizeof(s1) + n); j++)
		{
			final_array[j] = s2[(sizeof(s1) + n) - sizeof(s1)];
		}
	}
	return (final_array);

}
