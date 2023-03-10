#include <stdio.h>

/**
 * main - our program's entry point
 * @argc: number of arguments in the program
 * @argv: array of pointers to arguments
 *
 * Description: A program that prints all
 * the arguments it receives
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
