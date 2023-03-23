#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: number of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *separator = "";

	va_list(ls);

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ls, double));
					break;
				case 's':
					string = va_arg(ls, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
