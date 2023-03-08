#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: The number whose factorial we need.
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
