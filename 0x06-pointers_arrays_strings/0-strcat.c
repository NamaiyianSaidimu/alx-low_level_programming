#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to be appended
 * @src: the string to add to dest
 *
 * Description: Function appends the src string
 * to the dest string, overwriting thenull byte
 * at the end of dest andadding a terminating
 * null byte
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;
	char *ptr;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	ptr = dest + len;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
