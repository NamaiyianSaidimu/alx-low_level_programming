#include "main.h"

/**
 * print_diagsums - printt sum of two diagonals
 * @a: Our matrix
 * @size: Our row and column number
 *
 * Description: This function prints the sum of
 * the two diagonals of a square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diagonal1 = 0;
	int diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diagonal1 += (*(a + i) + j);
			}
			else if ((i + j) == (size - 1))
			{
				diagonal2 += (*(a + i) + j);
			}
		}
		_putchar(diagonal1 / 10 + '0');
		_putchar(diagonal1 % 10 + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(diagonal2 / 10 + '0');
		_putchar(diagonal2 % 10 + '0');
	}
}
