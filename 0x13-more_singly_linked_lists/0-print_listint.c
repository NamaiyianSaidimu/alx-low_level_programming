#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - printing the linked list elements
 * @h: node pointer
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	while (temp != NULL)
	{
		count = count + 1;
		temp = temp->next;
	}
	return (count);
}
