#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - calculating the length of a string
 * @str: the string to be evaluated
 *
 * Return: string length
 */
int _strlen(char *str)
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
 * _memcpy - copying memory area
 * @dest: destination string
 * @src: source string
 * @n: bytes
 *
 * Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination;
	char *source;

	source = src;
	destination = dest;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
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
	unsigned int length;
	char *all_arguments, *arguments;

	for (i = 1; i < ac; i++)
	{
		length = _strlen(av[i]);
	}
	all_arguments = arguments = (char *)malloc(length + ac - 1);
	if (all_arguments == NULL)
	{
		return (NULL);
	}
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		_memcpy(all_arguments, av[i], _strlen(av[i]));
		all_arguments += _strlen(av[i]);
		*(all_arguments - 1) = '\n';
	}
	*(all_arguments - 1) = 0;
	return (arguments);
}
