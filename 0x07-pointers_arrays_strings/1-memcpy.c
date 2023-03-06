#include "main.h"

/**
 * _memcpy - copying memory area
 * @dest: Our destination string
 * @src: Our source string
 * @n: number of bytes  to be copied
 *
 * Description: The function copies n bytes of
 * memory area src to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination;
	char *source;

	source = src;
	destination = dest;

	/* Finding the length of dest */
	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
}
