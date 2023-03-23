#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printing string arguments
 * @separator: character separating the strings
 * @n: number of string arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (!string)
		{
			string = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", string);
		}
		else if (separator != NULL && i == 0)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s%s", separator, string);
		}
	}
	printf("\n");
	va_end(strings);
}
