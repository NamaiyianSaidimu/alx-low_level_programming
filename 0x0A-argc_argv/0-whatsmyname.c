#define UNUSED(argc) main(argc)
#include <stdio.h>

/**
 * main - entry point of our program
 * @argc: first argument
 * @argv: second argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
