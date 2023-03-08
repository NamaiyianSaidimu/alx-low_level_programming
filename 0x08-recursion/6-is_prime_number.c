#include "main.h"

int divide(int num, int i);
ing is_prime_number(int n);

/**
 * divide - checks whether an int is divisible by a num
 * @num: the int to be divided
 * @i: our divisor integer
 *
 * Return: 0 if divisible, -1 otherwise
 */
int divide(int num, int i)
{
	if (num % i == 0)
	{
		return (0);
	}
	if (num / 2 == i)
	{
		return (1);
	}
	return (divide(num, i + 1));
}

/**
 * is_prime_number - check if a num is prime
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (divide(n, divisor));
}
