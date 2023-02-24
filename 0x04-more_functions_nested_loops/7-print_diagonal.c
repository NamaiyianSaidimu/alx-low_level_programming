#include "main.h"

/**
 * print_diagonal - printing a diagonal on the terminal
 * @c: length in units of diagonal.
 * Return: void
 */
void print_diagonal(int c)
{
	int i;
	int j;

	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i == c - 1)
			{
				continue;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
