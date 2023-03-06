#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be compared
 * @accept: the comparing string
 *
 * Description: Returns the number of bytes in the
 * initial segment of s which consists only of
 * bytes from accept
 *
 * Return: integer showing the common bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int s_length = 0;
	int accept_length = 0;
	int span = 0;
	/* Finding the length of s */
	for (i = 0; s[i] != '\0'; i++)
	{
		s_length++;
	}
	/* Finding the length of accept */
	for (i = 0; accept[i] != '\0'; i++)
	{
		accept_length++;
	}
	/* Finding matching bytes */
	for (i = 0; i < accept_length; i++)
	{
		for (j = 0; j < s_length; j++)
		{
			if (accept[i] == s[j])
			{
				span++;
			}
		}
	}
	return (span);
}
