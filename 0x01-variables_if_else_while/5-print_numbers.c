#include<stdio.h>
#include<stdlib.h>

/**
 * main - our program's entry point
 *
 * description: A C program that prints
 * all the single digit numbers of
 * base 10 starting from 0.
 * Output should be followed by a new line.
 *
 * Return: Always 0(Success!)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
