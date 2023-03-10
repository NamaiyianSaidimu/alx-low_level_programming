#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - our program's entry point
 * @argc: number of arguments in our program
 * @argv: array of pointers to our arguments
 *
 * Description: A program that adds positive
 * numbers
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (*(argv + i) != NULL)
		{
			if (!isdigit(*(argv + i)))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result = atoi(*(argv + i)) + atoi(*(argv + (i + 1)));
			}
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
