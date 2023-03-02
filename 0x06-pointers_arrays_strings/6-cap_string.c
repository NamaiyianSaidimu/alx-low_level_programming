#include "main.h"

/**
 * cap_string - capitalizing all words in a string
 * @s: String to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i;
	char *ptr = s;
	char separators[] = " \t\n,;!?\"(){}";
	int cap = 1;

	while (*s)
	{
		if (cap && *s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*s == separators[i])
			{
				cap = 1;
			}
		}
		s++;
	}
	return (ptr);
}
