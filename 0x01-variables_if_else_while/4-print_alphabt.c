#include<stdlib.h>
#include<stdio.h>

/**
 * main - our program's entry point
 *
 * description: A C program that prints the
 * alphabet in lowercase except q and e,
 * followed by a new line.
 * We are only allowed to use putchar
 * function in our code.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
