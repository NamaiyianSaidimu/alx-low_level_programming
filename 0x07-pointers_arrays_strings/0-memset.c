#include "main.h"

/**
 * _memset - filling memory with constant byte
 * @s: A string, representing our memory area
 * @b: The constatn byte we will use
 * @n: The number of bytes to be filled
 *
 * Description: This function fills all the
 * first n bytes of te memory area with a
 * constant byte b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
