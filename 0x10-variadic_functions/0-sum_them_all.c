#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums integers
 * @n: the first parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	/* initializing the argument list */
	va_start(ls, n);
	/* Getting the next argument */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	/* Ending the argument list */
	va_end(ls);
	return (sum);
}
