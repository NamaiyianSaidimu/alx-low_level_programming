#include "main.h"

/**
 * _sqrt_recursion - finding a digit's sqrt
 * @n: The perfect square
 *
 * Description: A function to return the
 * natural square root of a number
 *
 * Return: Natural square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1)
	{
		return (1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
	return (_sqrt_recursion(i + 1));
}
