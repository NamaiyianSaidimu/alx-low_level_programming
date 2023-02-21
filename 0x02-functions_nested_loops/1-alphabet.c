#include "main.h"

/**
 * print_alphabet: A function that prints the
 * alphabet.
 *
 * Description: The alphabet should be in lowercase
 * and followed by a new line.
 *
 * Return: no value (void).
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

