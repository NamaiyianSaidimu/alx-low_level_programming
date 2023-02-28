#include "main.h"

/**
 * _strcpy - copying a string
 * @dest: destination string
 * @src: source string
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *str;

	str = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (str);
}
