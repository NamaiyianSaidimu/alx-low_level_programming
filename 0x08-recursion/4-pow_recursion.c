#include "main.h"

/**
 * _pow_recursion - integer x to power y
 * @x: Our base integer
 * @y: The power of x
 *
 * Description: The function returns the
 * value of x raised to the power of y
 *
 * Return: x to power of y
 */
int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	/* A control case */
	if (y < 0)
	{
		return (-1);
	}
	/* Calling the function recursively */
	return (x * _pow_recursion(x, y - 1));
}
