#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point
 *
 * description: A C program that prints the
 * alphabet in lowercase then uppercase,
 * followed by a new line.
 * We are using only the putchar function
 * to print.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
