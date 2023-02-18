#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point.
 *
 * description: A C program that prints the
 * lowercase alphabet in reverse.
 * We are only using the putchar function.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
