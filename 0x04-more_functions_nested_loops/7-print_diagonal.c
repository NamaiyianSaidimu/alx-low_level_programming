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
		for (i = 1; i <= c; i++)
		{
			for (j = 1; j <= c; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
