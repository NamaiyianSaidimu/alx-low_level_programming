#include "main.h"

/**
 * times_table - printing the 9 times table
 *
 * Description: We are printing the entire
 * multiplication table from 0 to 9
 *
 * Return: no value.
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i < 9)
		{
			_putchar(0 + '0');
			_putchar(' ');
		}
		else
		{
			_putchar(0 + '0');
		}
	}
	for (i = 0; i <= 9; i++)
	{
		if (i < 9)
		{
			_putchar(i * (i + 1) + '0');
			_putchar(' ');
		}
		else
		{
			_putchar(i * (i + 1) + '0');
			_putchar(' ');
		}
	}
}
