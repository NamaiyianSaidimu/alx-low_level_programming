#include "main.h"
#include <stdio.h>

/**
 * print_array - printing elements of integer array
 * @a: pointer to integer
 * @n: integer operand
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");

}
