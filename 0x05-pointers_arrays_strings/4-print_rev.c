#include "main.h"

/**
 * print_rev - printing a string in reverse
 * @s: pointer to the string we will reverse
 *
 * Description: We are printing a string in reverse
 * order, followed by a new line.
 *
 * Return: void
 */

void print_rev(char *s)
{
	char c;
	int a;
	int b = 0;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		b++;
	}
	for (a = b - 1; a >= 0; a--)
	{
		c = *(s + a);
		_putchar(c);
	}
	_putchar('\n');
}
