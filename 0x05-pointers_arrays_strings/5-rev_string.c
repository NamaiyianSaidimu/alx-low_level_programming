#include "main.h"

/**
 * rev_string - reversing a string
 * @s: pointing to the string to be reversed
 *
 * Description: The function should reverse any
 * string given to it.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int j;
	int middle;
	int len;
	/* Finding the string length */
	for (i = 0; *(s + i) != 0; i++)
	{
		len++;
	}
	middle = len / 2;

	for ( j = 0; j < middle; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
