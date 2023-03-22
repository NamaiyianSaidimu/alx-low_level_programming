#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printing a name
 * @name: The name to print
 * @f: a function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
