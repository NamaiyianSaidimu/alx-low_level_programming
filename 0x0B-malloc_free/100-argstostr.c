#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - calculating the length of a string
 * @str: string to be evaluated
 *
 * Return: string length
 */
int _strlen(char **str)
{
	int length = 0;
	
	while (*str)
	{
		length++;
	}
	return (length);
}

/**
 * _strlen2 - calculating the length of a string
 * @str: the string to be evaluated
 *
 * Return: string length
 */
int _strlen2(char *str)
{
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * argstostr - concatenate program arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Description: The function concatenates all
 * arguments of our program
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length;
	char **new_arguments;
	
	new_arguments = malloc(sizeof(char *) * ac);
	for ( i = 1; i < ac + 1; i++)
	{
		new_arguments[i] = malloc((_strlen2(*(av + i)) + 1) * sizeof(char));
	}
	if (new_arguments == NULL)
	{
		return (NULL);
	}
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < ac; i++)
		{
			length = _strlen2(av[i]);
			for (j = 0; j <= length; j++)
			{
				if (av[i][j] == ' ')
				{
					av[i][j] = '\n';
				}
				else
				{
					new_arguments[i][j] = av[i][j];
				}
			}
		}
		return (*new_arguments);
	}
}
