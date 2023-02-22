#include "main.h"

/**
 * print_last_digit - A function that
 * prints the last digit if a number
 *
 * Description: We get the last digit of a number
 * and print it to the stdout
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x == 0 || x > 0)
	{
		last_digit = x % 10;
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = (x % 10) * -1;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
