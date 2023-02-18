#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point.
 *
 * description: A C program that prints the
 * single digit numbers to base 10, using
 * the putchar function.
 *
 * Return: Always0(Success!)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
