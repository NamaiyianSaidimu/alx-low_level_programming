#include "main.h"

/**
 * _abs - function for absolute values.
 *
 * description: It computes the absolute value
 * of a number.
 *
 * Return: absolute values.
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
