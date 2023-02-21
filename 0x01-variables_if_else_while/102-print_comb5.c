#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point.
 *
 * description: A C program that prints
 * out all the possible combinations of
 * two two-digit numbers.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}