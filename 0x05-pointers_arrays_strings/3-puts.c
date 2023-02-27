#include "main.h"

/**
 * _puts - printing a string
 * @str: points to the string we want to print
 *
 * Description: A function that prints a given string
 * without using standard library.
 *
 * Return: void
 */
void _puts(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str;
		_putchar(a);
		str++;
	}
	_putchar('\n');
}
