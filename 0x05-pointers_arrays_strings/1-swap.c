#include "main.h"

/**
 * swap_int - swapping two integers.
 * @a: first pointer to the first int
 * @b: pointer to the second int
 *
 * Description: We are using pointers to swap
 * the value of two integers.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
