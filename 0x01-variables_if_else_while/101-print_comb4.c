#include<stdio.h>
#include<stdlib.h>

/**
 * main - our function's entry point.
 *
 * description: Printing all possible different
 * combinations of three digits.
 * We are using only putchar function.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x + y + z < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
