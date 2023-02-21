#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * description: This function prints ten times the
 * alphabet in lowercase, followed by a new line.
 *
 * Return: no value.
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
