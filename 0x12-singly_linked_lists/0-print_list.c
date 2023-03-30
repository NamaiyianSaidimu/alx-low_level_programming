#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - printing the elements of list_t
 * @h: The first element of list_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int count = 0;

	while (temp != NULL)
	{
		count += 1;
		printf("%s\n", temp->str);
		temp = temp->next;
	}
	return (0);
}
