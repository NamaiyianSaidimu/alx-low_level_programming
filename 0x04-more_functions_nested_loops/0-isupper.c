/**
 * File: 0-isupper.c
 * Author: NamaiyianSaidimu
 */

#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: character to be evaluated.
 *
 * Description: A character c is passed in the function
 * and the function checks whether it is uppercase of
 * lowercase.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
