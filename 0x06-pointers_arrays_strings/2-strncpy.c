#include "main.h"

/**
 * _strncpy - copying a string
 * @dest: the copied string
 * @src: the string to be copied
 * @n: bytes of src to be copied
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	ptr = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
