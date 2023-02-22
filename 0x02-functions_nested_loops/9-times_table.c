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
	int j;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			while (k <= 9)
			{
				_putchar(j * k + '0');
				_putchar(',');
				_putchar(' ');
				k++;
			}
		}
		_putchar('\n');
	}
}
