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
	/* Finding the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	/* Pointing ptr to the last character of dest */
	ptr = dest + len;
	/* Adding src characters to dest */
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	/* Null terminator */
	*ptr = '\0';
	return (dest);
}
