#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: pointer to array
 * @n: array size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *ptr;
	int i;

	for (i = 0; i < n; i++)
	{
		ptr[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = ptr[i];
	}
}
