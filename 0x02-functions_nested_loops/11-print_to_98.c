#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - print n to 98
 * @n: the starting integer we will print
 *
 * Description: We are printing all natural numbers
 * from n to 98
 *
 * Return: no value.
 */
int print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');

		}
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
