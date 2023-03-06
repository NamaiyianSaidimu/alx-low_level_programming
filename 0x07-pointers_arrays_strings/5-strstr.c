#include "main.h"

/**
 * _strstr - locating a substring
 * @haystack: our string
 * @needle: our substring
 *
 * Return: pointer to the beginning of located
 * substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		begin = haystack;
		pattern = needle;

		while (*haystack && *needle && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if ((!*pattern)
		{
			return (begin);
		}
		haystack = begin + 1;
	}
	return ("NULL");
}
