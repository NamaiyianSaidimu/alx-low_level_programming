#include <stdio.h>

/**
 * main - our program's entry point.
 *
 * Return: 0
 */

int main(void)
{
	long prime_test = 612852475143;
	int factor;

	while(factor < (prime_test / 2))
	{
		if (prime_test % 2 == 0)
		{
			prime_test /= 2;
			continue;
		}
		for (factor = 3; factor < prime_test / 2; factor += 2)
		{
			if (prime_test % factor == 0)
			{
				prime_test /= factor;
			}
		}
	}
	printf("%ld\n", prime_test);
	return (0);
}
