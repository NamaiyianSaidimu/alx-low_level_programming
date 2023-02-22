#include "main.h"

/**
 * _abs - function for absolute values.
 * @n - the variable that will store the
 * number to be tested.
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
