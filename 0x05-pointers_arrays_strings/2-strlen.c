#include "main.h"

/**
 * _strlen - returning the length of a string
 * @s: the pointer to a string
 *
 * Description: We are returning the length
 * of a string without using the standard library
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	for (c = *s; c != '\0'; i++)
	{
		j += 1;
	}
	return (j);
}
