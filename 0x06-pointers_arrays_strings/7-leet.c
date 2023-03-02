#include "main.h"

/**
 * leet - encoding string characters
 * @s: string to be encoded using 1337
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i;
	char *new = s;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] + 32)
			{
				*s = numbers[i] + '0';
			}
		}
		s++;
	}
	return (new);
}
