#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of CLI arguments
 * @argv: array of parameter names
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Invalid");
		exit(98);
	}

	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("Invalid");
		exit(98);
	}

	printf("%d\n", function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
