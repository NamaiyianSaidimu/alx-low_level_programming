#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n + '0');
	}
	else if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n * -1) + '0');
	}
}
