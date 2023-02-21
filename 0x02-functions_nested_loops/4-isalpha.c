#include "main.h"

/**
 * _isalpha - A function that checks for
 * alphabetic character.
 *
 * description: The program determines whether
 * a character c is an alphabet.
 *
 * Return: 1 if c is a letter.
 * Otherwise 0 will be returned.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
