#include<stdio.h>
#include<stdlib.h>

/**
 * main - this is our program's entry point.
 *
 * description: Printing all the possible different
 * combinations of two digits.
 * We are only using the putchar function.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
