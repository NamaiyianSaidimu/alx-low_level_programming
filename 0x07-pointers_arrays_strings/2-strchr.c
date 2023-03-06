#include "main.h"

/**
 * _strchr - locating a character in a string
 * @s: our string
 * @c: character to be located
 *
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ("NULL");
}
