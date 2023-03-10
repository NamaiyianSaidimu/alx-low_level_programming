#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - our program's entry point
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Description: A program that multiplies two
 * numbers
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result = atoi(*(argv + 1)) * atoi(*(argv + 2));

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
