#include<stdlib.h>
#include<stdio.h>

/**
 * main - out program's entry point
 *
 * description: A program that prints the
 * alphabet in lower case using the
 * function putchar()
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar ('\n');
	return (0);
}
