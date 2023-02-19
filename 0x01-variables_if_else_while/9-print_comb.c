#include<stdio.h>
#include<stdlib.h>

/**
 * main - out program's entry point
 *
 * description: Printing all combinations of
 * single digit numbers using the function
 * putchar. They should be printed in
 * ascending order and separated by a
 * comma followed by a space.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
