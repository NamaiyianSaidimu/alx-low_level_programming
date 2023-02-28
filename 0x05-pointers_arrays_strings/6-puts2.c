#include "main.h"

/**
 * puts2 - prints every other char of a str
 * @str: points to the string we want
 *
 * Description:Prints every other character,
 * starting with the first one and followed
 * by a new line.
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
