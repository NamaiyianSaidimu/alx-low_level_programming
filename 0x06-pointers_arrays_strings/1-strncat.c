#include "main.h"

/**
 * _strncat - concatenating two strings
 * @dest: the string to be appended to
 * @src: the string to be added to dest
 * @n: number of src characters to append
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	ptr = dest + len;


	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
