#include "main.h"

/**
 * print_sign - A function that prints
 * the sign of a number.
 *
 * description: It prints different statements
 * depending on whether the number is positive,
 * zero or negative.
 *
 * Return: 1 if n is greater than zero.
 * when zero, 0 will be returned.
 * -1 when the number is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
