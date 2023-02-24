#include "main.h"

/**
 * is_upper - function that checks for uppercase
 * characters
 * @c: character to be evaluated.
 * Return: 1 if c is uppercase
 * Otherwise, 0 is returned.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
