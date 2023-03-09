#include "main.h"
int equal_char(char *s, int start, int end);
int _strlen(char *s);
int is_palindrome(char *s);
/**
 * _strlen - length of a string
 * @s: the string we have
 *
 * Description: This function computes the
 * length of a given string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * equal_char - chacking equality of string characters
 * @s: the string we have
 * @start: Our first index
 * @end: Our last index
 *
 * Description: It checks whether string characters are
 * equal, starting with the two at the ends
 *
 * Return: 1 if equal, 0 otherwise.
 */
int equal_char(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (equal_char(s, start + 1, end - 1));
}

/**
 * is_palindrome - palindrome check.
 * @s: the string to be checked
 *
 * Description: A function that checks
 * whether a given string is a palindrome
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n = _strlen(s) - 1;

	return (equal_char(s, 0, n));
}
