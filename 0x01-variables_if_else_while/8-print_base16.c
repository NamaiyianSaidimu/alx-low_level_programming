#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point
 *
 * description: A C program that prints all
 * the numbers of base 16 in lowercase.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar((num %10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
