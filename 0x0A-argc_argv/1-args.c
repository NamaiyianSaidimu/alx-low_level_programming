#include <stdio.h>
#include <string.h>

/**
 * main - program's entry point
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: A program that prints
 * the number of arguments passed into it
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg_number = argc - 1;

	printf("%d\n", arg_number);
	(void)argv;
	return (0);
}
