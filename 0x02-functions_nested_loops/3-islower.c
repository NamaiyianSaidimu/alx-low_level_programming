#include "main.h"

/**
 * _islower - checking if a character is lowercase
 * @c: the character to be tested.
 *
 * description: A function that checks whether a
 * character c is lowercase.
 *
 * Return: 1 if it is lowercase
 * If not lowercase, 0 will be returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
