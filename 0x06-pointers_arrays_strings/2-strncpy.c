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
	/* Initialize a pointer pointing to the start of dest */
	char *ptr = dest;
	/* copy first n characters pointed by src to array */
	/* pointed by dest */
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* Null terminate dest */
	*dest = '\0';

	return (ptr);
}
