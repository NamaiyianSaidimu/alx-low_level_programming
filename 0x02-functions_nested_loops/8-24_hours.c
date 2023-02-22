#include "main.h"

/**
 * jack_bauer - printing minutes of the day
 *
 * description: A function that prints every
 * minute of the day of Jack Bower from
 * 00:00 to 23:59
 *
 * Return: no value.
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i < 3)
	{
		while (j < 4)
		{
			while (k < 6)
			{
				while (l < 10)
				{
					_putchar(l + '0');
					l++;
				}
				_putchar(k + '0');
				k++;
			}
			_putchar(j + '0');
			_putchar('\n');
			j++;
		}
		_putchar(i + '0');
		i++j
	}
}
